/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
        var_15 = (min(var_15, (-764171400 && 3946060616)));
        var_16 += 26128;
        arr_5 [i_0] [i_0] = (min(var_5, ((25553 ? (min(var_14, (arr_3 [i_0]))) : (max(-764171400, var_8))))));
        var_17 -= -31785;
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                arr_11 [i_1] [2] [i_2] &= (min(((~(59 / 4611686018427387904))), (((((-(arr_0 [i_1]))) ^ var_0)))));
                arr_12 [i_1] = (((min(16, 96))));
                arr_13 [10] |= ((0 ? -1 : 53383));
            }
        }
    }

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        arr_16 [i_3] [i_3 - 2] = (max(((((96 | 24) > (((var_2 <= (arr_10 [i_3] [i_3] [i_3]))))))), ((20711 ? (arr_6 [i_3 - 1]) : (min(var_8, var_7))))));
        var_18 = (min(((124 ? 1252499182 : -23544)), var_14));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_23 [8] [8] &= (~var_4);
                    var_19 = (max(((214 ? 0 : 3504187232)), ((((arr_21 [i_3 + 1] [i_4] [i_4] [i_3 - 2]) ? (arr_21 [i_3 - 2] [i_4] [i_4] [i_3 - 1]) : (arr_21 [i_3 + 1] [i_4] [i_4] [i_3 - 1]))))));
                }
            }
        }
        var_20 &= var_9;
    }
    #pragma endscop
}
