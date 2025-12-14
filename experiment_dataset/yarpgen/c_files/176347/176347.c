/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : 0))) ? ((-(arr_6 [i_0] [i_1] [i_0]))) : (!-12138396095798037903)));
                var_14 = (min(var_14, (arr_0 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 -= ((~(((((1 ? 26703 : 1))) / -7638032642952813475))));
                            var_16 -= (arr_0 [i_2]);
                            arr_11 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = (((max(65535, 70368744177663))) ? (arr_10 [i_0] [i_0]) : (max((arr_7 [i_0]), -7997)));
                            var_17 = (((((~(max((arr_7 [i_0]), (arr_8 [i_0] [i_0] [i_3])))))) < (((arr_0 [i_3 + 2]) * 13203))));
                            var_18 &= (((max(var_3, ((((var_1 + 9223372036854775807) >> (((arr_6 [i_0] [i_1] [12]) - 175818139))))))) / (((-(max(-1178248389, 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
