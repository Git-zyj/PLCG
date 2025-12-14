/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((2180585380 | var_7) ? (~2114381909) : var_11)), (var_6 & 2180585380)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 -= (((var_1 && var_6) ? (((arr_3 [i_1 + 2] [i_0 - 2]) % (arr_3 [i_1 + 2] [i_0 + 1]))) : ((-(arr_3 [i_1 + 2] [i_0 - 2])))));
                    var_14 = (min(var_14, (((((((max((arr_3 [i_0] [i_0 - 1]), var_10)) % 4228314127900816743))) ? -204062518966733162 : (arr_2 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
