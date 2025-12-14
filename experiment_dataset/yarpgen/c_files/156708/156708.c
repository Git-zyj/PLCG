/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_4, (min(989312084, (18446744073709551615 * var_10)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -1248301965;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [6] [6] [i_2] [i_3] [i_0] [i_3] [i_3] = (~var_11);
                                var_13 = (max(var_13, (~1)));
                                var_14 = (var_10 << 1);
                                var_15 ^= ((!0) ? 11681074698422755044 : (arr_7 [i_0] [i_0] [i_0] [i_0] [4]));
                                arr_15 [i_0] [i_1] [i_1] [10] [i_1] [1] = ((~(arr_10 [i_0] [i_3] [i_2] [i_4])));
                            }
                        }
                    }
                    var_16 = (min(var_16, 1));
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_0] = var_6;
            var_17 = (arr_17 [i_0] [i_0]);
        }
        var_18 = var_7;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_6] [3] [6] = -4;
                    var_19 = ((!(((((min(1342373899, 18446744073709551615))) ? 4 : ((((arr_8 [i_6] [i_6] [1] [i_6]) && (arr_6 [i_6] [4])))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_20 *= (((((max((arr_27 [i_10] [9] [i_6]), (arr_22 [10])))) ? ((((arr_17 [i_10] [i_10]) ? (arr_23 [i_6] [1]) : (arr_12 [i_10] [i_10] [i_10] [i_10] [1])))) : (min(1, (arr_3 [i_10]))))));
                    arr_33 [i_6] [i_6] = (((((((arr_3 [i_6]) / 18446744073709551604))) ? ((11 ? 15 : 32476)) : (arr_30 [i_6]))));
                    arr_34 [i_6] = (((((7289041156770921060 ? (arr_26 [i_10] [i_10] [i_6] [i_6]) : 11489402130221898013))) ? (((~(((1 || (arr_12 [i_6] [i_9] [0] [1] [i_6]))))))) : (min(((var_0 ? 4294967295 : 1)), (min(var_5, 1))))));
                }
            }
        }
        var_21 = 1713469214;
        arr_35 [i_6] = ((((min((max(var_9, var_6)), (~-7289041156770921050)))) ? 7031153687990832608 : 1401784302));
    }
    var_22 = var_3;
    #pragma endscop
}
