/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((8 > ((((arr_2 [i_0] [i_0]) || 1)))))) > ((-1499264249 ? (!1380004129) : (((!(arr_1 [i_0]))))))));
        var_14 = (max(var_14, ((-6722651949292058512 ? ((~(((arr_0 [i_0]) | (arr_0 [i_0]))))) : (((min(1, 1))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_15 = var_11;
        var_16 *= (((-101 > 1067721673) ? 159 : -397627838));
        var_17 = (max(((~(arr_1 [i_1]))), ((((((3 ? var_4 : 4035225266123964416))) ? (var_12 ^ 3227245622) : 67)))));
    }
    var_18 = (((~var_6) * (var_2 == var_11)));
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        arr_15 [i_2] = var_13;
                        arr_16 [i_5 - 1] [i_2] [11] [i_2 - 1] [i_2] [i_2] = ((0 ? 1 : (arr_10 [i_2] [i_3] [i_4])));
                        arr_17 [i_2] [i_2] [i_4] [9] = (arr_11 [8] [5] [i_4] [1]);
                        arr_18 [i_2] [i_2] [i_2] [i_3] [i_2] [5] = (((((((arr_10 [10] [i_4] [i_5 - 1]) ? var_9 : var_7))) || ((max(1, (arr_11 [i_5] [2] [i_3] [1])))))) || ((!(arr_9 [i_2]))));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_20 = (max((arr_9 [i_2]), (((!(~var_5))))));
                        var_21 ^= (!1);
                    }
                    var_22 *= (var_8 | var_12);

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_23 = (min(var_23, 107));

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_28 [i_2] [i_2] [i_2] [i_7] [i_2] = ((!((((~-1338243183) % var_12)))));
                            arr_29 [i_2] [i_2] [0] [i_2] [i_2] [i_2] = ((~((+(max((arr_21 [i_7] [i_4]), var_4))))));
                        }
                    }
                    var_24 = (max(var_24, (arr_8 [i_3] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
