/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = min(((((~(arr_1 [i_0]))) & (arr_1 [i_0 + 3]))), (arr_2 [i_0] [i_0 + 1]));
        var_17 *= ((((((arr_1 [i_0]) ? var_5 : (3072 || -5983877923144534219)))) ? (((var_4 >= (arr_1 [i_0 + 3])))) : (((!(arr_1 [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [2] = (((((-(max(var_14, 23))))) ? (max(230, -9223372036854743040)) : var_15));
        var_18 = (((!(!var_2))) ? ((var_3 ? ((((-32767 - 1) ? var_11 : var_5))) : (arr_1 [i_1]))) : (arr_2 [i_1] [i_1]));

        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            var_19 = var_9;
            arr_10 [i_1] [i_1] [i_1] = (((~0) & var_10));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_20 = (min(var_20, var_15));
        var_21 = ((1 / (arr_3 [i_3])));
    }
    var_22 = ((((((var_3 * -32766) ? (max(var_4, var_14)) : ((var_3 ? var_9 : 1324267463))))) ? (min(-127, ((var_1 ? 8 : -32763)))) : 127));
    #pragma endscop
}
