/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max(var_2, (var_2 * var_13))), (((~(32767 && var_10))))));
    var_15 &= var_10;
    var_16 = ((max(var_9, ((max(var_6, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [6] = (max((min(64, (arr_0 [i_0 + 1] [i_0 + 2]))), ((((arr_0 [i_0 + 1] [i_0 + 1]) && (arr_0 [i_0 - 1] [i_0 - 2]))))));
                arr_7 [i_0] [i_1] [i_1] = var_2;
                arr_8 [i_0] [i_1] = ((-(~2711323414)));
                arr_9 [i_0] [i_1] [i_0] = (((((117 * (arr_4 [i_0 + 1] [i_0 + 1] [18])))) && ((min(-6207, -32)))));
            }
        }
    }
    #pragma endscop
}
