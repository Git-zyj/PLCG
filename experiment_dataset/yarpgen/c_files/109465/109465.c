/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((var_6 + (!0))) * ((((!(((var_2 ? 183 : var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (arr_2 [i_0] [19] [i_2]);
                    arr_7 [i_1] [i_1] = (((arr_5 [i_0] [i_0] [i_1] [i_2]) ? 1125899772624896 : (((((max(var_4, 106))) + (201 && -1125899772624896))))));
                }
            }
        }
    }
    var_15 = -124;
    var_16 = var_10;
    #pragma endscop
}
