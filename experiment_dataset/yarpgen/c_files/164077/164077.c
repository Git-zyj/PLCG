/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, (((((var_8 ? var_10 : -var_14)) ^ ((((~1) - var_11))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((var_2 ? ((-(-3359 >= 5049))) : (~2745)));
                    var_17 = ((((((arr_2 [i_1]) ? 62 : (((arr_6 [i_2] [i_2] [i_2]) ? var_9 : var_4))))) ? var_6 : ((((((var_10 >> (var_8 - 23397)))) ? (min(var_9, var_13)) : (var_0 / 1))))));
                }
            }
        }
        var_18 = ((((((max(-18958, var_13)) == ((~(arr_0 [0] [i_0])))))) + (min((~var_11), (max(var_13, -31626264))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                var_19 = (((max(((var_0 ? var_12 : var_2)), (arr_10 [i_4 - 2]))) <= var_5));
                arr_13 [i_3] [i_4] = ((((var_0 ? var_3 : (arr_12 [i_3] [i_3 + 2] [i_3]))) | (var_5 - var_13)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_20 = ((((var_3 || (((var_8 ? (arr_9 [16]) : var_7))))) ? (((var_6 || (arr_19 [i_6] [i_5] [i_5])))) : -2147483635));
                var_21 = (max((((!(((arr_12 [9] [i_6] [i_6]) >= var_4))))), (max(58284, (-2147483647 - 1)))));
            }
        }
    }
    #pragma endscop
}
