/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, -0));
        var_21 = (-1 < 11393);
        var_22 = ((~(~var_18)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, (((~((0 << (var_9 - 40608))))))));
                    var_24 = (!var_16);
                    arr_10 [i_2] [i_2] [i_2] = -0;
                    var_25 = (((arr_0 [i_2]) || 22618));
                }
            }
        }
    }
    var_26 = var_12;
    var_27 = (max(var_27, ((min((min(1634521916, var_17)), (((48069 ? (~3) : var_3))))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_17 [1] [i_4] = (min(((var_10 ? (arr_6 [i_3 + 3] [i_3 + 3]) : (arr_6 [i_3] [i_3 + 3]))), ((-(arr_6 [22] [22])))));
                var_28 = (min(var_28, (((((((max(var_13, 4088))) / 4088)) >> (((((((var_8 ? -275926591 : (arr_16 [16])))) ? 4294967295 : (var_5 & 4106))) - 4294967285)))))));
            }
        }
    }
    var_29 = var_19;
    #pragma endscop
}
