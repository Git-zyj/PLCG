/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 &= (min((arr_1 [i_0] [i_0]), (((arr_0 [i_0]) ? var_5 : var_6))));
        var_19 -= ((409641402 ? (((((var_5 ? 3741634827 : var_9)) < (arr_0 [i_0])))) : (!72057594029539328)));
        var_20 -= ((((((((var_11 ? (arr_2 [4]) : var_10))) ? (!var_9) : (max(var_4, -7973))))) ? ((((max(1, var_3))) ? var_10 : 140737421246464)) : (arr_2 [1])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 &= 16384;
            arr_5 [i_0] [i_0] = ((1 ? (((((var_1 ? -1 : (arr_4 [i_0] [i_1] [i_0])))) ? (max(var_3, -32764)) : var_3)) : var_1));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((((max(var_15, 23802))) ? (min(((70 ? 18446744073709551615 : (arr_1 [i_0] [i_2]))), 3741634806)) : 16384));
            var_22 = (((!8613792798700014427) * (arr_8 [i_2 + 1])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_23 ^= ((((!(arr_12 [i_3] [i_3]))) ? ((max((max(var_3, var_1)), ((var_14 ? var_11 : var_2))))) : (arr_8 [i_0])));
            var_24 = 185;
            var_25 = (((arr_4 [i_0] [i_3] [i_0]) || ((max(var_0, var_16)))));
            arr_14 [i_0] [i_3] = ((!(arr_3 [i_0] [i_0] [i_0])));
            var_26 |= (max((((arr_3 [i_3] [i_0] [i_0]) | (arr_9 [i_3] [0]))), ((((var_8 + 2147483647) >> (arr_3 [1] [i_3] [i_0]))))));
        }
    }
    var_27 &= ((((((1217419715 ? var_16 : 1)) < (~7))) ? var_11 : (((((var_12 ? 0 : 2047))) ? -7865268340392528539 : 182))));
    var_28 |= ((var_1 ? (var_6 % 243) : ((max((max(var_9, var_0)), (var_12 < var_2))))));
    var_29 = (max((!var_0), ((max(var_0, var_0)))));
    #pragma endscop
}
