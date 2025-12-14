/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (76822073 & 2891374623);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_2 [1]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [1] [1] [i_2] [i_2] |= (((arr_4 [i_2 + 1] [i_1 + 4]) ? (arr_3 [i_1]) : (1469338801 | -76822074)));
                        var_22 = ((-6467861003871041576 ? -2084487311 : -652113433));
                        arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_0] [i_3] = (arr_11 [i_0] [9] [9]);
                        var_23 = (min(var_23, ((9 ? (arr_8 [10] [7] [10]) : (arr_7 [i_0] [i_1] [i_2 - 1] [i_0])))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                {
                    var_24 = (max(var_24, (((((min((127 & 24116), (arr_14 [i_5])))) ? ((min(var_7, (max(1469338799, var_16))))) : (max(((((arr_15 [i_5] [i_4]) ? 1 : 0))), (arr_16 [i_4] [i_4] [i_4]))))))));
                    var_25 = (max(var_25, ((max(7, 55530)))));
                    arr_22 [i_6] [0] [i_4] = (max((((var_10 < 127) ? 56918 : 4165926526)), (arr_21 [6] [6] [6] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
