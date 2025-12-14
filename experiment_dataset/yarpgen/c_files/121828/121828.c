/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = (min(var_12, (((~(47578 >= var_10))))));
                            arr_16 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] [i_2] = (95 != 4095);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_13 = (min(var_13, (17958 || 1)));
                            var_14 = (max(var_14, 4294967295));
                            arr_19 [i_3] [11] [i_2] [19] [i_3] = (((arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 1]) ? (arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]) : (arr_13 [i_2 - 2] [i_2] [i_2] [i_2] [i_2])));
                            var_15 = (min(var_15, (((-(arr_15 [i_0] [i_1] [i_2] [i_0 - 1] [i_3 + 1] [i_2 - 2]))))));
                        }
                        var_16 = (max(var_16, var_6));
                    }
                    arr_20 [i_0] [i_1] [i_2] [11] = (max((min(var_0, ((-(arr_8 [i_0] [17] [i_1] [i_1]))))), ((max((arr_9 [i_0 - 1] [i_2 + 1] [i_2 + 1]), (arr_10 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2]))))));
                    arr_21 [i_2] = ((((min((arr_0 [i_0 - 2]), var_6))) ? (((((-1 ? 1023 : (arr_6 [i_0] [0] [i_0])))))) : (((~-7391) ? 4294967295 : 6))));
                    var_17 = (min(var_17, (min((min(var_5, 2060266726)), (min((arr_18 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_2 - 3] [i_2 - 3]), (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])))))));
                }
            }
        }
    }
    var_18 = 4294967295;
    #pragma endscop
}
