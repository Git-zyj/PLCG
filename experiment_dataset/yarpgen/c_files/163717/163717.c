/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((((((var_10 != (arr_4 [i_0])))) % var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_0] [i_4] = ((((max(2967663693, ((min(var_4, (arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))))) ? var_1 : ((max((max((arr_0 [i_0]), (arr_1 [8]))), ((max((arr_0 [i_0]), -13970))))))));
                                arr_12 [4] &= 32767;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_12;
    var_20 ^= var_10;
    var_21 = var_17;
    #pragma endscop
}
