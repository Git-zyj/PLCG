/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? ((((6666167064162025650 ? var_7 : 1151709075)) << (var_14 + 420907334))) : var_5));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min((((6484290970710556300 == (((-(arr_1 [i_0]))))))), ((((arr_0 [i_0]) ? var_8 : (arr_1 [i_0]))))));
        arr_2 [i_0] = arr_1 [i_0];
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            {
                var_17 = ((!(((var_7 ? (arr_5 [i_2 - 4]) : (((((arr_0 [i_1]) >= var_0)))))))));
                var_18 ^= (arr_6 [i_1] [i_2 - 3]);
            }
        }
    }
    var_19 = var_14;
    #pragma endscop
}
