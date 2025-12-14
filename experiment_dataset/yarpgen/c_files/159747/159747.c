/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_13;
    var_19 = (min(var_9, var_11));
    var_20 = (min(((((((var_13 ? var_14 : var_14)) + 2147483647)) >> (var_8 != var_1))), ((((var_10 ? var_10 : var_10)) - var_13))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((((((54043195528445952 ? 12 : 4135679236542958705)) * 0)) < (var_3 || var_16)));
                    var_22 = var_5;
                }
            }
        }
        var_23 = (max((min((var_3 - var_16), (243 - 0))), (((((var_9 ? var_4 : var_6)) / ((var_9 ? var_7 : var_5)))))));
        var_24 = var_13;
    }
    #pragma endscop
}
