/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = (((max((arr_5 [i_1 + 1] [i_1 + 3] [i_1 - 4]), (127 ^ var_6))) + var_7));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 |= ((((max(((var_3 - (arr_6 [i_0] [i_0] [15] [i_0]))), -1335922082))) ? 7936 : 2039519271));
                                arr_14 [i_4] [i_0] [11] [10] [i_0] = (max((((~(-2147483647 - 1)))), ((-1427884490 | (max(-15494, (arr_4 [i_2] [1] [i_0])))))));
                                var_12 -= (min((arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [19] [i_1 + 2]), ((!(arr_0 [i_0])))));
                                var_13 -= 86;
                            }
                        }
                    }
                    var_14 -= ((~((max((arr_2 [i_0] [i_0]), (arr_1 [i_1] [i_1]))))));
                }
            }
        }
    }
    var_15 = ((var_6 - (((var_5 >= ((max(5315, var_0))))))));
    #pragma endscop
}
