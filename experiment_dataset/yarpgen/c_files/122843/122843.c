/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 += var_7;
                        var_20 = (max(var_20, (~-908199211118016973)));
                    }
                }
            }
        }
        var_21 = (arr_6 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_22 = arr_13 [i_4];
        var_23 = (arr_13 [i_4]);
        var_24 = var_4;
        var_25 |= (arr_14 [0]);
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_17 [i_5] = (((arr_16 [i_5]) ? ((-32757 & ((min(var_12, (arr_15 [i_5])))))) : (min((max((arr_15 [i_5]), var_1)), ((var_15 ? (arr_15 [i_5 + 1]) : (arr_15 [i_5])))))));
        arr_18 [i_5] &= ((((min((arr_16 [i_5 + 1]), (arr_16 [i_5 - 1])))) >> (((((var_1 + 2147483647) >> (var_13 - 24389))) - 445))));
        arr_19 [i_5] = (max(var_3, 21958));
        arr_20 [i_5] [i_5] = (max((((arr_16 [i_5 + 1]) - -5674827714556505179)), (((max((arr_15 [i_5]), (arr_16 [i_5])))))));
    }
    var_26 = var_17;
    #pragma endscop
}
