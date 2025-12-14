/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134841
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                                arr_12 [i_0] [i_4] = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) (unsigned char)145)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min(((+(var_0))), (((/* implicit */unsigned long long int) (~(arr_4 [i_1 + 2] [i_2 + 1])))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) var_5);
                var_20 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_9)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_14);
    var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned char)214))));
}
