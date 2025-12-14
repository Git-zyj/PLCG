/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 += 6542244172971544062;
                arr_7 [i_0] [i_1] = (max((max((arr_4 [i_0]), (arr_4 [i_0]))), (((arr_4 [i_0]) ? (arr_4 [i_1]) : (arr_1 [i_0])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_13 = (min(var_13, (((max((arr_5 [i_2] [i_3 + 3]), 6542244172971544050))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3 + 2] = (min(((((arr_12 [1] [1] [i_3] [i_3 + 2]) || (arr_12 [i_3 + 2] [2] [5] [i_3 - 1])))), (arr_5 [i_0] [13])));
                        var_14 *= (max((!1240841984), (arr_2 [i_3] [i_2])));
                        var_15 &= (((min((arr_3 [i_0] [i_2]), (arr_5 [i_2] [i_3 + 2])))));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_16 = (max((arr_6 [i_0] [i_1]), (((~(arr_10 [i_2]))))));
                        arr_17 [i_4] [i_2] [i_1] [i_0] &= (min(((((~1) - (arr_9 [13] [1] [i_2] [i_4])))), (((-15386 || 1) ? 126 : 2))));
                    }
                    var_17 = arr_10 [i_0];
                }
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_5 + 1] [i_5] [i_6] = (arr_10 [i_5 + 4]);
                        var_18 += ((((((((11904499900738007546 << (arr_1 [i_6])))) ? (min((arr_15 [i_0] [i_1] [i_5] [i_6]), 1240841979)) : (arr_18 [i_0] [i_1] [i_5 + 3] [i_6])))) ? (((-(!-117)))) : (min(6542244172971544072, (arr_11 [i_6])))));
                    }
                    var_19 = (min((min((arr_20 [5] [i_1] [i_5 + 4] [i_5 + 3]), ((((-19 + 2147483647) << (((arr_15 [i_0] [i_0] [i_0] [i_0]) - 949184809))))))), ((((arr_14 [1] [i_5] [i_5 + 4] [i_5 - 1] [1] [i_1]) < (arr_14 [i_5] [i_5] [i_5 + 4] [i_5 + 1] [i_1] [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] = (min((((arr_15 [i_9] [i_1] [i_7] [i_9]) ? (arr_15 [i_0] [i_0] [15] [i_0]) : (arr_15 [i_0] [i_1] [i_7] [i_8]))), (!1)));
                                arr_32 [i_9] [i_8] [i_7] [i_1] [i_0] = (-(((arr_25 [3] [i_8] [6]) ? 11904499900738007552 : 1)));
                                var_20 = ((!(max((arr_24 [i_0] [i_0]), (arr_24 [7] [i_0])))));
                                var_21 = (((((6542244172971544069 * (arr_4 [i_9])))) && (((~(arr_0 [i_0] [i_8]))))));
                                var_22 -= 6542244172971544072;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
