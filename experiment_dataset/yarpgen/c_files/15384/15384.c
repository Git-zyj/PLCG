/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_0] = (6929278694988649527 || 82);
                    var_18 = (13473482667649886800 || 105);
                    arr_9 [i_0] = (max((!11), ((var_2 ? (((arr_1 [i_0]) ? 5 : (arr_1 [1]))) : (((var_2 >> (var_1 - 2544))))))));
                    arr_10 [i_0] [i_1] [i_2] = (min(var_16, (!var_11)));
                }
            }
        }
    }
    #pragma endscop
}
