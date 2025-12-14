/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 32744;
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((-(min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]), (arr_3 [i_1])))));
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_0] = ((-(arr_8 [3] [16])));
                            }
                        }
                    }
                    arr_15 [i_0] = ((~(min(4966623701816376331, 65522))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((-(min((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? var_14 : (arr_7 [i_0] [i_0] [i_1] [i_2]))), ((((arr_5 [i_2]) < (arr_4 [i_1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
