/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = (min((min((arr_0 [i_0 + 2] [i_1]), 65535)), -3509848773286777793));
                    var_15 = (((((((arr_1 [i_0 - 1]) != (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2 + 1]))))) | (arr_7 [i_0])));
                    var_16 = (((min((((arr_7 [i_0]) ? -6443106313746370949 : (arr_3 [i_0]))), 3509848773286777798)) - (arr_0 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_0] = ((3509848773286777780 ? 406988514 : 1411046121));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (min(var_13, 6671172274429840012));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= 31;
    var_18 = var_2;
    #pragma endscop
}
