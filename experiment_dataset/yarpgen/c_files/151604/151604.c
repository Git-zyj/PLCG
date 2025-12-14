/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_10 ? var_9 : var_4));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 |= ((((((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_6 : (arr_0 [i_0]))) : (arr_1 [i_0])))) ? (max(0, ((var_10 ? (arr_1 [3]) : 7003447217111013603)))) : (((((var_3 ? var_11 : (arr_0 [i_0]))) * 11605)))));
        var_14 = (((((arr_0 [i_0]) ? ((2604679742 ? var_4 : var_6)) : ((-30463 ? 63234 : (arr_0 [i_0]))))) / ((((-32767 - 1) < (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = (((((((arr_3 [i_1]) | (arr_4 [i_1] [i_1])))) ? (arr_3 [i_1]) : 2604679742)));
        var_16 &= (((arr_2 [i_1] [i_1]) <= var_7));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_17 &= (((((30462 << (4173640978551156221 - 4173640978551156212)))) - (arr_2 [i_2] [i_2])));
        var_18 = (min(var_18, ((((arr_7 [i_2]) ? -30448 : (arr_7 [i_2]))))));
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = (~((((var_6 ? (arr_10 [i_3]) : 34)) >> (((arr_4 [i_3] [i_3]) - 62602)))));
        var_20 = (min((((arr_2 [7] [i_3]) ? (arr_2 [i_3] [i_3]) : (arr_2 [i_3] [i_3]))), (arr_2 [10] [1])));
        var_21 |= ((((((1639932833 ? 0 : -30474))) ? (((936445326 ? 131102918 : 1))) : var_8)) & ((((((arr_4 [i_3] [i_3]) < var_6)) ? 24763 : (arr_11 [i_3] [i_3])))));
        var_22 = (var_10 == (-35 * 32767));
    }
    #pragma endscop
}
