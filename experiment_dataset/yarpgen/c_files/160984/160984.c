/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = 1334178041;
                var_13 = (max(-1334178047, 62));
            }
        }
    }
    var_14 = (max(-1334178041, var_10));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_3] [7] = (((max((arr_10 [i_2] [i_3] [i_2]), (arr_5 [i_2] [i_3] [i_3]))) ? (((arr_5 [i_2] [1] [i_2]) ? 4294967295 : (arr_10 [i_2] [i_3] [i_2]))) : (((min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))))));
                arr_13 [i_3] = (max((max(((min(-25, (arr_1 [i_3])))), (((arr_5 [i_2] [i_3] [i_3]) ? (arr_5 [i_2] [i_2] [i_2]) : var_1)))), (((!((max((arr_2 [i_2] [6]), 9))))))));
                arr_14 [i_3] [i_3] [i_3] = ((1334178047 ? 65535 : (min(1334178046, 1334178041))));
                var_15 ^= (((arr_2 [i_2] [i_3]) ? (((arr_10 [i_2] [i_2] [i_3]) & 4294967295)) : (((-(arr_10 [i_2] [i_2] [i_2]))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_16 = 98;
                    arr_18 [i_2] [9] [i_3] [i_2] = (arr_4 [i_3] [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
