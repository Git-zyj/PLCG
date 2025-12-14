/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179172
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
    var_20 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_4 [i_1]);
                                var_22 = ((/* implicit */short) (((~(((/* implicit */int) arr_7 [i_1] [i_1 + 2] [i_2])))) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_1])))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1] [i_1])) << ((((-(((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_2 + 1])))) - (84)))));
                                var_24 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) arr_0 [i_1]);
                }
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)40387)) - (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
