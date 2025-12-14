/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 = (min(var_21, (((-8094 + 2147483647) << (((36782 >= ((var_5 ? var_15 : 194)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] [i_1 - 2] = 10828;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] [i_1] [12] [i_2 - 2] [12] = min(((((62 || 194) && -174313458))), (((194 ? 32768 : 62))));
                            var_22 = ((-(max(-441898835, ((-174313454 ? 13003657752204424343 : 62))))));
                            var_23 = (max(var_23, ((max((((1859793023451488989 != (~1111062526)))), 65535)))));
                            var_24 = (~var_4);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
