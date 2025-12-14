/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_13 << (((~0) + 22)))) << (((max(var_3, (-2147483647 - 1))) - 75))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (min(var_12, ((((min(var_5, var_8))) / (max(var_0, 2147483647))))))));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    arr_8 [i_0 + 2] [i_0 + 1] [7] [i_2] = (arr_3 [i_0 - 1]);
                    var_16 = (max(var_16, -2147483647));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_17 -= ((~(max(var_2, var_6))));
                    var_18 *= (min(((((((arr_4 [i_0] [2] [6] [i_3]) ? var_1 : var_0))) ? (var_13 >= 2147483638) : 2147483646)), ((((var_5 & var_13) == (((arr_3 [i_0]) ? var_4 : (arr_6 [i_0 + 2] [i_1] [i_0] [i_3]))))))));
                    var_19 = (min(var_19, (((var_8 ? (arr_10 [i_0] [i_1 + 1] [i_3] [i_3]) : (arr_4 [i_0] [i_0] [i_1] [i_3]))))));
                    var_20 = (min(var_20, (arr_10 [i_0] [i_0] [i_3] [i_3])));
                }
                var_21 = (min(var_21, (((((((-32767 - 1) ? 2147483632 : ((((-9223372036854775807 - 1) >= -2147483647)))))) ^ (max((arr_4 [i_0] [i_0] [i_1] [i_1 - 1]), (((var_5 ? var_3 : 1))))))))));
            }
        }
    }
    #pragma endscop
}
