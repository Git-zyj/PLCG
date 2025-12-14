/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= 1;
    var_17 = -1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((72 ? (min((max((arr_5 [i_0] [12]), (arr_3 [i_0] [i_0] [i_0]))), ((max(1, var_14))))) : (~var_11)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] [i_2] [i_1] [i_4] = 7;
                                var_18 = (min((arr_14 [i_2] [i_4 - 1]), (min((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1])))));
                                var_19 = max((max((arr_12 [i_2]), (arr_16 [i_1] [i_2]))), ((max((max(var_7, 65504)), ((max(var_4, (arr_12 [i_2]))))))));
                                var_20 += (((((arr_3 [i_0] [i_1] [i_4 - 2]) ? (arr_3 [i_1] [i_3] [i_4 - 1]) : (arr_3 [i_4] [i_4] [i_4 - 1])))) ? (arr_1 [i_4 - 1]) : (arr_3 [i_0] [i_0] [i_4 - 2]));
                            }
                        }
                    }
                }
                var_21 = -4853722343781238676;
            }
        }
    }
    var_22 = 2473586295176543851;
    #pragma endscop
}
