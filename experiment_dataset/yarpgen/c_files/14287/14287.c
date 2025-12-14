/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((-(((((var_6 ? -1010219860 : var_7))) ? ((var_7 ? 676 : 64847)) : 7078)))))));
    var_14 = ((-(max(var_9, (((var_12 + 2147483647) >> (var_5 - 5189771745517191418)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (11521074680975117926 ? 7092 : 64863);
                var_16 ^= 255;
                var_17 = (((arr_0 [i_0] [i_0]) ? 1 : ((-15407 ? -0 : 3629485959125761550))));
                arr_5 [i_1] = ((~((~((max(var_9, 64859)))))));
                arr_6 [i_1] [i_1] = ((+(((~681) ? -6502439669539912774 : (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
