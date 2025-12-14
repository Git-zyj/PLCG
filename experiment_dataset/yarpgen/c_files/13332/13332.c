/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((204 ? 186 : 52));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = ((-42 ? 145 : ((((arr_0 [i_0 + 2]) < var_0)))));
                    var_12 = (44 >= 128);
                    arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_2] = var_8;
                }
            }
        }
    }
    var_13 = (max(((142 - ((var_2 ? var_9 : var_2)))), 123));
    var_14 = 0;
    #pragma endscop
}
