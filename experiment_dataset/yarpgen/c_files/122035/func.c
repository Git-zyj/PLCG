/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122035
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] = (!((!(((/* implicit */_Bool) (unsigned char)255)))));
                var_16 = ((/* implicit */unsigned char) min(((-(((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1])) ? (-7547211544021139910LL) : (((/* implicit */long long int) arr_9 [i_2])))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)30977)))))));
                var_17 = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_17 [i_5] [i_5] [i_5 + 2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)210)))));
                            arr_18 [i_2] [i_5] [i_4 - 1] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                            arr_19 [i_5] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (unsigned short)27294)) : (((/* implicit */int) (short)-18488))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) var_2))))));
}
