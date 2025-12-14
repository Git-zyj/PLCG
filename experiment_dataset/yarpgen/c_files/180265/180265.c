/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_1] = (min(32173, (min((arr_0 [i_0]), (arr_1 [i_0] [i_1])))));
                var_16 = (max(var_16, (((((min((arr_1 [i_0 - 2] [i_1 + 1]), (arr_1 [i_0 + 1] [i_1 - 1])))) ? (arr_2 [i_0 + 2]) : 1)))));
                var_17 = (max(var_17, (((((((3291659855727221679 ? (arr_0 [i_1]) : -116)))) / (var_2 / 1))))));
                var_18 ^= (676794697 ? var_1 : (max((arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]), 3291659855727221679)));
            }
        }
    }
    var_19 = var_7;
    var_20 = (max(var_20, var_14));
    var_21 = var_12;
    var_22 |= var_15;
    #pragma endscop
}
