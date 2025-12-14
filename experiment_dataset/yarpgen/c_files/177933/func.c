/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177933
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
    var_10 -= ((/* implicit */unsigned char) max((min((var_1), (((/* implicit */unsigned long long int) (-(var_9)))))), (((/* implicit */unsigned long long int) (~((+(var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (+((+(var_9)))));
                    var_12 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_4 - 1]))), (min((max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                                var_14 = ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_0)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (~((-(var_9)))));
    var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_1))))));
}
