/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 3598328609729283194;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (((((arr_0 [i_0]) || (arr_0 [i_0]))) ? 3598328609729283194 : (arr_1 [9] [9])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = ((-3598328609729283194 ? (((arr_0 [i_0]) ? (arr_0 [i_1]) : 1)) : (arr_0 [i_0])));
            var_13 = ((((-25631 ? 3598328609729283188 : -3598328609729283188)) / ((max((arr_1 [i_0] [i_1]), (arr_2 [i_0] [i_0] [i_0]))))));
        }
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            arr_7 [i_2] [5] [i_0] = (arr_1 [7] [3]);
            var_14 = (((((var_7 ? ((max((arr_2 [3] [i_0] [i_0]), (arr_5 [0] [0])))) : (arr_1 [i_2 - 3] [i_2 - 4])))) ? (((min((!var_2), (arr_2 [4] [i_0] [6]))))) : var_5));
            var_15 = (arr_4 [i_2]);
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_16 = (~-3598328609729283195);
                    arr_15 [i_0] [i_0] [i_5] [2] = var_9;
                }
                for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                {
                    var_17 = var_5;
                    var_18 = (max(var_18, var_0));
                }
                var_19 = ((((max((arr_0 [i_0]), (arr_0 [i_3])))) ? (arr_9 [i_0] [i_0]) : var_6));
            }
            var_20 = (0 | 6285);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {
                    var_21 = ((((((arr_18 [i_7] [i_8 - 1] [i_8 + 1]) ? 0 : (arr_14 [i_8] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1])))) ? (((arr_19 [i_8 - 1] [i_8 - 1] [i_8 + 1]) ? ((min(var_4, (arr_1 [i_0] [i_0])))) : (arr_6 [i_7]))) : var_1));
                    var_22 = (min(var_22, ((min(((((arr_22 [i_8 - 1] [i_8] [i_8 - 1] [i_8]) | (arr_22 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1])))), (arr_18 [i_7] [i_7] [i_8 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
