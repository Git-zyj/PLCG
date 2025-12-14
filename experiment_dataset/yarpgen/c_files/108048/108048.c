/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_17 = 32767;
                            var_18 = 3058887802;
                        }
                        arr_13 [i_0] [i_3] = ((-(arr_10 [i_3] [i_2] [i_1] [i_3])));
                    }
                    var_19 = (min(var_19, ((max((max(((min(2827650430, 32754))), (min(18446744073709551605, var_8)))), (!1710826257))))));
                }
            }
        }
    }
    var_20 ^= ((~((-(!56673)))));
    var_21 = var_6;
    #pragma endscop
}
