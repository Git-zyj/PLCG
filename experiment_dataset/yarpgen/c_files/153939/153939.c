/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = var_10;
    var_14 = (max(var_14, (((((((-877518085 - var_6) - ((var_10 ? var_11 : 22))))) ? var_6 : ((-var_8 + (var_2 - var_11))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = ((((arr_1 [i_1]) ? (((arr_3 [i_0] [i_0]) & (arr_3 [i_1] [i_0]))) : var_11)) < (-570233637 || 5119692584361110260));
            var_16 = ((-369076053 ^ ((((~-570233653) > ((var_5 ? (arr_3 [i_1] [i_0]) : (arr_3 [i_0] [i_0]))))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_17 = ((((((5119692584361110260 >= (arr_8 [i_0] [i_3] [i_0]))))) % (((arr_1 [i_0]) - 44569179))));
                    arr_10 [2] [i_3] = var_7;

                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] |= (!17);
                        var_18 -= ((((~(arr_5 [i_0] [i_3] [i_0]))) * (((((arr_1 [i_0]) < var_4))))));
                        var_19 = (arr_5 [i_3 + 1] [6] [8]);
                        var_20 = (((var_11 || 8388607) >> ((((var_3 - (arr_2 [i_4] [i_1] [i_2]))) + 3188646958841478485))));
                        arr_14 [i_0] [i_0] [4] [i_0] [i_3] [i_3] [i_4] = -1080351978628841962;
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_21 = ((((~(arr_0 [i_2] [i_1]))) % (arr_9 [i_3] [8] [8] [8])));
                        arr_17 [i_3] [i_5] [1] = (((((28 ? 1350283052 : var_0))) - (arr_9 [i_3] [i_3 + 1] [7] [i_3 - 2])));
                        arr_18 [i_3] [i_2] = (arr_7 [i_0]);
                        var_22 = ((217 != (arr_9 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                        var_23 = (min(var_23, 0));
                    }
                    arr_19 [i_3] [i_2] [i_3] = ((!(arr_6 [i_0] [1] [1])));
                }
                var_24 = (((arr_5 [i_0] [i_1] [i_2]) ? (arr_5 [i_2] [i_1] [i_0]) : (arr_5 [i_2] [i_1] [i_0])));
                var_25 = (arr_16 [i_0] [i_1] [i_2] [i_2] [i_0] [i_2]);
                var_26 = ((((-550485625 ? 4294967295 : (arr_1 [i_0]))) & (arr_5 [i_0] [i_0] [i_0])));
                var_27 = (arr_5 [i_2] [i_1] [i_1]);
            }
            var_28 = (min(var_28, (-127 - 1)));
        }
        arr_20 [i_0] = (((((arr_8 [i_0] [i_0] [i_0]) + 2147483647)) >> ((((((var_10 ? var_11 : var_8)) - 12743)) + 12761))));

        /* vectorizable */
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            var_29 = -44569187;
            arr_23 [i_0] [i_6] = (((var_5 | 44569172) & (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])));
        }
    }
    var_30 = ((((((var_6 >> (-5843601709803234283 + 5843601709803234293))))) ? (((var_3 - var_1) << (var_7 - 1516057626))) : var_3));
    #pragma endscop
}
