/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 -= ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7)));
        var_11 = ((((-((1038232399 >> (1038232400 - 1038232400))))) / ((~(var_7 ^ -1038232401)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (1 < 2147483647);
        var_12 = (arr_3 [i_1]);
        var_13 += ((~(arr_1 [i_1])));
    }
    var_14 = max(((((min(var_4, var_9))) ? var_6 : var_8)), ((min((var_0 - -143393063), var_2))));
    var_15 = (max(var_9, var_7));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_17 += (((((~(arr_8 [i_2 - 2])))) ? ((((arr_8 [i_2 - 1]) ? 1316374894 : 3))) : ((6612108744663167579 ? var_0 : (arr_8 [i_2 + 2])))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 &= ((((((arr_12 [1]) ^ (arr_8 [i_5])))) & (((arr_11 [i_5] [i_3 - 1] [i_2]) * 126))));
                        arr_20 [i_2] [i_2] = var_2;
                        arr_21 [i_2] [i_2] = ((var_1 ? (arr_11 [i_3 + 2] [i_3 + 3] [i_2 + 2]) : (arr_11 [i_3 - 1] [i_2 - 2] [i_2 - 2])));
                        arr_22 [22] |= (~117);
                    }
                }
            }
        }
    }
    #pragma endscop
}
