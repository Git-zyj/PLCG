/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((((21117 ? var_3 : 44443))) ? 1 : ((var_9 ? 44419 : -47))))));
    var_18 = (min(var_18, var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 ^= ((21105 ? ((var_3 / (((-1 ? 21117 : 14336))))) : 39237));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = -198;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((3953079416 ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_1 [i_1] [i_1 + 1]))) == ((((((21092 ? var_0 : 0))) ? ((var_14 / (arr_2 [7]))) : 13875689703573072125))));
                        var_20 = ((56447 + (((arr_3 [i_1 - 1]) ? -1306151894 : (arr_3 [i_1 + 1])))));
                    }
                }
            }
            var_21 = -68;
        }
    }
    #pragma endscop
}
