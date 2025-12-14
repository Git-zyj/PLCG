/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [1] [i_2] [i_2] [i_2] = (~599845778);
                            var_10 &= ((((max((arr_0 [i_0]), (arr_0 [i_0])))) && (((((min((arr_9 [i_3] [i_2] [i_0] [i_1] [i_0] [i_0]), var_5))) ? (max(var_6, var_8)) : var_0)))));
                            arr_11 [5] [i_2] = -599845778;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_11 = (~var_8);
                            arr_17 [i_0] [i_0] [i_0] [i_0] = (((max(var_1, (max(599845788, -599845778)))) >> ((((var_4 - (arr_2 [i_0] [7] [i_4]))) - 1692587384))));
                            var_12 = (min((arr_8 [i_4 - 2]), ((-(arr_6 [i_0] [i_4 - 1] [i_4 - 2])))));
                        }
                    }
                }
                var_13 -= ((-599845763 + 2147483647) >> (((max((max((arr_1 [i_0] [1]), 1446146895)), ((min(var_0, var_4))))) - 4776669412024698907)));
            }
        }
    }
    var_14 = var_4;
    var_15 = (((var_9 * (max(var_3, var_6)))));
    var_16 = (((384190405030285829 / 33664) * (((63517 % (2024 != var_5))))));
    #pragma endscop
}
