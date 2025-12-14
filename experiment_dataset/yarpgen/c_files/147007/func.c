/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147007
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
    var_17 = ((/* implicit */_Bool) ((unsigned int) (unsigned short)2));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 += ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_2] [i_1] [i_1 + 1] [i_1] = ((/* implicit */_Bool) var_9);
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [9] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 3])) >> (((/* implicit */int) arr_0 [i_0 - 1] [i_1 - 1])))), (((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_1 - 2]))))));
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [17] [i_1]);
                                var_19 += ((/* implicit */short) min((((((/* implicit */_Bool) 17ULL)) ? (arr_12 [i_3] [i_3] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_9 [17ULL] [17ULL] [i_3] [i_3]))));
                            }
                        } 
                    } 
                }
                arr_16 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
                var_20 += ((signed char) ((arr_10 [i_0 + 1] [i_0 + 1] [(short)0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((int) min(((_Bool)1), ((_Bool)1))));
    var_22 = var_6;
}
