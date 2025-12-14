/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((var_7 >> (((((min(-2016550485239606209, var_0)))) + 11231))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_3 + 1] [i_1] = (max((max((arr_7 [i_4 + 2] [i_4 + 2] [i_4 + 1]), 18446744073709551615)), (arr_5 [i_4] [i_4 + 1])));
                                arr_13 [i_0] [i_1] [i_1] [i_3 + 1] = ((((15 ? 9394517007805027323 : ((((arr_3 [i_0] [i_0 - 1]) ? (arr_1 [i_3] [i_0]) : 1))))) == (((((arr_7 [i_4 - 1] [i_4] [i_4 - 1]) == (arr_3 [i_0 + 2] [i_4 - 1])))))));
                                var_18 = (+((((arr_0 [i_0 + 3] [i_3 + 1]) == 6752185391373172854))));
                                var_19 = (max(var_19, ((min((((((((arr_5 [i_2] [i_2]) ? var_5 : -8043)) + 9223372036854775807)) << var_8)), var_9)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = (((min(var_14, var_7))) ? (((((min((arr_8 [i_0] [7] [i_5 - 1]), var_10))) ? (1 != var_14) : (arr_5 [i_0 + 2] [i_0 + 3])))) : ((0 ? (max(1, (arr_2 [i_0] [i_1] [i_6]))) : 1884496342)));
                                var_21 = ((((max(1859685530, var_9))) == (((29393 < (arr_5 [i_5] [i_5 + 2]))))));
                                var_22 = (!1);
                            }
                        }
                    }
                    arr_20 [i_0 + 3] [i_0 + 2] [i_1] [i_2] = ((34094 == ((((arr_2 [i_0 + 1] [i_0 + 1] [i_2]) >= (arr_19 [i_0] [i_0 + 2] [0] [10] [i_0 + 2]))))));
                }
            }
        }
    }
    var_23 += (max(var_1, ((-((-6606 ? var_12 : -686))))));
    #pragma endscop
}
