/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(3, 1);
    var_20 |= (min(((var_14 ? var_1 : ((min(var_12, 1))))), var_13));
    var_21 += var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (!var_0);
                arr_6 [i_0] [i_0] [1] = ((1 ? ((min((arr_1 [i_0]), (arr_4 [i_0] [i_0] [i_0])))) : var_4));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_10 [1] [i_0] |= min((arr_2 [i_0] [6]), 128);
                    var_22 = ((var_7 - (arr_2 [i_1 - 1] [i_0])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_23 -= (((((1 ? 1 : 1))) ? ((min((arr_4 [1] [i_1 - 1] [1]), (arr_9 [i_1 - 1] [1] [8] [i_1])))) : (((arr_2 [i_1 - 1] [8]) ? (arr_4 [0] [i_1 - 1] [0]) : (arr_2 [i_1 - 1] [4])))));
                    var_24 = (((max(0, 1)) ? ((var_7 ? 1 : var_16)) : (arr_0 [i_0])));
                }
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_25 = (max(var_25, (1 != 1)));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max(1, (max(232, 1))))) ? ((((min(var_1, (arr_15 [i_1] [i_5 - 4])))) | var_2)) : ((var_4 & ((max(var_18, (arr_16 [i_0]))))))));
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = ((((min(1, (arr_16 [i_0])))) ? (arr_7 [i_0] [22] [i_0]) : (!var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
