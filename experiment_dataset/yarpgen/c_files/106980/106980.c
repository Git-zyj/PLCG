/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 15016301840069072101));
    var_11 *= (((((-2935109247174727802 ^ ((var_0 ? var_8 : var_6))))) ? (min((min(var_1, 4294967295)), (~var_5))) : (((min(var_1, 53860)) & (~247)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (arr_1 [i_1])));
                    var_13 = 214790477;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [11] [i_3] [i_2 - 1] [i_3 - 1] = ((!(~0)));
                        var_14 = (arr_1 [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_13 [i_0] = (arr_8 [12] [12] [i_1] [i_1] [12] [i_4 - 1]);
                        var_15 = ((~(((arr_3 [i_0] [i_2] [i_2]) ? (max(493, var_5)) : (arr_3 [i_0] [i_0] [3])))));
                        var_16 = (min(var_16, (max((min(22031, 3032750665)), (((!(((var_2 ? (arr_12 [i_0] [i_1] [i_2 - 1] [i_4] [i_4]) : (arr_11 [1] [i_0] [i_0])))))))))));

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_17 = (min(var_17, (arr_2 [i_0] [i_0] [i_0])));
                            arr_16 [i_0] [i_0] [i_2] [i_4] [i_5] = (arr_4 [i_5 + 2]);
                            var_18 = (min(var_18, (((((-(arr_12 [i_0] [i_0] [i_2 - 1] [i_0] [i_0]))))))));
                        }

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_19 -= ((114 ? (((!((((arr_11 [i_0] [i_0] [i_0]) ? (arr_14 [i_1] [i_4]) : 1)))))) : 177));
                            arr_19 [i_0] [6] [i_2 - 1] [i_4] [i_0] [i_6] = (max((((arr_1 [i_2 - 1]) ? 5477 : (arr_1 [i_2 - 1]))), ((((max((arr_4 [i_2]), var_2))) ? (arr_12 [i_6] [i_4 - 1] [13] [i_1] [i_0]) : (arr_2 [i_0] [i_1] [i_0])))));
                            var_20 -= 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
