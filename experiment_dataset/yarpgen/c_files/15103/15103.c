/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min((min((max(var_6, var_9)), var_2)), (((3431047375 ? var_10 : (min(4253081956, 17271)))))));
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((max((4253081940 & var_4), (((var_9 ? 1 : (arr_1 [i_0])))))));
        var_18 = (max(var_18, (((((max((~var_3), (arr_0 [i_0])))) ? 2359010845018461544 : (((var_14 % ((~(arr_1 [i_0])))))))))));
        var_19 = ((((min(248, (arr_0 [i_0])))) ? -203 : ((120 ? 50 : (arr_1 [i_0])))));
        var_20 = ((var_14 ? var_8 : (min(var_12, var_13))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] &= ((((max(((((arr_1 [i_0]) < var_4))), ((16 ? 41 : var_4))))) ? 4253081936 : (max((arr_7 [i_2 - 2] [i_1] [i_2 + 1]), (var_1 | 4253081955)))));
                    var_21 = (min((((var_10 ? var_6 : var_6))), (arr_5 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
