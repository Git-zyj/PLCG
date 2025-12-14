/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 += 232351412;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_14 = (min(var_14, ((((((2713402477 ? 3661328032 : 5))) ? (max(4062615897, (arr_0 [i_0 - 1]))) : ((((var_10 == (arr_1 [i_0 + 2]))))))))));
        var_15 = (arr_0 [i_0]);
        arr_3 [i_0] = 4062615879;
        var_16 = var_10;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = (((42 ? (arr_0 [i_1]) : (arr_0 [i_1]))));
        var_18 = (((min((arr_4 [i_1]), ((max(4062615887, 63))))) < ((((-1 & 232351413) ? var_5 : ((4062615897 + (arr_5 [i_1] [2]))))))));
    }
    var_19 = (max(var_7, var_5));
    #pragma endscop
}
