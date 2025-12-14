/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [17] [i_0] = (min(var_11, ((1789952891476078544 | (arr_1 [i_1 + 3] [i_1 + 3])))));
                var_20 = (((((~0) ? 0 : 41029)) >> ((((((var_17 ? var_13 : var_16)) + (arr_2 [i_0 - 2] [i_0 - 1]))) - 872239935))));
                var_21 += ((-(((((arr_3 [14] [i_1]) || 2946801598))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [6] [6] |= 914002521970070925;
                    var_22 *= ((((max(1789952891476078533, var_6))) ? ((min((arr_3 [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 + 2] [i_1 - 1])))) : var_10));
                    arr_10 [7] [i_0] = min((((arr_5 [i_0 + 1]) ? var_15 : var_6)), (arr_0 [i_0 + 1]));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_23 = (max(var_23, ((((((arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1]) * 0)) + (~var_1))))));
                    var_24 -= min((((((-25867 ? (arr_11 [0] [i_1 + 3] [1]) : var_2))) >= -var_11)), ((0 || (((1 ? -1999879517 : -25867))))));
                    arr_13 [18] [18] = (1 <= 504);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_25 *= (arr_2 [i_0 - 1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((arr_16 [i_1 + 3] [i_0 + 1]) << (2234207627640832 - 2234207627640802)))));
                                var_27 ^= (((3829039808 <= -1988479095) != -var_4));
                                arr_22 [i_5] [i_0 - 2] [i_1] [12] [i_5] [i_6] = (arr_19 [i_0] [i_0] [i_1 + 2] [1] [i_1 + 2] [13] [13]);
                                var_28 += (((1 != (arr_5 [i_1 + 1]))));
                                var_29 ^= (((arr_6 [i_0 - 2] [i_0 - 1] [i_0]) || (!6)));
                            }
                        }
                    }
                    var_30 = (min(var_30, 32744));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    arr_25 [i_0] [i_0 - 2] [3] = ((1789952891476078544 ? 64 : -504));
                    var_31 = (!18446744073709551615);
                    var_32 = ((((var_3 >= (arr_14 [i_0] [7] [i_7]))) || ((((-2147483647 - 1) % (arr_5 [i_7]))))));
                }
            }
        }
    }
    var_33 = var_17;
    #pragma endscop
}
