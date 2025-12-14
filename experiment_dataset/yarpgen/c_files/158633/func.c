/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158633
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
    var_14 = ((/* implicit */short) ((int) max((((/* implicit */int) var_12)), (max((((/* implicit */int) var_7)), (var_4))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1 + 3] [i_2 - 1]))))), (max((arr_7 [i_1 + 3] [i_2 - 3] [i_2 - 2]), (((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_3 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4] [i_2] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))));
                                var_16 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) 646980140)), (780632998920844805LL))) > (var_3)));
                                var_17 &= ((/* implicit */unsigned int) ((unsigned long long int) max((arr_5 [0] [0]), (var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */_Bool) 1ULL);
}
