/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = (min((arr_3 [i_0] [i_0]), (((((~(arr_5 [i_0] [i_1] [i_2] [6])))) ? ((var_2 ? 4222 : 32752)) : 4217))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_1] = ((arr_1 [i_3]) ? 1893811671 : (arr_1 [i_3]));
                            arr_14 [i_1] [10] = 29584;
                            var_14 = (min(var_14, (arr_9 [i_1] [i_1] [11] [3])));
                            var_15 += var_3;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((!((((((1 ? var_13 : 4218))) ? ((var_10 ? 12754 : (arr_10 [i_0] [i_1] [i_2] [11] [11] [11] [i_3]))) : ((((arr_5 [i_0] [i_1] [i_2] [i_3]) != (arr_4 [i_5] [i_1] [i_0])))))))));
                            var_17 = ((((((9223372036854775779 / 1398450694) == (((arr_4 [i_0] [i_1] [i_2]) ^ 18104))))) < (!421)));
                            var_18 = 29580;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_20 [6] [i_3] [i_1] [i_1] [i_0] = arr_3 [i_2] [i_6];
                            var_19 -= (((min(35946, -1785436416))) ? ((~((0 ? 731956648 : var_11)))) : ((min((min(var_3, -20)), (min(4294967281, var_4))))));
                        }
                        arr_21 [i_1] [i_1] = (min((((~((~(arr_2 [7] [7])))))), ((+(((arr_10 [i_0] [i_1] [i_2] [i_3] [0] [i_2] [3]) ? (arr_16 [i_3] [i_1]) : 0))))));
                        arr_22 [i_1] = var_4;
                        var_20 = ((((!(arr_6 [i_0] [i_1] [i_2] [11]))) ? 1407709351 : ((~((-(arr_1 [i_1])))))));
                        var_21 -= (-32767 - 1);
                    }
                }
            }
        }
    }
    var_22 = ((min((23305 >= -4207), var_9)));
    var_23 ^= ((var_12 ? ((min(2896516601, ((min(-32767, var_2)))))) : 2851565824));
    #pragma endscop
}
