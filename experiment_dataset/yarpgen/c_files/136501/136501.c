/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!8043957355628075735);
        arr_3 [i_0] = var_14;
        var_15 = (max(((~((-2422591924058073960 ? var_0 : 10402786718081475881)))), 0));
        var_16 = (((-var_4 | (~18446744073709551615))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((-49 ? (((arr_4 [i_1]) ? 1 : (arr_4 [i_1]))) : 32746));
        var_17 = (min(var_17, (((27390 ? (arr_5 [i_1] [i_1]) : (((-62 + 2147483647) << (1862906207639731736 - 1862906207639731736))))))));
        var_18 = (min(var_18, 16583837866069819879));
        var_19 = (arr_4 [1]);
    }
    var_20 &= 472092419;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_3] = max(var_5, (min((arr_12 [5]), ((0 ? (arr_11 [i_3]) : 0)))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_4] [i_4] [i_5] [i_6] [i_6] = (((((arr_16 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2]) && (arr_17 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2]))) ? ((min(101, -11))) : (((arr_15 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2]) ? (arr_17 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2]) : (arr_16 [i_4 - 3] [i_4 + 2] [i_4 + 1] [i_4 + 2])))));
                                var_21 *= (((max((arr_18 [4] [i_3] [4] [i_5] [i_6]), (((~(arr_19 [i_2] [i_3] [8])))))) <= -81));
                                arr_23 [i_2] [i_2] [1] = (~1360887435);
                            }
                        }
                    }
                }
                arr_24 [i_2] [14] [i_2] = ((((((arr_9 [i_2] [i_2]) ? (max(var_4, var_0)) : (((max((arr_19 [9] [i_2] [i_3]), (arr_21 [i_2] [i_3] [i_3] [i_2] [i_2])))))))) ^ 5754463873275918019));
                var_22 = (arr_8 [i_2]);
            }
        }
    }

    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_23 = 68;
        arr_27 [2] = ((((arr_25 [i_7 + 1] [i_7 - 1]) ? 0 : 3427)));
    }
    var_24 += 59;
    #pragma endscop
}
