/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_2, 2251799813685247));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 |= ((-((((min(19512, 240))) ? ((var_14 ? var_4 : var_0)) : (89 | 670280219)))));
                    var_21 = ((((28 ? (((670280209 ? var_16 : 0))) : 4294967292))) ? ((((~(arr_8 [i_2]))) % (~253))) : (arr_1 [0] [i_1]));
                    var_22 ^= (min((((arr_1 [14] [i_0]) ? ((var_18 ? 28381 : var_10)) : var_3)), ((((arr_5 [i_2] [i_2]) ? (arr_7 [i_2] [i_2 - 1] [1]) : ((-540 ? (arr_0 [i_0]) : (arr_2 [i_2]))))))));
                }
            }
        }
    }
    var_23 = (min((min(1, 0)), var_14));
    #pragma endscop
}
