/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_2 [i_0] [i_1]);
                var_17 = (min(var_17, ((min(var_9, (min((arr_5 [i_0] [i_1]), (arr_4 [i_0] [i_0]))))))));
                arr_8 [i_0] [i_1] [i_0] = var_1;
                var_18 = 8192;
                arr_9 [i_0] = var_10;
            }
        }
    }
    var_19 = (min(((((var_14 ? var_14 : var_15)) << (((min(var_0, var_0)) - 3935720255)))), ((var_2 ? var_11 : (var_10 <= 8192)))));
    var_20 = var_14;
    #pragma endscop
}
