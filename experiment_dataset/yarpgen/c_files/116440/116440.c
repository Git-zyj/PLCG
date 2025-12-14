/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 + var_1) ? (-115 + 114) : ((((126 ? 121 : -126)) << ((((var_9 ? var_7 : var_11)) - 58))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (((!var_6) ? (((!var_2) ? (((min(var_1, var_7)))) : (-2147483647 - 1))) : (((((((var_5 ? var_3 : var_4))) || var_11))))));
                    var_15 = (min(var_15, (((-(((((max(var_4, var_6)))) & (max(var_1, var_12)))))))));
                    var_16 ^= (((var_9 ? var_3 : var_10)) * ((((var_8 ? var_0 : var_10)) >> (-var_12 - 8235357626354481133))));
                    var_17 |= (~((var_8 ? (!var_12) : (max(var_7, var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
