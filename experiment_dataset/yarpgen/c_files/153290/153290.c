/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_4;
    var_17 = ((~(max((var_11 & 0), (~var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_18 += var_1;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_1 - 2] [i_0] [i_2 - 3] [i_3] [1] &= (((((((arr_0 [i_3]) ? var_14 : var_12)))) + (((((min(var_10, (arr_1 [i_1])))) <= ((2720717425 ? 865424029 : var_1)))))));
                            arr_12 [10] [i_2] = 2720717410;
                        }
                    }
                }
                arr_13 [i_0] = (+-2720717425);
            }
        }
    }
    #pragma endscop
}
