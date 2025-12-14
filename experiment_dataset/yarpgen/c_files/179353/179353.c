/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((((((arr_8 [i_1] [i_3 - 4]) >> (((arr_10 [i_0] [i_1 + 1] [i_0] [i_1] [i_0]) - 9378642736804302481))))) ? (~0) : (((arr_8 [i_2] [i_3]) ? (arr_8 [i_3 + 2] [i_1 - 1]) : (arr_10 [i_0] [1] [1] [i_2] [1]))))))));
                            arr_12 [i_1] [i_2] [i_3] = ((((max(((((arr_6 [i_0] [i_2]) < 38568))), var_13))) ? -1702888890 : (arr_8 [12] [i_0])));
                        }
                    }
                }
                arr_13 [i_1 + 1] [i_0] = (((min((arr_5 [i_1 - 2] [i_1 + 1]), (arr_5 [i_1 - 2] [i_1 + 1])))) ? 1687953095 : (min(56, (((-(arr_7 [i_0] [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = max((min(((min(0, var_6))), ((-32751 ? 101 : (arr_4 [i_4] [i_5]))))), ((min((arr_7 [i_5 - 2] [i_4 + 1] [i_4 + 1] [i_1 + 1]), (arr_8 [i_1 - 1] [i_5 - 1])))));
                            var_16 = 79;
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_17 = (((arr_21 [i_6]) ? ((-(arr_21 [i_6]))) : (((arr_21 [i_6]) ? ((134217728 ? var_6 : (arr_21 [1]))) : var_10))));
        var_18 = (max(var_18, ((((arr_21 [i_6]) ? (max(((~(arr_22 [i_6] [i_6]))), ((min(var_8, (arr_22 [i_6] [i_6])))))) : ((136 ? 64 : var_1)))))));
    }
    var_19 = 127;
    #pragma endscop
}
