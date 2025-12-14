/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 = (max((((((46 ? 0 : 7610667758855006904)) < 4))), ((((max(var_2, 65523))) ? 25399 : ((var_8 ? 15 : (arr_0 [i_2] [i_3])))))));
                                arr_14 [i_3] = (min((arr_10 [i_2]), (((((1 ? 65533 : 2267985820628083935))) ? (((((-127 - 1) + 2147483647)) << (((arr_6 [i_0] [i_0] [i_0] [i_4]) - 8)))) : (((arr_4 [i_4]) ? (arr_13 [i_2]) : 1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] = (min(4, 28));
                                arr_21 [20] [i_0] [20] [i_5] [i_6] = arr_13 [6];
                                arr_22 [i_5] [i_1] [i_1] = (~var_3);
                            }
                        }
                    }
                    arr_23 [i_2 + 2] [i_1] [i_1] [i_0] = ((~(((((arr_13 [i_2]) ? (arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1]) : var_2)) << (((max(var_8, -28)) + 32))))));
                }
            }
        }
    }
    var_12 = 234;
    var_13 = (min(var_13, ((max(-10965, ((525422710 ? -var_7 : 83)))))));
    var_14 = (((max(((1170643266 ? -1226720096 : 46)), -27074)) - ((min(215, 65535)))));
    var_15 = (max(-27, ((-452438684 ? (1 <= 27) : -25))));
    #pragma endscop
}
