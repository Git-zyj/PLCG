/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-(var_6 < var_7)))) ? 56931 : var_7);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((!((!(arr_3 [i_0 + 1] [1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((((((arr_1 [14] [i_1]) && (arr_5 [12])))) > (((!(arr_0 [i_3]))))));
                                var_14 = ((+(((arr_8 [i_0 - 2] [i_2 + 2] [i_2]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
