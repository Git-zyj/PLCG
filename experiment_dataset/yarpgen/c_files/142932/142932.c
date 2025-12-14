/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((min(70, -20094))) ? -var_8 : var_5)), var_7));
    var_15 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((max((arr_0 [i_0]), 5274056456231806517)), (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_16 ^= (((arr_10 [i_0] [i_1] [i_1] [i_0] [i_4]) && (-32763 / 1)));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] = (((12457 / (arr_4 [i_0] [i_1]))) / (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3]));
                            }
                            var_17 *= var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
