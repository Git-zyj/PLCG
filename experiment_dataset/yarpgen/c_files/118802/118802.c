/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [19] [i_2] = ((~((min((arr_9 [i_2] [i_2 - 1] [i_4] [i_4 + 2]), -1)))));
                                arr_14 [i_2] [i_2] [i_0] [i_3] [i_2 + 1] [i_2] = ((arr_7 [i_0] [i_1] [i_2 - 1] [i_4 - 2]) ? (((((~(arr_7 [i_0] [i_1] [i_2 + 1] [i_3])))) ? (((arr_5 [i_1] [i_1]) ? -10 : (arr_6 [i_0] [i_2]))) : 10)) : ((~(arr_11 [i_4] [10] [i_4 + 1] [i_2] [i_4 + 1]))));
                                arr_15 [i_2] [i_2] [i_2] [i_4 + 1] [i_4] [i_3] [i_2] = (max((arr_1 [i_2 - 1]), ((max(22704, (arr_5 [3] [i_0]))))));
                                arr_16 [i_4] [i_4 - 2] [i_4 - 2] [15] [i_4 - 2] [i_2] = -5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_11 = (((((+(((arr_6 [i_6] [i_2]) ? (arr_18 [15] [i_5] [i_1] [i_0]) : 20))))) ? ((-(arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]))) : -13));
                                arr_22 [i_6] [5] [5] [i_6] [i_6] [i_2] [i_6] = -10;
                            }
                        }
                    }
                    var_12 = (((~13) < (max(-13, (arr_19 [i_1] [1] [i_2 - 1] [i_0] [0] [i_2])))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_13 = ((!((((arr_6 [i_0] [i_1]) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_7] [i_1]))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_14 |= (arr_10 [i_0] [i_1] [i_7]);
                        arr_30 [i_0] [i_1] [i_7] [i_8] = ((!(arr_24 [1] [i_8])));
                    }
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_15 += (((((13 ? -11 : (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]))) - 4)));
                    var_16 = (arr_32 [i_0] [i_0] [i_9] [i_1]);
                    var_17 = ((~(max(var_6, 37))));
                    var_18 = (((var_8 ? 4 : -10)));
                }
                arr_33 [i_0] = (arr_17 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_19 = (min(var_19, var_4));
    #pragma endscop
}
