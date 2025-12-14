/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 ^= (arr_0 [i_0]);
        var_13 = ((((arr_0 [i_0]) ? ((0 ? var_3 : (arr_1 [i_0]))) : (!var_0))));
        var_14 |= ((254 ? (9 < 255) : var_8));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_3] = (((((0 ? 1972666013 : 11825401917961408547))) ? (arr_3 [i_3] [i_1 + 2]) : var_7));
                        var_15 &= ((~(arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1])));
                        var_16 *= ((0 < (arr_1 [i_2])));
                        arr_12 [i_3] [i_3] [i_2] [i_1] [i_3] = (((((((arr_3 [i_3] [i_1]) ? (arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) : (arr_5 [i_3] [1] [i_1]))) + ((((arr_3 [i_1 + 2] [i_2 - 1]) ? var_3 : (arr_5 [i_0] [i_1 + 1] [3])))))) - (((((-1698131918 ? 84244610 : var_7))) ? (arr_6 [i_1 + 2] [i_2 + 1] [9]) : var_3))));
                        var_17 = (max(var_17, (arr_0 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2 + 1] [i_2 + 1] = 16700;
                        var_18 = (max(var_18, ((((arr_6 [i_2 + 1] [i_1 + 1] [i_2]) == var_7)))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_4] [i_1 + 2] [i_4] [i_4] [i_4] [i_0] [i_4] = (~13111296139128915692);
                            var_19 -= ((-(((1277 <= (arr_0 [i_1 - 1]))))));
                            arr_19 [i_0] [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_5] [i_5] [i_0] &= ((127 == ((max(((255 - (arr_8 [3]))), 1)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_4] [i_2] [i_4] [i_6] = (1262 || 9059448034785369888);
                            var_20 = (((arr_10 [i_4] [i_4] [i_4] [i_0]) <= (((((arr_13 [i_0] [i_2 - 1] [i_1] [i_0]) ? (arr_10 [i_6] [i_4] [i_4] [i_4]) : var_1))))));
                            var_21 = (min(var_21, ((((arr_4 [i_0] [i_2 + 1] [i_4]) ? var_10 : var_4)))));
                        }
                    }
                    arr_24 [i_0] [i_1 + 2] [i_1] [7] = var_0;
                    var_22 = (max(((max(var_11, (arr_8 [i_2])))), (69 ^ var_4)));
                    var_23 -= (((((-56189 != ((var_5 ? (arr_20 [i_2] [i_2]) : (arr_7 [i_1 + 2] [3] [i_1] [3])))))) + (max(var_5, (~var_2)))));
                }
            }
        }
    }
    var_24 = var_3;
    var_25 = ((!(((var_2 ? ((var_6 ? var_11 : -1190113104)) : var_11)))));
    var_26 = (+-64232);
    #pragma endscop
}
