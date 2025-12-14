/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_2 + 1]) ? (arr_2 [i_0]) : ((+(((arr_0 [i_2 + 1]) ? (arr_4 [i_0] [i_2 - 1]) : var_16))))));
                    arr_9 [i_0] [i_0] [i_2 - 1] = ((~(((arr_8 [i_0] [i_0]) ? (arr_6 [i_0] [i_2 + 1]) : (((var_4 ? (arr_7 [8]) : (arr_7 [1]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_14 [16] [i_4] = (arr_10 [i_4]);
                var_18 *= ((((arr_10 [5]) <= (arr_10 [i_3]))));
                arr_15 [i_3] [11] [i_4] = ((!(((33 ? 10940 : 78)))));
            }
        }
    }
    #pragma endscop
}
