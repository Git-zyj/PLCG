/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(~7322143206351406900)))) ? (1 ^ var_6) : -16026));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (!((((-(arr_5 [1]))))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_22 = (var_1 == 11654794488636624137);
                    var_23 = (((-((1 ? 1 : 203)))));
                    arr_9 [i_0] [i_2] = ((-(1 < 140737488355327)));
                    var_24 ^= ((((-(arr_8 [i_0] [i_1] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_25 = (~var_2);
                arr_15 [i_3] [i_4] = (arr_8 [i_3] [18] [i_4]);
                arr_16 [i_3] [i_4] [i_4] = ((-96673873 / (arr_4 [i_3] [i_3] [i_3])));
            }
        }
    }
    var_26 = (min(var_26, (((((~(var_15 - var_13))) ^ var_8)))));
    #pragma endscop
}
