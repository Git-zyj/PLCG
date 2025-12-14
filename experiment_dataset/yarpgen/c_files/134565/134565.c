/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((min(var_13, var_11)));
                var_15 = ((min((!var_7), (var_0 <= 3688593342942006257))));
            }
        }
    }
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    var_17 = (max(((min(177010031, var_2))), ((min((min((arr_5 [i_2] [1]), var_5)), (var_4 <= 8165749746395500740))))));
                    var_18 ^= (((((-(arr_7 [i_2] [i_2])))) ? (arr_7 [i_2] [i_2]) : (((var_6 + 2147483647) << (var_11 - 1365819588514714656)))));
                    arr_13 [i_4] [i_3] [i_3] [i_2] = (~(min(var_8, ((var_0 ? var_9 : var_2)))));
                    var_19 = ((((256 <= 1718885256) ? 8267716092158504102 : ((3413120886 ? 65280 : 7048768292643264221)))));
                }
                var_20 = ((min((var_13 & var_13), ((var_10 ? var_13 : var_11)))));
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
