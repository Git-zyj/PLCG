/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = 131071;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1 + 2] [i_2] [i_3] [i_0] = ((+(max((arr_10 [i_0] [i_1 - 1] [i_0] [4] [i_4] [i_4]), (131071 | 131071)))));
                                var_20 *= (((131054 || 131056) % ((min((arr_3 [i_3 - 1] [i_3] [i_4]), ((((arr_2 [4] [0] [i_0]) && (arr_2 [i_1] [6] [i_3])))))))));
                            }
                        }
                    }
                    var_21 = (arr_10 [i_0] [i_1] [3] [i_1 - 2] [2] [i_2]);
                }
            }
        }
    }
    var_22 = 131071;
    #pragma endscop
}
