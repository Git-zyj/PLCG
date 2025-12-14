/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_3 % (min((((1 ? var_6 : var_8))), (8506 + var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_2] [i_1] = (1 ^ var_7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((((min((arr_1 [i_0 - 1]), var_2))) ? (((-(((arr_0 [i_0 - 2]) + (arr_6 [i_2] [i_2] [i_4])))))) : (min((-2147483647 - 1), (((arr_0 [i_1]) / 2147450880))))));
                                var_20 = (arr_1 [i_0 + 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 += ((((!((((arr_5 [i_0] [i_1] [i_1] [i_0]) & 1))))) ? ((((arr_2 [i_6]) / (arr_9 [6] [i_1] [i_2] [i_1])))) : ((min(36, ((1 ? 96 : var_6)))))));
                                var_22 = (arr_18 [i_2] [i_1] [i_2] [i_5] [i_6]);
                                arr_19 [i_2] [18] [i_2] [i_1] [i_1] [i_2] = 1;
                                var_23 = (min(1, (((arr_4 [i_5] [i_5] [i_5]) ? (min(var_11, 0)) : var_14))));
                                var_24 = ((((((arr_2 [i_0]) ? (arr_3 [i_0]) : (42 % -1337192866)))) ? ((1 ? (min(1, 6918431794723155444)) : (((-16868 ? var_4 : (arr_2 [i_5])))))) : (((((var_5 ? -1337192866 : var_11)) - (((arr_14 [18] [i_1] [17] [i_5]) / (arr_18 [i_2] [7] [i_2] [10] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
