/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((~1019921136) ? 4634096697404014569 : var_13));
    var_15 &= ((((var_11 ? (((2 ? var_13 : var_1))) : (max(0, 32767)))) | var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(((375515993348271710 ^ (arr_5 [i_1 + 2]))), (arr_3 [i_1 - 1] [i_0] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = ((((!(arr_7 [i_0 - 1] [8] [i_1] [i_1 - 1]))) ? (7 > 26) : (arr_3 [i_0] [i_0] [i_2])));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((-((((min(18554, 3))) / (-18555 + 121)))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_16 += (min(-18564, (-32767 - 1)));
                                arr_17 [i_0] [i_4] [i_3] [8] [i_1 - 1] [i_0] = 5968718023486846450;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                var_17 = (min(var_17, (((((-(arr_0 [i_0 - 2]))) >= 1019921143)))));
                                var_18 = (max(var_18, ((47209 ? 0 : (arr_9 [i_5] [i_2] [i_1] [8])))));
                                var_19 -= (((arr_11 [i_3] [i_0 + 1] [i_2] [i_2] [i_2]) ? -1917178529 : (49284 == -62)));
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_20 -= (min(18071228080361279899, (((!(-32767 - 1))))));
                                arr_23 [i_0] [i_0 + 1] [i_0] [i_3] [3] = (((18071228080361279906 != 0) ? ((((122 + 2591) >= 134217728))) : (arr_16 [i_0] [i_0] [i_2] [i_0 - 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((min((((!(((-22114 ? var_0 : var_5)))))), var_7)))));
    #pragma endscop
}
