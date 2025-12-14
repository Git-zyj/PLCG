/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_7));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = max((arr_1 [i_3 - 4]), (((!(((var_12 ? -6 : (arr_3 [i_0] [i_0] [i_0]))))))));
                            arr_11 [i_2] [i_1] [12] [i_3] |= (arr_8 [i_0] [8] [i_2]);
                            var_19 ^= (!var_3);
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (var_5 / var_8)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_21 = ((+((((arr_9 [i_4] [i_6]) || (arr_19 [i_4] [i_4] [i_4]))))));
                    var_22 = (min(3877238480, (21038 && 78)));
                }
            }
        }
    }
    var_23 = (max(var_23, (((-19 ? (((var_4 ^ var_3) ? var_3 : (((var_6 ? var_11 : 127))))) : ((((18 ? var_4 : 1087382577483447596)) | 166)))))));
    #pragma endscop
}
