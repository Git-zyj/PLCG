/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = ((max(var_11, var_4)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = max((!688980899), (arr_0 [i_0] [i_0]));
                    var_23 ^= (var_14 ? (((-(arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])))) : var_12);
                    var_24 = ((~((max(var_18, 647953937)))));
                }
            }
        }
    }
    #pragma endscop
}
