/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (max(var_16, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (15249140343606139660 == 202);
                var_20 ^= (max((arr_2 [i_0] [i_0]), var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] = 1068202544;
                            var_21 = 15249140343606139649;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
