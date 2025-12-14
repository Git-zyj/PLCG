/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((((81 | (arr_0 [i_0] [1])))) ? (!var_1) : ((-(arr_0 [i_0] [i_0]))))) * ((((((var_8 ? (arr_1 [i_0]) : var_10))) && (arr_0 [i_0] [i_0]))))));
        var_13 += (((arr_0 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) * 79)) : ((((-(arr_1 [i_0])))))));
        arr_3 [1] [14] |= (arr_1 [9]);
        var_14 += ((((10160287293698760199 << (((arr_0 [i_0] [i_0]) + 1062187049))))) ? (max((~var_12), (arr_1 [i_0]))) : (min((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 81)), (arr_0 [i_0] [i_0]))));
    }
    var_15 &= var_0;
    var_16 += ((var_4 << (var_8 + 23047)));
    #pragma endscop
}
