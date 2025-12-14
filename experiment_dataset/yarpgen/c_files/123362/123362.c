/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((~((~(-2 | 32)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((((0 ? var_7 : 2)) - ((var_16 ? 0 : -19269))));
                                arr_19 [i_1] [8] &= (((var_10 / var_18) << (-14 + 72)));
                            }
                        }
                    }
                }
                var_21 ^= (((((-3 ? (arr_2 [i_0]) : 227)) << (((((arr_9 [i_0] [i_1]) + 1349624598)) - 17)))));
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (var_15 << (((!((min((arr_18 [i_7] [i_1] [1] [15] [1]), var_6)))))));
                                var_23 = (((((~(~0)))) ? (~var_13) : (max((max(var_19, (arr_6 [i_6] [i_1]))), 2))));
                                arr_26 [8] [i_1] [i_0] [i_6] [1] [2] [10] = (((((!(((9223372036854775776 << (1129279937 - 1129279937))))))) << 3));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_24 = (arr_8 [i_0] [i_0] [7] [i_0]);
                            var_25 ^= (((((32256 - (var_1 + var_0)))) ? -78 : ((((var_19 << (3165687358 - 3165687358))) << (((arr_15 [i_0] [i_0] [i_8] [i_0] [i_9]) - 2987473958))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_5));
    var_27 = (min(((var_11 ^ (~3165687358))), var_9));
    var_28 = var_2;
    var_29 = (65 / var_16);
    #pragma endscop
}
