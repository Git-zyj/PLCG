/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((116 & var_4) | (5123 | var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((1 ? ((min(var_2, ((min(116, (arr_6 [i_1]))))))) : (((((arr_0 [9]) ? (arr_1 [i_0] [4]) : 18))))));
                            var_18 *= ((-(((!(((arr_10 [i_0] [3] [i_2] [i_0] [13]) && 116)))))));
                            var_19 *= (min(38668, 119));
                            arr_11 [11] [11] = (max((((var_8 ? -117 : ((max((arr_4 [i_0] [i_1] [i_2]), 1)))))), (min(-6395942868332305826, 1))));
                        }
                    }
                }
                arr_12 [i_0] = ((((((204 <= var_13) || ((65520 || (arr_2 [i_0])))))) % (arr_6 [i_0])));
                var_20 = (max(var_20, (((((((51 ? -58 : (arr_2 [i_1])))) ? (var_12 | -6395942868332305826) : (max(14941039861458385815, 109))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [6] [8] [i_4] [6] [i_5] = (((((arr_0 [i_4]) ? (arr_0 [4]) : (((arr_8 [i_0] [i_0] [7] [i_5]) ? var_14 : 3321393714)))) & (((-(arr_0 [i_5]))))));
                            arr_18 [i_0] [2] [i_4 - 1] [i_5] [5] = (((((arr_7 [i_0] [i_1] [i_4]) + ((-(arr_5 [i_0] [2] [i_4] [i_5]))))) ^ -123));
                        }
                    }
                }
                var_21 = (arr_7 [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
