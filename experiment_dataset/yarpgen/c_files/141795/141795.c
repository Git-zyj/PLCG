/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (max(var_14, 65535));
    var_15 = (max(var_15, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min(((7 ? 1144752713 : (arr_6 [i_1 + 2] [i_1 - 3] [i_1 - 2]))), (((max(-31612, (arr_6 [i_1] [i_1] [i_0])))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_1] = (arr_11 [i_0] [i_1] [i_2] [i_2] [i_0]);
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= -31618;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_16 += (min(((var_0 ? (arr_17 [i_0] [i_4] [i_0] [i_0]) : (arr_6 [i_2] [i_2] [i_1 + 2]))), (arr_17 [i_0] [i_2] [i_1] [i_0])));
                        arr_20 [i_0] [i_0] [i_1 + 2] [i_2] [i_4] [i_4] = (((31612 ^ 56928) | (arr_6 [i_0] [i_1 + 2] [i_2])));
                        arr_21 [i_4] [i_1] [i_1] [i_2] [i_4] [i_4 + 1] = var_1;
                    }
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_17 = (!17832);
                        arr_24 [i_0] [i_1] [i_2] [i_5] [i_5] = ((-(arr_8 [i_0])));
                        arr_25 [i_5] [i_5] [i_5] [i_0] = max(((-(((arr_9 [i_0] [i_2] [i_5]) ? (arr_4 [i_5]) : (arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_5]))))), (arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5 - 1]));
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] = ((!((((max(-1144752713, 31617)) % var_4)))));
                        var_18 += var_0;
                    }
                    arr_27 [i_0] [i_1] [i_1] [i_2] = ((!((((((arr_4 [i_1]) <= 512))) >= (min(var_0, -31613))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_1 + 2] [i_6] [i_6] = -31633;
                    var_19 = 0;
                }
                arr_32 [i_1 - 3] = ((!((((arr_9 [i_0] [i_0] [i_0]) ? var_10 : var_4)))));
            }
        }
    }
    var_20 *= (((max((32767 > 3313230066), (max(var_2, var_6)))) >> ((((var_2 ? -var_2 : (min(288783549, var_5)))) - 4294967116))));
    #pragma endscop
}
