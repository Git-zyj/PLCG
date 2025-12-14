/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 = (-(((arr_0 [i_0]) ? 97 : (!14301576199773744804))));
        var_19 ^= ((((max((arr_1 [i_0] [i_0]), (min(var_10, (arr_1 [i_0] [i_0])))))) ? 0 : (((((var_8 + (arr_0 [1])))) ? ((((arr_0 [i_0]) >= var_5))) : (arr_1 [i_0] [1])))));
        var_20 ^= (min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), ((min(1, 62)))));
        var_21 = ((((((arr_0 [i_0]) <= ((~(arr_1 [i_0] [i_0]))))))) == ((121 ? 1713068786 : 3)));
        var_22 = (min(((((max((arr_0 [i_0]), var_10))) ? -1 : (arr_0 [i_0]))), ((max((max(var_3, var_3)), (arr_0 [1]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_23 = (((((((((arr_2 [i_1] [i_1]) << var_4))) ? (arr_5 [i_2 + 1] [i_2]) : (max(var_15, var_10))))) ? (((arr_4 [i_1] [i_2] [i_1]) ? (arr_4 [i_2 + 2] [i_2] [i_2 - 1]) : (min(var_14, (arr_5 [i_1] [i_2]))))) : 1));
            arr_6 [i_2] [i_2] = (((min((max(0, 1), 68)))));
        }
        var_24 &= var_7;
        var_25 = (min(((min((((arr_1 [i_1] [i_1]) ? (arr_0 [i_1]) : var_13)), var_13))), (arr_2 [i_1] [i_1])));
        var_26 = (max(var_26, ((min((arr_4 [i_1] [1] [6]), 1)))));
    }
    var_27 = var_1;
    #pragma endscop
}
