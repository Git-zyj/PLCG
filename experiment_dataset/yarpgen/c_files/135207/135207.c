/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [3] [0] [i_1] = ((-4917430 ? var_5 : (arr_0 [i_0] [i_1])));
                var_17 = ((~((((arr_3 [i_0]) < var_9)))));
                var_18 = (min(var_18, (~2104016184938088084)));
            }
        }
    }
    var_19 = var_15;
    var_20 = (((var_12 ? (~18446744073709551613) : (var_2 < var_2))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    var_21 = (((-(arr_6 [i_4 + 2]))));
                    arr_13 [i_4] = ((((3 ? (-9223372036854775807 - 1) : (!1154775820))) < -32489));
                }
            }
        }
    }
    var_22 = (min(var_22, (((59 < 18446744073709551592) | -var_7))));
    #pragma endscop
}
