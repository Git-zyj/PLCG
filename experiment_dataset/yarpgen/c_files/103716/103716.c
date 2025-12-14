/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [3] [5] [1] = (max((max(38060, (min((arr_3 [i_0] [i_0 + 3] [i_0]), var_15)))), (arr_1 [8])));
                var_19 = (((max((arr_3 [i_0 - 1] [i_0 - 1] [3]), (arr_3 [i_0] [i_0] [i_0])))) ? (arr_2 [i_0] [i_1 - 1]) : (arr_2 [0] [i_1 + 2]));
                var_20 = (min(var_20, ((max(-57, (28230 <= var_15))))));
                var_21 = var_18;
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
