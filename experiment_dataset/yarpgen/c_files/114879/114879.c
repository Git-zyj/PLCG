/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 - var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3 + 2] [i_2] [0] [i_2] [1] [i_2] |= (((((((max(9461, (arr_7 [1] [i_1])))) ? (-64 <= 58889) : 126))) >= (arr_10 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_4])));
                                var_12 += ((((min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1] [i_1])))) ? (((arr_4 [8] [8] [i_3] [i_4]) ? ((54 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_8 [i_0]))) : 1)) : ((((arr_2 [i_0] [i_1] [i_4]) ? (arr_2 [i_0] [i_0] [i_2]) : (arr_2 [i_4] [i_3] [i_0]))))));
                            }
                        }
                    }
                    var_13 = (arr_4 [i_0] [i_0] [i_0] [8]);
                }
            }
        }
    }
    #pragma endscop
}
