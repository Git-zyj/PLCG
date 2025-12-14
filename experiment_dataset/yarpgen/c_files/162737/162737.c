/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += (((((((((243 < (arr_4 [2]))))) * ((-(arr_0 [i_1])))))) || (((arr_3 [i_0] [i_1] [i_1]) > (arr_3 [i_0] [i_0] [i_1])))));
                var_17 = (min(var_17, (((20 ? (arr_5 [i_0] [i_0] [i_0]) : (((55 || (var_13 | 827563606)))))))));
                var_18 += (((((((arr_5 [i_0] [i_1] [i_1]) / (arr_3 [i_0] [i_0] [i_1])))) ? (!var_5) : (arr_4 [i_0]))));
                arr_6 [i_0] = ((min((arr_4 [i_0]), (((-52 - (arr_0 [i_1])))))));
            }
        }
    }
    var_19 = (max(var_19, (((((min((-56 > 28), var_14))) != ((var_14 ? 55 : var_1)))))));
    #pragma endscop
}
