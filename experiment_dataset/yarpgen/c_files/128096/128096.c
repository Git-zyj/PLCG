/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] &= (min((!255), ((var_8 - (arr_0 [i_0] [i_0])))));
        var_12 ^= (((~20238) ? ((var_10 ^ ((var_6 << (5588 - 5548))))) : (((((var_11 && (-9223372036854775807 - 1))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((var_6 + (((((var_6 ? var_5 : var_4))) ? var_2 : var_0))));
                    var_14 = (min(((var_10 ? -var_11 : (((arr_9 [i_0] [i_1]) ? var_10 : var_0)))), (((!((min(var_4, 2147483635))))))));
                }
            }
        }
        var_15 = ((((((((462178519 ? var_7 : 1374025780))) ? (arr_6 [i_0] [i_0]) : var_7))) || ((min(((var_1 ? var_5 : var_2)), (~var_2))))));
    }
    var_16 = ((((min(var_6, ((min(var_7, 0)))))) ? (((((0 ? var_8 : var_2))) ? var_9 : ((0 ? var_10 : 16957)))) : ((min((((var_2 + 2147483647) >> 0)), ((min(var_9, 165))))))));
    #pragma endscop
}
