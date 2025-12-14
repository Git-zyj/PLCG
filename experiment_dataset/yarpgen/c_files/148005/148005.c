/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_6 && var_6) ^ var_3))) && ((((!var_4) ^ (var_13 && var_13))))));
    var_16 = (max(var_16, ((((((var_5 > var_9) ^ var_1)) * (((((32767 < 0) && (var_14 / var_8))))))))));
    var_17 = (((((((var_14 && var_9) <= (var_1 & var_7))))) > var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (var_11 && var_2);
                var_19 |= var_3;
                arr_7 [i_1] [i_0] [1] = ((-var_1 * (var_13 + var_12)));
            }
        }
    }
    #pragma endscop
}
