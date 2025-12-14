/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((~(~var_5))) & var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 *= (arr_1 [i_1 + 1]);
                var_15 ^= (~((30720 ? (0 + 268369920) : (~4026597398))));
            }
        }
    }
    var_16 = (max(var_16, var_11));
    var_17 = (min(var_17, (((((((~var_3) && (var_0 || var_4)))) + (~-var_2))))));
    #pragma endscop
}
