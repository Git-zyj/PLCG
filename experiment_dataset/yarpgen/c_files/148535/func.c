/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148535
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 *= ((((max((((/* implicit */unsigned int) (unsigned short)31744)), (3675059567U))) < (3675059574U))) ? (((/* implicit */unsigned long long int) 619907733U)) : (((arr_2 [i_2] [i_2]) & (((/* implicit */unsigned long long int) 26)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_2])), (arr_3 [i_2] [i_2]))))));
                                arr_11 [(short)17] [i_0] [8U] [i_0] [12U] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((7) & (((/* implicit */int) arr_1 [i_3 + 1] [i_1 - 2]))))), (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */_Bool) var_0);
    var_13 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), (-959748164))));
    var_14 = ((/* implicit */unsigned int) var_4);
}
