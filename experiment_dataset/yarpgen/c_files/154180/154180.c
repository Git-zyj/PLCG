/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((((arr_5 [i_1 - 2] [i_1 - 2] [0]) >> (4294967291 - 4294967266)))) ? (0 && 4) : (((4294967291 < (arr_5 [i_1] [i_1 - 2] [1]))))));
                    arr_10 [15] [i_1] [15] = ((((arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) ? (arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : 6550056417893280829)));
                    var_20 = ((((arr_7 [i_0] [i_1 - 2] [0] [i_1 - 2]) == (arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 2]))));
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((((arr_3 [i_0] [i_0]) || ((min((arr_0 [i_2]), var_11))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((var_12 ? ((((var_10 || var_11) >= -6550056417893280822))) : (((1 >= var_7) ^ 1)))))));
    var_22 = (((504403158265495552 > (var_2 >= var_9))));
    var_23 -= var_11;
    #pragma endscop
}
