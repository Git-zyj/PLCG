/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 | (((var_0 ? var_6 : (~var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_9 [i_0] [i_2] [i_3] [i_4])));
                                var_22 ^= ((-((~(arr_7 [i_0 - 1] [i_1] [11] [i_3] [i_4] [i_2])))));
                                var_23 = (arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4]);
                            }
                        }
                    }
                }
                arr_13 [i_1] = ((!((max((max((-9223372036854775807 - 1), -1)), ((11071 % (-9223372036854775807 - 1))))))));
            }
        }
    }
    #pragma endscop
}
