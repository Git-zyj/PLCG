/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = (min((max(((-9223372036854775800 ? (arr_1 [i_0]) : 10)), (((arr_1 [5]) * 1)))), (arr_1 [8])));
        var_13 = (arr_1 [i_0]);
        var_14 &= (((((~(min(0, 0))))) ? ((~((148 ? 3114904735408375326 : 1871294410291942972)))) : var_8));
        var_15 |= ((((!(0 ^ 8191))) || (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_4 [i_1] [i_1] |= (arr_3 [i_1] [i_1]);
        var_16 = (min(1, 1));
        arr_5 [0] = (max(1, 0));
    }
    var_17 = var_11;
    var_18 |= var_0;
    var_19 = (min((min(((max(1, var_7))), (min(var_2, var_2)))), ((1 ? 1 : 0))));
    var_20 = var_11;
    #pragma endscop
}
