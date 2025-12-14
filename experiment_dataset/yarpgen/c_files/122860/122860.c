/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(18148797842302353798, 297946231407197818));
    var_18 = var_0;
    var_19 = (max((((var_16 / (var_8 + 437)))), var_15));
    var_20 = (min(var_20, 1247453600));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (297946231407197817 != var_0)));
                    var_22 ^= ((((var_4 << (var_14 - 8934036895452247712))) >> (var_16 - 43)));
                }
            }
        }
    }
    #pragma endscop
}
