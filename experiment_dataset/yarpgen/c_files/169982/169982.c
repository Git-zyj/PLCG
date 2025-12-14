/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((~((~(max(15913449572505259254, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 -= ((!((((arr_1 [i_0]) ? 143 : 15913449572505259254)))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = (min(var_14, (arr_4 [i_0] [i_1])));
                    var_15 += ((var_6 ? (((arr_6 [i_0 + 1] [i_0]) ? (max((arr_6 [i_0] [i_0]), (arr_4 [i_2] [3]))) : (arr_1 [i_0]))) : (((~((min(var_3, 0))))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    arr_10 [i_3] |= (~var_7);

                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_3] [4] [i_5] |= (arr_8 [i_3 - 2] [i_4 + 1] [i_0 + 1]);
                            arr_19 [i_4] [i_5] = ((-(var_8 | var_2)));
                            var_16 = (max(var_16, (24618 / 2963670456522585433)));
                            arr_20 [i_0] [i_1] [12] [1] |= ((!((((arr_7 [i_0] [1]) - var_4)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [8] [i_4] [i_4] = (~3055131077);
                            var_17 ^= (arr_4 [i_0] [i_4 + 1]);
                            arr_25 [i_6] [i_6] [i_4] [i_4] [i_4] [i_1] [i_0] = var_0;
                            var_18 = (min(var_18, (((var_5 ? (arr_3 [i_0 + 1] [i_3 + 1] [i_3 - 2]) : (arr_15 [i_0] [i_1] [i_0] [i_4] [i_3 - 2] [i_3 - 2]))))));
                            var_19 += ((~(arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        var_20 ^= (((arr_5 [i_0 + 1] [i_0]) % (arr_5 [i_0 + 1] [i_0 + 1])));
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        arr_28 [i_0] [3] [i_0] [i_7] [i_0] [1] = (((arr_7 [i_7 + 1] [i_0 + 1]) << (((arr_5 [i_3 - 2] [i_7 + 1]) - 10341544349387064188))));
                        var_21 += ((-1638 ? var_1 : (4194303 * 1)));
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_22 = (max(var_22, (((~(((((max(var_4, var_4))) >= (arr_3 [i_0] [i_1] [i_1])))))))));
                    var_23 = 28032;
                    var_24 *= ((((min((min(52045, -59)), ((max((arr_1 [i_0]), var_2)))))) ? var_7 : (((max(((((arr_3 [i_0] [i_0] [i_0]) >= -10947))), (arr_16 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])))))));
                }
            }
        }
    }
    var_25 = var_8;
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 24;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_26 = (min(var_26, (((~(((arr_37 [i_11 - 1]) - (arr_37 [i_11 - 1]))))))));
                                var_27 = (max(var_27, ((max((max(((~(arr_35 [i_9]))), ((var_1 << (var_7 - 7346878655602584725))))), (arr_40 [i_13 - 2] [i_12 + 1]))))));
                            }
                        }
                    }
                    arr_45 [i_9] [i_9] [i_9] [i_11] = 1;
                    arr_46 [i_9] = (min((max((arr_35 [i_9 + 1]), 1)), ((((!13514) || ((!(arr_33 [i_9]))))))));
                    var_28 *= (((((((max((arr_39 [i_9] [i_9] [i_10] [i_11 + 1]), 2533294501204292362))) ? ((((arr_36 [i_9] [i_9] [i_9]) ? var_1 : (arr_43 [i_9] [i_9] [1] [23])))) : ((12288 ? var_5 : -2160))))) ? (arr_36 [i_9] [i_10] [i_11 - 2]) : (((var_7 ? var_8 : var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
