/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(-var_10, (max(-2147483647, (min(var_9, var_6))))));
    var_12 = ((~((14561455151761010970 ? -1938587831 : 0))));
    var_13 = 3885288921948540645;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) ? ((var_1 ? var_7 : -1182970914067068165)) : (arr_1 [i_0])))) ? -12286 : ((var_1 ? ((var_5 ? (arr_0 [i_0] [i_0]) : var_6)) : (var_4 && var_10)))));
        var_14 = ((~((max(19808, (var_6 > 668431695))))));
        arr_3 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 &= max(((-var_5 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_6 [i_2]))), (arr_8 [i_1]));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = var_5;
                }
            }
        }
    }
    #pragma endscop
}
