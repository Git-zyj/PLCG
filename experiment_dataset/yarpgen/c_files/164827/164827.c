/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = max((min((arr_0 [i_2 + 1]), ((var_0 + (-9223372036854775807 - 1))))), -var_8);
                    var_12 ^= ((max(((max((-32767 - 1), var_7))), ((var_5 ? var_8 : (arr_7 [i_1] [i_1] [i_1] [i_2]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_13 *= ((~((1 >> (((arr_6 [i_3] [i_3] [i_3]) - 4095308063413299287))))));
        arr_12 [i_3] = ((((max(1, -var_2))) ? (arr_6 [i_3] [i_3] [i_3]) : var_0));
    }
    var_14 -= 1;
    #pragma endscop
}
