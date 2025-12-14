/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((var_2 ? var_8 : ((max(var_3, var_0)))))));
    var_16 = ((((min(1361185862, 1361185862))) ? 1361185862 : (-3603166791136190502 && var_5)));
    var_17 = (-9223372036854775807 + 2671502833);
    var_18 = var_7;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 = (max(var_19, ((((-(arr_2 [i_0 + 3])))))));
        var_20 = (min(var_20, (((((min(1361185854, (arr_1 [i_0 + 2])))) || (((1229453269 ? (1704824141855113259 - 1) : ((var_11 + (arr_0 [i_0 + 4] [2])))))))))));
        var_21 = (max(var_21, (((((1392819213 ? var_12 : var_4)))))));

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_22 = (max(var_22, (((16273 ? (min((-6801 - 3285744954137216242), ((((arr_6 [i_0] [i_0] [1]) ? 29553 : var_13))))) : -var_11)))));

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_23 ^= (((min(-1, 40297)) | ((min(2032, (1 && var_1))))));
                        var_24 ^= (((arr_12 [i_1 + 3] [i_1 - 1] [i_1 - 1]) ? (var_10 | var_1) : (arr_15 [i_3] [12] [i_3] [2] [i_3])));
                        var_25 = (!-52);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] = (var_2 ? ((((52817 ? (arr_14 [8] [8] [i_2]) : var_11)) + (min(0, (arr_6 [1] [10] [i_5]))))) : (~10267));
                        var_26 = (min(var_26, (((~((663905981 ? (min(var_8, (arr_9 [4]))) : (var_3 || var_10))))))));
                        var_27 = ((!2933781442) && ((!(arr_13 [i_2] [i_0 + 2]))));
                        var_28 ^= (((arr_10 [i_3] [i_0 - 1] [i_0 + 1] [i_1 - 1]) ? (arr_10 [i_0] [i_0 + 4] [i_0 - 2] [i_1 - 1]) : (((-(arr_10 [i_0] [i_0 + 3] [i_0 + 1] [i_1 + 3]))))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, ((((((~(arr_12 [0] [1] [3]))) - (((arr_19 [i_6] [i_3] [i_0] [i_1 + 2] [i_0]) ? (arr_5 [i_0]) : -30))))))));
                        var_30 ^= var_0;
                    }
                    var_31 = ((((((arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_0 + 3]) ^ (arr_11 [i_0 - 1] [i_1 + 3] [i_1] [i_0 - 1])))) ? (max(663905981, (~0))) : (1808315906 | -1)));
                    arr_21 [i_0] [i_3] [i_3] [i_1] = (!47522);
                }
            }
            var_32 = ((max((arr_9 [i_1 - 1]), (arr_9 [i_1 + 1]))));
        }
    }
    #pragma endscop
}
