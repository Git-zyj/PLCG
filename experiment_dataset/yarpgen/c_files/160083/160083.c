/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 122880;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, var_12));
                    var_22 = (max(var_22, (((var_2 ? -659530517 : (((((65535 ? 1765501341293740916 : 0))) ? (((var_3 ? var_7 : var_11))) : (~10715968730002190028))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2] = var_8;
                }
            }
        }
    }
    var_23 ^= ((((610311502 ? (((0 ? 89 : 112))) : 0)) % var_15));
    var_24 = ((var_3 ? ((-(var_11 < var_0))) : var_2));
    #pragma endscop
}
