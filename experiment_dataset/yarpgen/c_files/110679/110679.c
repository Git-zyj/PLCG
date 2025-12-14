/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(var_10, -1)) ? 1 : (var_6 * var_2)))));
    var_17 = ((((min((((var_4 ? var_1 : var_3))), (0 % var_2)))) ? (((var_12 ? 230 : var_5))) : var_2));
    var_18 = (max(((-(((var_8 + 2147483647) << 0)))), (~var_1)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = var_2;
        arr_5 [i_0] [i_0] = (~var_14);
        arr_6 [i_0] = -1560446587;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_10 [16] = ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : 1))) ? (arr_8 [9] [9]) : ((5916170520024065550 ? (arr_7 [i_1]) : (arr_9 [i_1])))));
        arr_11 [i_1] = (!var_5);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = ((((min(-var_3, var_7))) ? ((-((-(arr_1 [i_2] [10]))))) : 1));
        arr_16 [4] [21] = ((((((((var_14 | (arr_8 [i_2] [i_2])))) ? 634095262 : (667978263 != 203)))) ? -40829728 : (min(-65, (max((arr_9 [i_2]), (arr_9 [i_2])))))));
        var_20 = 246;
        arr_17 [i_2] [0] = (((((~((3399898831641929593 ? (arr_14 [i_2]) : (arr_12 [i_2] [i_2])))))) ? (arr_1 [i_2] [4]) : (arr_8 [i_2] [i_2])));
    }
    #pragma endscop
}
