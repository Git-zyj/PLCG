/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (((var_11 | (~var_3))));
    var_15 = max(((((var_11 <= var_12) <= (1 / 30)))), var_5);
    var_16 &= (max(var_13, (var_8 - var_6)));
    var_17 = (((((-1 ? (!1) : 1))) || ((min(7341952440248291174, 10988)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (((var_7 / (arr_3 [i_1 - 1] [i_0 + 1]))) % ((min(1, 1897891951))));
                    var_19 = (1 & 1);
                    arr_9 [i_0] [i_1] [i_2] = max(((((((arr_4 [2] [i_2]) / var_6))) ? (arr_8 [i_0 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 3]) : (min(32749, 0)))), ((((((var_11 ? 18446744073709551615 : (arr_1 [i_1] [i_2])))) ? (max(7, var_8)) : var_11))));
                }
            }
        }
    }
    #pragma endscop
}
