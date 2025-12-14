/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (((((((var_9 ? 18846 : 32749))))) != (var_7 >= var_1)));
        var_12 = ((((((arr_2 [i_0]) ^ (arr_0 [i_0]))) < (((arr_2 [i_0]) ? (arr_2 [i_0 + 1]) : (arr_0 [i_0]))))));
        var_13 = ((5237347294812422746 * 921880791) >= ((-(arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((((-((var_9 ? 1542062455346053049 : (arr_5 [i_1] [8])))))) && (((((-956051546 & (arr_5 [i_1] [i_1])))) != ((17422 ? var_1 : 3641888923656179144)))));
        var_14 = ((((((arr_5 [i_1] [i_1]) + -1542062455346053032))) ? (var_7 != 18855) : ((((arr_4 [i_1]) == var_4)))));
        var_15 = (((((arr_4 [i_1]) >= var_7)) ? (18446744073709551615 || 6913937507782778186) : (var_5 != 1542062455346053037)));
    }
    #pragma endscop
}
