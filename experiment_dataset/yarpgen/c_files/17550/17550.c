/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_7;
    var_14 = (max(((min((max(62503, var_11)), (0 / var_2)))), ((15198975786710107872 ? 15198975786710107849 : 14758))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 *= (max((!14758), 47377));
                    var_16 |= (1101108174 - 47377);
                }
            }
        }
    }
    #pragma endscop
}
