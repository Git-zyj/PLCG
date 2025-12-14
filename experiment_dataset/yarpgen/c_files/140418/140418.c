/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((var_19 >= ((4828385219908290079 ? (var_10 + var_7) : -4828385219908290066))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 -= ((!((!(arr_3 [i_0] [i_1])))));
                arr_5 [i_0] [2] [i_0] = (!(((((max(var_11, (arr_1 [0]))))) >= 9)));
                var_22 = 27714;
                var_23 += arr_0 [i_1];
            }
        }
    }
    #pragma endscop
}
