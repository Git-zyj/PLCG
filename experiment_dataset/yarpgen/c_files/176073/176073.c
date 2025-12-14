/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, ((((min((arr_5 [i_0 - 3] [i_2 - 1]), (arr_3 [i_1 + 1] [i_0 + 1]))) | (((arr_5 [i_0 - 3] [i_2 - 3]) ? var_7 : (arr_5 [i_0 - 3] [i_2 - 3]))))))));
                        var_13 *= arr_1 [i_1];
                        var_14 = 8;
                    }
                }
            }
        }
        var_15 = (min(0, 4066177437));
    }
    var_16 = (min(2147483647, 18446744073709551615));
    #pragma endscop
}
