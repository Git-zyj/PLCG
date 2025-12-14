/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [0] [i_2] [i_2] [i_2] [13] = 14107450825333417896;
                        arr_12 [2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((var_2 ? 15776977302443626945 : (arr_4 [i_0] [i_3]))) ? (((20152 ? 337661356 : var_16))) : (arr_1 [i_0 - 2])))));
                        arr_13 [i_0] [i_2] [i_2] = ((~((var_2 ? var_14 : var_0))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_18 &= var_10;
                        var_19 = 10813;
                        arr_17 [2] &= 147;
                        arr_18 [i_0] [i_2] [i_4] = ((+((+(((arr_4 [10] [10]) + var_17))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        var_20 = (min(var_20, var_17));
                        arr_22 [i_0] [i_2] [1] = var_4;
                        var_21 &= var_1;
                        var_22 = (((~10653833554225902637) ? (arr_5 [1] [i_1 - 3]) : (((arr_21 [i_0 - 3] [i_1 - 1] [i_2]) ? var_9 : (arr_5 [i_5] [i_0])))));
                        arr_23 [0] [14] &= (((((var_7 && (arr_1 [i_0 - 2])))) > var_16));
                    }
                    var_23 = var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            {
                arr_29 [i_6] [i_7] = 7235262076820889439;
                arr_30 [i_6] = (max(((var_15 ? 10257518294662716084 : (var_7 > var_0))), ((max(1, (arr_6 [i_6]))))));
                var_24 -= ((var_9 != ((((arr_6 [i_7]) != ((var_15 ? var_13 : var_11)))))));
                arr_31 [i_6] [i_7] = (((var_4 ? 3067241444159125345 : (arr_4 [i_7] [i_6]))));
            }
        }
    }
    var_25 = ((((((63693 == 31439) | ((var_12 ? 32767 : var_1))))) ? var_12 : var_4));
    #pragma endscop
}
