/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((((((!(((var_5 ? 60 : (arr_1 [4])))))))) + (max((max((arr_3 [i_0] [i_0]), 1)), 2927592744))));
        var_12 = 32;
        var_13 = (((((1367374552 ? (arr_3 [i_0] [i_0]) : 469762048))) || (!9007182074871808)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [1] [1] = ((((((arr_7 [i_1]) | -25034))) ? var_8 : (var_5 & var_7)));
        arr_9 [i_1] [i_1] = (((!1367374541) >= (arr_6 [i_1])));
        arr_10 [i_1] [i_1] = (((53 ^ 1367374541) ? (((97 <= 133) ? (arr_0 [i_1]) : (max((arr_6 [i_1]), 4294443008)))) : var_2));
        var_14 &= (((((arr_1 [1]) != ((var_5 ? (arr_1 [i_1]) : var_1)))) ? ((var_5 ? (arr_3 [i_1] [i_1]) : ((255 ? 9223372036854775804 : 14132840697113266524)))) : (((~(~var_5))))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_15 = ((((250 >> (-2579 + 2608))) >> (var_8 - 5859237482219536938)));
        var_16 = var_2;
        arr_13 [i_2 - 1] [10] = (arr_12 [13] [i_2]);
        arr_14 [i_2] = (((((min(0, 2473205317))))) != ((((((arr_3 [i_2 + 1] [i_2 - 3]) >> (((arr_12 [i_2] [i_2]) - 4796))))) ? 3 : var_3)));
        arr_15 [i_2 - 2] [i_2] = ((2157828936 != (((var_6 >> (-889701540 + 889701540))))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_17 &= (((max(var_1, (254 < 651316671)))) ? (arr_1 [i_3]) : (arr_17 [i_3] [i_3]));
        var_18 = (!90);
        arr_18 [i_3] [i_3] = 7;
    }
    #pragma endscop
}
