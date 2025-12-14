/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_0] = (arr_4 [i_0] [i_1]);

                for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_14 = (arr_6 [i_0]);
                    var_15 = ((((~(max((arr_2 [i_0]), (arr_9 [i_0 + 1]))))) != ((max(((min(var_2, (arr_1 [i_0])))), 23107)))));
                    arr_13 [i_0] [i_0] [i_0 - 1] = ((((max((arr_6 [i_0]), (arr_6 [i_0])))) ? (((!(arr_11 [i_0] [i_1 + 2] [i_2 + 3] [i_2 - 1])))) : ((((arr_11 [i_0] [i_0] [0] [i_2]) <= (arr_3 [i_1 + 1]))))));
                    var_16 = var_1;
                    var_17 = (min(var_17, ((((max(5276436320134855387, -66)) < ((((!((((arr_2 [12]) ? var_9 : (arr_1 [i_2])))))))))))));
                }
                for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_18 = (arr_2 [i_0]);
                    var_19 = (((((arr_11 [i_0] [i_1 + 2] [i_3 - 1] [i_0 + 2]) < (arr_11 [i_0] [i_1 + 2] [i_3 + 3] [i_0 + 1]))) ? var_6 : ((((((arr_6 [i_0]) ? (arr_5 [i_1]) : var_12))) ? ((1 ? 9378 : var_7)) : var_0))));
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_22 [i_0 + 3] [14] [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_4 - 1] [i_4 - 1]);
                    var_20 *= (((arr_3 [i_1]) << (((arr_6 [0]) + 41))));
                }
                arr_23 [i_0] [i_1 - 1] = ((((((20537 ? var_8 : (arr_14 [i_0] [i_0]))) ? var_12 : (arr_9 [i_0 + 4])))));
            }
        }
    }
    var_21 = var_1;
    var_22 = ((((((min((-9223372036854775807 - 1), -99))) && (((var_2 ? var_6 : var_11))))) ? ((var_10 & (124 | var_12))) : ((((min(var_12, var_2))) ? var_10 : (~var_5)))));
    var_23 = ((((max((max(var_2, var_13)), var_11))) ? -var_0 : ((min(var_5, 39)))));
    #pragma endscop
}
