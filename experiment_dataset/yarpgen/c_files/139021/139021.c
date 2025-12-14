/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [9] [9] = ((arr_0 [i_0 + 1]) / (arr_2 [i_0 + 1] [i_0 + 1]));
        var_12 |= (((arr_2 [i_0 + 1] [i_0 + 1]) ? 22 : 21));
        arr_4 [i_0] [i_0] = ((-573532696 < (arr_1 [i_0 + 1])));
        arr_5 [i_0] = ((18446744073709551606 ? 29 : (arr_1 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_13 = (1 / (((arr_7 [i_1]) | 4294967267)));
        arr_9 [i_1] = ((var_11 ^ (arr_7 [i_1])));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 *= ((((-255 / ((var_10 ? 1 : 0)))) * (((arr_10 [i_2]) % (arr_10 [i_2])))));
        var_15 = (min((((((2047 ? (arr_1 [i_2]) : 72))) ? (6745782937291465275 | -573532691) : (16816077059107006561 <= var_5))), (max(((var_7 ? 1 : (arr_8 [4]))), var_1))));
        arr_12 [i_2] = ((!(((~(arr_1 [i_2]))))));
        var_16 = (arr_2 [i_2] [i_2]);
    }
    var_17 = ((var_7 ^ (min(-22640, var_3))));
    var_18 = (((((var_10 ? var_9 : var_5))) / 501725616782901507));
    #pragma endscop
}
