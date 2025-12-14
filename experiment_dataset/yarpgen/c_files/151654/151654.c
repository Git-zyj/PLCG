/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_8, ((((var_12 || var_6) ? var_12 : ((var_2 << (var_10 - 111))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_4] [4] [4] &= (arr_12 [i_4] [1] [i_2] [1] [i_4] [i_3]);
                                arr_15 [4] [23] [4] [i_3] [i_0] [21] [i_1] = (min(((32768 ? (arr_6 [i_4] [i_0] [i_1] [i_0]) : var_1)), ((((arr_0 [i_0]) / (arr_7 [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] = (max((arr_7 [i_0] [i_0] [i_0]), ((((min(var_11, (arr_5 [i_0])))) ? (~var_3) : (arr_8 [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
