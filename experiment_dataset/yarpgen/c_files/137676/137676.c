/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((-21 ? 16850 : 16870));
        arr_4 [i_0] = ((((((min((arr_1 [9]), var_2))) ? (((arr_1 [i_0]) | -4926960556389594486)) : (((min(16860, 1))))))) ? ((0 ? (((arr_0 [i_0] [i_0]) - (arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))) : ((((((var_3 / (arr_1 [i_0])))) ? var_7 : ((max(-32739, -1)))))));
        arr_5 [i_0] = 48666;
        var_12 &= (arr_2 [i_0]);
        arr_6 [i_0] [i_0] = (max((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), var_5));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 *= ((~(min(-4926960556389594486, 48666))));
        var_14 = ((((var_2 ? (~var_8) : (((((arr_8 [i_1]) && 18446744073709551599)))))) / 47));
        arr_10 [i_1] = (((arr_9 [i_1]) ? (((min(var_5, (arr_8 [i_1]))))) : var_7));
        var_15 ^= (max(-1, 48702));
        arr_11 [i_1] = ((24 || 16870) && 1);
    }
    #pragma endscop
}
