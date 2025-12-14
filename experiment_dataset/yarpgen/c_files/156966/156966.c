/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((max(((((-2147483647 - 1) && var_3))), (min(var_1, 45158))))) || var_9)))));
    var_11 = ((((((5108080884669305389 ? 16777216 : 83)))) ? var_8 : ((((((35970 ? var_8 : var_4)) == ((min(var_4, -1876281938)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) >= (var_6 && var_2)));
        var_13 = (((((var_4 - (arr_1 [i_0])))) - var_5));
        var_14 = (max(var_14, (arr_1 [8])));
        var_15 = 1876281943;
        var_16 = (((arr_2 [i_0]) >> var_1));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_17 = var_5;
        arr_6 [i_1] = ((((((arr_4 [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 - 3] [i_1 + 1]) : var_8))) ? ((var_6 ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1]))) : (((((((arr_5 [9]) && (arr_1 [7])))) == var_2)))));
    }
    #pragma endscop
}
