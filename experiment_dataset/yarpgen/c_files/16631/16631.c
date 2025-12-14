/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 -= ((((!(1 - 1))) ? (((((arr_3 [i_0]) / (arr_4 [4] [4] [9]))) ^ ((max((arr_3 [i_0]), 1))))) : (((-(!var_19))))));
                var_21 = (arr_1 [i_0] [i_0]);
            }
        }
    }

    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_22 = (i_2 % 2 == 0) ? (((1 << (((max((arr_8 [i_2]), (min((arr_8 [i_2]), (arr_7 [i_2]))))) - 217))))) : (((1 << (((((max((arr_8 [i_2]), (min((arr_8 [i_2]), (arr_7 [i_2]))))) - 217)) - 7)))));
        var_23 = 1;
        var_24 = ((((arr_8 [i_2]) | 1)));
        var_25 = (max(var_25, -1));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        arr_12 [11] = var_4;
        arr_13 [i_3] |= (arr_7 [0]);
    }
    var_26 = ((((-3219633358472370274 ? 1 : (var_7 | 28265))) >> (((((((-24 ? var_17 : 1))) ^ 2381518541)) - 999855888))));
    var_27 = ((var_3 || ((((max(-124, -22986))) != 1))));
    var_28 |= (max(((((((778047880 ? 11993 : 235))) ? 1 : var_3))), (max(-21979, ((0 >> (1846561066 - 1846561020)))))));
    #pragma endscop
}
