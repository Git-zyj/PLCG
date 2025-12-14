/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(21135 != 44401)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(44401, (((28136 ^ 21120) ? ((1 ? -4671317753217831303 : 1)) : -4671317753217831320))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = -0;
                    var_11 = 1;
                    arr_10 [i_0] [i_1] [i_0] = ((((((arr_2 [18] [i_1]) | 60256))) ? (((var_4 == (arr_2 [i_0] [1])))) : (arr_5 [i_0 + 2] [18] [10] [i_0 + 2])));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_5] [i_3] [i_3] [0] [i_0] = ((-(((((min(237, (arr_18 [i_0] [12] [12] [i_0] [i_5])))) < (arr_15 [4]))))));
                                arr_22 [i_0] = (arr_15 [i_1]);
                            }
                        }
                    }
                    arr_23 [i_0] [i_0] = 51;
                    arr_24 [i_0] = min((-9223372036854775807 - 1), ((max((arr_20 [i_0 + 3] [i_0 + 2] [i_0 + 3] [i_1] [i_3]), 1))));
                    arr_25 [i_0] = ((3374296344095836955 ? (min((~-3374296344095836956), ((-(arr_2 [i_0 + 1] [i_0 + 1]))))) : (~-3374296344095836955)));
                }
                arr_26 [i_0] = (((((arr_19 [i_0 + 3] [i_0 - 1] [i_0 + 3]) ? (arr_15 [i_0]) : 3836868072)) - 12));
                arr_27 [i_0] [10] [i_0] = ((21135 - ((-(arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2])))));
                var_12 = ((((max(64512, 1))) || ((((~470577168611424864) ? ((var_5 ? 1373956827 : 0)) : 2142255509)))));
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
