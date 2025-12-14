/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(0, 29)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_6 [i_0 - 3] [i_0 - 3] [3] [i_0 - 3])));
                    var_15 = (arr_5 [i_2] [i_2] [10]);
                    var_16 ^= ((((arr_5 [3] [i_1] [i_2 - 1]) ? (arr_1 [i_0]) : ((max((arr_4 [i_1]), (arr_6 [i_0 + 1] [20] [1] [i_0 + 1])))))));
                    var_17 = (max((max(65535, 17786)), (arr_0 [i_0 - 3])));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 += (min(var_4, var_10));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                {
                    var_20 |= (max((arr_9 [11]), 0));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [7] [i_6] [i_5] [i_6] [i_3 - 3] = ((((((arr_18 [11] [i_4 + 2] [i_5 - 3] [i_6] [i_7 - 3]) ? -2 : (((arr_8 [i_3]) ? (arr_13 [i_4 - 3] [i_3]) : -1))))) ? 1012376248 : (((min((arr_12 [i_3]), 54170))))));
                                arr_23 [i_3 + 1] [i_6] [17] [i_3] [i_7 + 1] [i_7 + 1] = -154126590618876613;
                                var_21 = -373832873037742467;
                            }
                        }
                    }
                    var_22 = (max(var_22, (arr_7 [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
