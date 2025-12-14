/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_5);
    var_14 = 65526;
    var_15 = ((~(max(var_11, ((10 ? var_2 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = var_1;
                    var_17 ^= ((~(((!(7613395219232173519 * var_3))))));
                    var_18 = (min((((arr_1 [i_1 + 2]) >> (((arr_1 [i_1 + 3]) - 2748323862)))), var_4));
                }
            }
        }
    }
    var_19 = ((((max((63 && 255), -var_0))) ? (((var_3 ? 19 : ((var_10 ? var_5 : 58217))))) : var_0));
    #pragma endscop
}
