/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-(7 >= 4)))) ? 28 : (max(-16, var_17)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-((max(7, 0)))))) ? -1 : ((1 ? 3978183754 : (arr_0 [i_0] [i_0 + 1])))));
        var_19 = ((24 ? ((+(((((arr_0 [i_0 - 1] [i_0]) + 2147483647)) << (1 - 1))))) : (max(1, (arr_0 [i_0 + 1] [i_0])))));
        var_20 = (!22980);
        var_21 |= (((min(-3, -44)) - (arr_0 [i_0] [i_0])));
        var_22 *= (arr_1 [4]);
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_23 = -1894742516;
        arr_5 [i_1] = ((-((((((arr_4 [i_1]) ? 1 : (arr_4 [i_1])))) ? -3634 : (arr_4 [i_1 - 1])))));
    }
    #pragma endscop
}
