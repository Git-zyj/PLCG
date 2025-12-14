/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
            {
                var_10 ^= (arr_0 [i_0]);
                var_11 = (arr_1 [i_0 - 3]);
                var_12 = ((((((14554 ? (arr_2 [i_0 - 3] [i_2]) : var_3)) - var_6)) << (((-var_3 + 67) - 29))));
            }
            for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_0 - 3] [i_1] [1] = var_0;
                var_13 -= ((((~((var_8 ^ (arr_6 [9] [20] [i_1] [i_0]))))) ^ (~2280968475)));
                arr_11 [8] [i_1] [i_3] [6] = ((min((((var_8 || (arr_3 [i_0])))), (max((arr_9 [i_0] [7] [i_0] [i_3]), var_2)))) * (((var_3 ? (!var_6) : var_1))));
            }
            for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_14 = 192;
                arr_14 [i_0] [i_0] [i_4] = 2280968475;
            }
            arr_15 [i_0 - 2] |= ((((min(2013998820, (max(var_0, var_3))))) ? ((var_7 + (((arr_9 [i_0] [i_1] [i_1] [10]) ? var_8 : var_4)))) : (((min(1, (arr_13 [i_0 - 1] [i_0 - 3])))))));
            var_15 = var_1;
            var_16 = ((((arr_9 [i_1 - 1] [i_1 + 1] [i_0 - 3] [i_0 - 3]) == (arr_3 [i_0 - 3]))));
        }

        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            var_17 = var_0;
            var_18 = (arr_6 [i_0 - 2] [i_0] [i_0] [i_0]);
            arr_19 [i_0] [6] [3] = (arr_16 [i_0] [i_0] [1]);
        }
    }
    var_19 = var_7;
    var_20 = (min(var_5, (((var_4 & (((1 ? var_2 : 192))))))));
    var_21 -= var_3;
    var_22 -= ((-((var_2 ? var_0 : (min(var_2, var_6))))));
    #pragma endscop
}
