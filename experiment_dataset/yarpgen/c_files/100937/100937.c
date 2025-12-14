/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = ((var_6 ? var_1 : var_17));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (max((min((var_0 * -9), 11964613)), (((4057365433 <= (((max(1, 0)))))))));
                var_21 = ((((((var_2 ? 0 : 357549667248978065)) >> (((~-3210) - 3182))))) ? (min(((var_15 ? 1 : 112)), ((~(arr_4 [i_0]))))) : (~-96479023));
            }
        }
    }
    var_22 *= (max(((var_16 % ((-357549667248978066 ? 237601859 : 4057365433)))), ((max(-14757, (-119 % 2147483647))))));
    #pragma endscop
}
