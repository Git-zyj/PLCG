/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4294967295;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (var_6 > 6296034913225141299);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (arr_2 [i_0 - 3] [i_1 + 2]);
                    var_16 = (((arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1]) >> (var_6 - 247)));
                    var_17 = (((arr_5 [i_0] [i_0 - 1] [6]) ? var_13 : (((-(arr_7 [i_0]))))));
                    var_18 -= (((-8596 ? var_2 : 32767)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (arr_12 [i_1 + 4] [i_0] [i_2] [i_1 + 4] [i_3 + 4] [i_4]);
                                var_20 = ((var_12 ^ (arr_1 [i_0] [i_0 - 3])));
                                var_21 = (max(var_21, ((((arr_5 [16] [i_0 + 2] [i_0]) != (arr_5 [3] [i_0 - 3] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((~-14) > (!17)));
        var_23 &= (((((arr_10 [i_0] [i_0 - 3] [15] [19] [i_0]) | (arr_9 [i_0] [5] [5] [i_0]))) / (126 * 758715807)));
    }
    #pragma endscop
}
