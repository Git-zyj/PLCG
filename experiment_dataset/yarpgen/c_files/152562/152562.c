/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_12 = (20543 ? (arr_1 [i_0]) : ((var_7 / (arr_2 [i_0]))));
        var_13 = (min(var_13, (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -20544))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 &= var_0;

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_15 -= ((min((arr_7 [i_1]), -5)));
            var_16 -= var_0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_17 = (min(((((max(-20544, (arr_10 [i_1] [i_1] [i_3] [i_1])))) ? ((20541 ? (arr_3 [i_1]) : (arr_2 [i_1]))) : var_1)), var_9));
                        arr_13 [i_1] [i_2] [i_1] [i_2] [i_3] [i_3] = (max(2593378014, 1701589281));
                    }
                }
            }
            arr_14 [15] [i_1] = ((((-20542 ? (arr_6 [i_1] [i_1] [i_1]) : ((var_3 ? 2044 : var_2))))) ? (min(var_5, (((arr_11 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]) ? 1425897086 : var_7)))) : (arr_7 [i_2]));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_18 = ((+((((arr_22 [i_1] [i_1] [i_8]) && -20540)))));
                            var_19 = (~(arr_6 [19] [i_1] [i_8]));
                            var_20 |= ((((((arr_21 [i_7 - 2] [i_7 + 1] [i_6] [i_6] [i_7 + 2] [i_7 + 2]) & -2054910149))) && (-91 && var_9)));
                        }
                    }
                }
            }
            var_21 = (((~var_1) / (arr_21 [i_1] [i_1] [i_5] [i_1] [i_1] [i_5])));
            var_22 = ((-(arr_5 [12])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_23 = ((((min((255 - 52371), var_11))) ? (max((-1425897091 ^ -212478029), 134217727)) : (((var_0 != var_4) - ((var_11 / (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_24 = (arr_11 [1] [i_5] [i_9] [i_9] [i_5] [i_9]);
                    }
                }
            }
        }
    }
    var_25 = ((~((717681828 ? (1449575228 >= -1497725259) : var_11))));
    #pragma endscop
}
