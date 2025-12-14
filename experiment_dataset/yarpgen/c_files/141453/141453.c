/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((!((((-29972 + 2147483647) << (((var_12 + 871798785) - 14))))))))));
                var_15 ^= (((((((var_6 & (arr_3 [8])))) ? (min(var_4, -937045361)) : var_13)) / (arr_4 [i_0])));
            }
        }
    }

    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_8 [i_2] = 1;
        arr_9 [i_2 + 1] [i_2] = (((((-21 + 1) ? 657806669 : (112 || 10036299291560753532))) | (((var_2 ? (~8388607) : (((-64 + 2147483647) >> (1393995577 - 1393995566))))))));
        var_16 = (arr_6 [18]);
    }
    var_17 = 2772864038;
    var_18 = ((((1398 ? 45 : var_9)) - (((var_10 - -12204) ? var_12 : 14943500928047249136))));
    var_19 ^= var_13;
    #pragma endscop
}
