/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_13 ? ((((var_13 && var_12) ? (~var_17) : var_12))) : ((~(~3331504882)))));
    var_19 = ((var_2 == (!var_4)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_3] = var_10;
                        arr_13 [i_0] [i_0] [i_3] [1] [1] [i_3] = (arr_0 [1] [1]);
                        var_20 = var_11;
                        arr_14 [i_3] [i_1] [i_0] = (((arr_9 [1] [i_0] [6] [1] [1]) ? (var_13 | var_12) : var_2));
                    }
                    var_21 = (arr_7 [i_0] [1]);

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [4] [4] [i_5] [i_4] [4] = (((((((var_9 ? var_14 : var_2)) % var_10))) ? ((~(((arr_10 [i_0] [i_0] [i_2] [i_0]) ? (arr_2 [i_1] [i_5]) : var_10)))) : var_11));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [i_0] = (arr_17 [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_2] [i_4] [i_6] = ((((((~var_7) || (((var_4 ? var_14 : var_9)))))) > ((((~var_14) != ((~(arr_18 [i_0] [i_4] [i_0] [i_0] [i_0]))))))));
                            arr_24 [i_0] [i_0] [i_6] [i_0] [i_6] = var_10;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_22 &= var_1;
                            arr_28 [i_0] [i_0] [i_0] [i_0] [4] [i_0] &= (((~var_2) ? (((((var_4 ? var_8 : (arr_4 [i_4])))) | (var_9 | var_13))) : (var_2 ^ var_4)));
                            var_23 -= (~var_15);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_24 = var_2;
                            var_25 = (max(var_25, var_11));
                            var_26 = ((~(arr_25 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
                            var_27 = ((~((~((-2029937193 ? 3800188737040070536 : 65124))))));
                            arr_32 [i_0] [i_1] [i_8] [i_0] [i_8] = (((~101) ? (((((arr_10 [i_0] [i_2] [i_4] [i_8]) && (arr_26 [i_2] [i_0 + 1] [i_0 + 1] [i_4] [i_1]))) ? ((((arr_1 [i_0]) ? (arr_8 [i_2]) : var_13))) : var_3)) : var_11));
                        }
                        var_28 |= (arr_17 [i_0 - 1] [i_0 - 1]);
                    }
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        var_29 = (arr_30 [i_2]);
                        arr_35 [i_0] = -411;

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_30 = (arr_5 [i_2] [3] [i_2]);
                            arr_38 [i_10] [i_2] [i_2] [i_1] [8] [3] = (((arr_0 [i_0] [i_1]) || (!-var_17)));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((~((65131 ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 193)))));
                            arr_43 [i_0] [i_0] [i_0] [7] [9] [i_2] = ((!(((var_12 ? -var_12 : var_13)))));
                            var_31 = -var_12;
                        }
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_46 [i_1] [i_1] = (((~(~var_14))));
                        arr_47 [i_0] [i_0] [i_2] [i_12] = var_14;
                        arr_48 [i_1] [9] [i_12] = (((((~(((arr_7 [1] [i_12]) >> var_13))))) ? ((var_17 ? var_3 : 65124)) : var_13));
                    }
                    arr_49 [i_0] = (arr_2 [i_0] [i_0]);
                    var_32 = (max(var_32, var_8));
                }
            }
        }
    }
    #pragma endscop
}
