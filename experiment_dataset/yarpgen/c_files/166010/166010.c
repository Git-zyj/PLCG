/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 ^= ((~((max(var_8, var_6)))));
                    var_16 += ((10 | (arr_1 [i_0] [i_0])));
                    var_17 = ((~((((((7651873894857607557 << (var_7 - 6206429233889061349)))) || (6513112513442204507 <= var_6))))));
                    var_18 *= ((min((var_12 ^ var_11), var_4)));
                    var_19 = (var_5 / var_4);
                }
            }
        }
    }
    var_20 = (max(var_20, (((!(((var_11 / var_1) && var_9)))))));
    #pragma endscop
}
