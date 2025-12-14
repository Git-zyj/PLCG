/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (((((-(((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_18))))) ? (arr_0 [i_0]) : ((-101 ? 3184988459752133303 : -93))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 ^= (arr_2 [i_1] [i_1]);
        arr_7 [17] = (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 = ((((arr_8 [i_2]) ? ((max((arr_8 [i_2]), (arr_8 [i_2])))) : (((arr_9 [i_2]) ? var_4 : (arr_9 [i_2]))))));
        arr_10 [1] [i_2] = (min(((((-97 ? -81 : -1)))), (min(((min(-18, (arr_8 [i_2])))), ((~(arr_8 [i_2])))))));
        var_23 = 98;
        var_24 = ((((-2147483647 - 1) ? 34633 : -3184988459752133303)));
    }
    var_25 = 4294967295;
    #pragma endscop
}
