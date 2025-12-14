/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~2804793469);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = 1490173847;

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [i_3 + 2] [i_2] [i_2] [i_2] [i_1] [i_0 + 1] = (var_10 << (((((arr_1 [i_0 + 1] [i_3 + 1]) - var_7)) - 3566483154)));
                        var_13 = (!var_1);
                        var_14 = ((1490173826 ? (-2147483647 - 1) : 0));
                        var_15 &= (((((arr_4 [i_2 - 3] [i_2]) <= (arr_8 [i_2 - 2] [i_1] [i_1]))) || ((((((arr_4 [i_1] [i_2]) ? (arr_7 [i_1] [i_1] [i_2] [i_1]) : (arr_1 [i_0] [i_1]))) % var_2)))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] = ((((max(var_8, 31))) ? var_9 : ((var_7 ? var_0 : ((var_7 ? 2804793478 : (arr_2 [i_1])))))));
                        var_16 &= (arr_6 [i_4]);
                        arr_13 [i_2] = (!var_10);
                        arr_14 [i_2] [i_0] [i_0] [i_4] [i_4] [i_4] = (((((((((arr_0 [1]) ? (arr_6 [22]) : 1490173817))) ? var_9 : (arr_7 [i_2] [i_1] [i_2 - 2] [i_0])))) ? (min(((var_4 ? 1490173802 : var_9)), (((var_6 ? (arr_3 [i_0] [i_1]) : var_2))))) : var_5));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((((var_4 || (arr_5 [22] [i_2 - 1] [i_0 - 1] [i_0 - 1]))) ? var_0 : (min((var_6 | -12191334063356789), var_6))));
                        arr_17 [i_0] [i_2] [i_2] [i_2] = (((arr_2 [i_0 + 1]) << ((((!var_9) || (var_3 || var_4))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_2] [i_1] [i_2] [i_6] [i_6] = ((((((var_7 ? var_7 : var_8))) ? (4875444055021028795 - 1490173831) : (min((arr_6 [i_6]), var_7)))) ^ (arr_15 [i_6] [i_2] [0] [i_2] [13]));
                        var_18 -= ((((((arr_20 [i_0 + 2] [i_0 + 2] [i_2 - 3] [i_1]) & 225))) & var_6));
                    }
                    var_19 = ((((((arr_3 [i_1] [i_2 + 1]) ? var_10 : (max((arr_8 [i_0] [i_2] [1]), (arr_10 [i_2] [i_2] [i_1] [i_0])))))) ? var_6 : ((((arr_11 [19] [i_2] [i_1] [i_1] [i_2] [i_0]) ? (1 - var_3) : (((((arr_19 [1] [7]) == (arr_6 [i_0]))))))))));
                    var_20 ^= 218;
                }
            }
        }
    }
    #pragma endscop
}
