/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((3682764061033055407 ? (((~(12074 / 12074)))) : ((14786 ? 1099511627775 : 8389))));
    var_21 *= (var_0 < var_16);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_22 -= -2009997573;
        arr_3 [i_0] [i_0] = 2009997577;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_23 = (arr_13 [i_1] [i_2] [i_3] [i_4] [i_5]);
                                arr_16 [i_1] [i_2] [7] [i_3] [i_4] [0] [i_5] |= (arr_5 [i_4]);
                                arr_17 [i_1 - 1] [i_1] [i_2] [0] [i_4] [i_5] = (min(((((~(arr_9 [7] [i_3]))) + ((max((-2147483647 - 1), -1348570576))))), 12074));
                                var_24 += (((arr_2 [i_2]) ? (-2147483647 - 1) : ((14786 * (arr_13 [i_1] [i_2 - 1] [6] [1] [i_5 - 2])))));
                            }
                        }
                    }
                }
                var_25 = (((((2147483647 ? (arr_4 [i_1 + 1] [i_2 + 3]) : (arr_2 [i_1])))) ? 278863505 : ((-20 + (arr_4 [i_1 - 1] [i_2 + 1])))));

                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    arr_20 [i_1] [i_2] [i_6] |= (1 < 1);
                    arr_21 [i_1] [i_2] [i_6] &= ((((arr_5 [i_1 - 1]) ^ ((((1099511627775 < (arr_14 [3] [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_28 [i_7] = ((((((arr_5 [i_1 - 2]) ? (arr_5 [i_1 - 1]) : 1))) ? -0 : (((arr_15 [i_6] [i_2 + 1] [i_2]) ^ ((30980 ? 61962183 : 0))))));
                                var_26 ^= 370559613;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_27 = (max(var_27, 4278190080));
                        var_28 = (max(var_28, (arr_29 [i_6] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {

                        for (int i_11 = 3; i_11 < 9;i_11 += 1)
                        {
                            var_29 = (min(var_29, 0));
                            var_30 ^= 0;
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_31 = (max(var_31, (arr_15 [1] [i_1] [i_1])));
                            var_32 |= (((((var_12 ? (arr_9 [i_1] [i_1]) : 27882))) ? 1 : ((1 ? 0 : 7328195300565047450))));
                            arr_40 [i_1 - 2] [1] [i_1 - 2] [5] [5] = (61962200 << 1);
                            arr_41 [i_1] [i_2 + 1] = -521107169261596975;
                        }
                        var_33 -= 67108800;
                        var_34 = (max(var_34, ((((arr_10 [i_1] [i_2] [i_6] [i_10]) ? (((arr_9 [i_2 + 2] [i_2 + 2]) & -1)) : (arr_10 [i_6] [i_2] [i_6] [4]))))));
                    }
                    for (int i_13 = 3; i_13 < 8;i_13 += 1)
                    {
                        arr_45 [i_1 - 1] [i_1 - 1] [7] [i_13] = (min((((((arr_10 [i_13] [i_6] [i_2 - 2] [4]) && (arr_4 [i_1] [i_6]))))), var_11));
                        var_35 = (arr_8 [i_2] [10] [i_2 - 1]);
                    }
                    arr_46 [3] [i_2] [i_6] = 1;
                }
            }
        }
    }
    #pragma endscop
}
