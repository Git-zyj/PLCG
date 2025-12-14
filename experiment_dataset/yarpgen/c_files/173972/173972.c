/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((((var_12 ? var_10 : var_2))) ? (var_9 | var_9) : ((var_0 ? var_0 : var_12))))) ? (((!var_5) << (var_1 + 310509491))) : var_5)))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((max(var_5, var_5))) ? ((max(var_7, var_7))) : (var_1 * var_7)))));
                var_17 = (((((var_2 ? var_8 : var_2))) ? (~var_4) : (var_6 | var_1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = (max(var_18, (((-((var_2 ? var_0 : (~566050662112530198))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_19 = (max(((min((min(var_1, var_5)), ((var_11 >> (var_11 - 92)))))), ((17880693411597021425 ? 210995258 : 566050662112530198))));
                            var_20 ^= (((var_2 / var_12) * (var_10 / var_5)));
                            var_21 ^= ((((((var_11 << (var_3 + 66693587))) <= var_13)) ? (((((var_2 ? var_6 : var_10))) ? (var_0 & var_1) : (((min(var_9, var_10)))))) : (max((var_8 ^ var_11), var_0))));
                            var_22 = ((var_13 || (var_4 || var_11)));
                            var_23 = (((var_12 != (~var_11))) ? ((((!var_1) * ((min(var_5, var_7)))))) : ((var_7 * (var_5 | var_12))));
                        }
                    }
                }
                var_24 ^= var_11;
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
