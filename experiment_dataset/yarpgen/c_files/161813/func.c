/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161813
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_1])) && (((/* implicit */_Bool) var_12)))))));
                            arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        for (int i_5 = 3; i_5 < 13; i_5 += 2) 
        {
            {
                var_17 = ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_11)))));
                arr_21 [i_4] = ((/* implicit */unsigned short) (((+(3998130663U))) % (((/* implicit */unsigned int) arr_16 [(short)12] [(short)12]))));
            }
        } 
    } 
}
