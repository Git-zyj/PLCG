/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((((max(var_5, 239))) ? var_3 : (max((var_5 - 16), ((251 ? var_7 : 45624))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, 34));
                    var_13 = (max(((11558 ? var_2 : var_5)), ((1 ? 65535 : 26350))));
                }
            }
        }
    }
    var_14 = 34;
    var_15 = -1;
    #pragma endscop
}
