/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((max(18446744073709551611, var_3)) < (72 & 1)))) > var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] = (((((-1585699147 ? (var_8 & var_14) : (((-1585699142 + 2147483647) << (8 - 7)))))) ? 1585699155 : 14));
                    var_21 = ((((var_9 ? var_19 : -119))) ? 4294967294 : (((-119 ? ((var_1 ? 2678 : 121)) : (max(-110, 1585699155))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_22 = (((((!(~2665)))) < (((((var_10 ? 238 : -1585699162)) > (max(-1585699147, var_6)))))));
        arr_11 [i_3] &= var_12;
        var_23 += ((-(((((2687 >> (1585699162 - 1585699137))) == var_2)))));
    }
    var_24 = var_4;
    var_25 = var_11;
    #pragma endscop
}
