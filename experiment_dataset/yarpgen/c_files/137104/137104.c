/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = 1971409862;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_0]);
                var_21 ^= (var_7 / var_1);
                arr_6 [i_1] = var_2;
                arr_7 [1] [i_0] [i_0] = ((62914560 ? (arr_3 [i_1] [i_0]) : (((arr_2 [i_0] [i_1] [i_1]) ? var_4 : (arr_3 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
