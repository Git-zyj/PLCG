/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_14 = ((-((-43 ? -232498297 : 42))));
                    var_15 = ((+((-17501 ? (arr_2 [i_0]) : var_1))));
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = (max((max(-var_0, (arr_5 [i_0] [i_0]))), (((!((147 > (arr_10 [i_0] [i_1 - 1]))))))));
                    var_16 = 42;
                }
                var_17 = (min(var_17, (!-43)));
            }
        }
    }
    var_18 |= var_12;
    #pragma endscop
}
