/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_19 = (min((max((29775 || 5), ((var_3 ? var_10 : -29761)))), (((!(!29788))))));
        var_20 = var_15;
        var_21 = ((-11020223568852149243 ? (((-29759 ? (arr_1 [i_0]) : 268435456))) : (((3360886770 - ((1 ? 255 : var_3)))))));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_22 = (((((var_16 >= (arr_3 [i_0] [i_1 + 1] [i_0]))) || -var_17)));
            arr_5 [7] [i_1] = (min((94 / -29759), ((~(min((arr_1 [i_0]), var_14))))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [6] = (arr_3 [i_0] [i_0] [i_2]);
                arr_11 [i_0] [0] [0] [1] = arr_2 [i_0] [i_1] [i_2];
                arr_12 [i_0] = ((((var_7 == (arr_7 [i_1 - 1]))) ? (min(((var_6 ? (arr_3 [i_0] [i_0] [i_0]) : 0)), var_9)) : (((max(65524, 28))))));
            }
        }
    }
    var_23 = (((((-(~268435450)))) ? var_9 : (((!((min(var_17, -29759))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_24 ^= var_8;
                                var_25 = (((((~var_17) % (min(8160, var_11)))) ^ ((((arr_19 [i_5 - 2] [i_4 - 2] [i_6 + 1]) ? ((max(var_0, 1))) : var_16)))));
                            }
                        }
                    }
                    arr_28 [i_3] [i_5] [i_3] [i_3] = (min((~6863), (min((max(var_1, (arr_25 [i_5] [6] [i_5] [i_5] [5]))), 28))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_26 *= var_10;
                        arr_32 [5] [i_5] [i_5] = (~var_10);
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_36 [i_3] [i_3] [i_5] [i_5] [i_5] [i_9] = (arr_22 [i_3] [1] [i_3] [i_3]);
                        var_27 = (((((var_7 - (arr_19 [i_4] [i_5] [i_9])))) ? (((max((arr_19 [6] [i_4] [i_4 - 3]), var_14)))) : (4026531846 % -30948)));

                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            var_28 = (~46573);
                            var_29 = -29775;
                            var_30 = (max(var_30, var_5));
                        }
                        var_31 ^= (var_14 & ((~(max(var_12, (arr_24 [i_3] [i_4] [i_5 + 2] [i_3] [i_4]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_45 [i_5] = ((((~11420486830350277791) | (~769205131554613620))));
                                var_32 = (min(var_17, 0));
                                var_33 = (((~-18) - (((arr_41 [i_3] [i_11 + 1] [i_5 - 1] [i_4 - 1]) / (arr_41 [i_3] [i_11 + 1] [i_5 + 2] [i_4 - 3])))));
                            }
                        }
                    }
                    var_34 += (min(((((((arr_42 [i_3] [i_5]) + (arr_29 [i_3] [i_3] [i_3]))) % (min(513508186, 29788))))), (((~(arr_16 [i_4] [i_5 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
