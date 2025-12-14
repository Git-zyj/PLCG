/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((14010460157449767595 ? -2066137198 : 28457))) ? ((var_12 << (var_14 - 60001))) : (((var_5 ? var_17 : var_15)))))) ? var_18 : ((((var_0 != ((8189 ? var_2 : 35307))))))));
    var_20 = ((((var_11 ? (var_15 && var_6) : ((16979 ? 187 : var_8)))) == (((((var_11 ? var_12 : 30228))) ? var_7 : ((var_12 ? var_8 : var_4))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? var_10 : var_10))) ? ((var_11 ? var_11 : 1484068700)) : (((1 ? 19406 : 1771812386)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (((2412897467 == -16980) | ((var_11 ? var_17 : (arr_4 [i_0])))));
            var_21 = ((((((((arr_2 [i_0]) & (arr_1 [i_0])))) ? (((arr_0 [i_0] [1]) >> (((arr_6 [i_0] [i_1]) - 7126)))) : (((var_9 ? -16980 : (arr_2 [i_0])))))) != ((((arr_0 [i_0] [i_0]) ? var_0 : (arr_4 [i_1]))))));
        }
        arr_8 [i_0] |= (((((18198616570194654075 ? (arr_6 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 18198616570194654090))) || (arr_4 [i_0])))) : (((((1 ? var_7 : (arr_4 [i_0]))) >= (var_7 ^ 53502))))));
        var_22 = (((((arr_4 [i_0]) + var_9)) & (((((arr_0 [i_0] [i_0]) == 1484068704)) ? (var_10 != var_14) : var_13))));
    }
    #pragma endscop
}
