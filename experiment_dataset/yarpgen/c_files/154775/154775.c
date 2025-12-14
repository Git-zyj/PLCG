/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (max((((((var_10 ? 74 : -29))) ? (((250 ? var_11 : (arr_1 [i_0])))) : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 11502525535933552396)))), 0));
        arr_3 [i_0] [i_0] = 156;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = ((1 ? ((max(0, (arr_2 [i_1])))) : (max(((max(125, 1))), (-2147483647 - 1)))));
        var_17 = (((6411254721907794423 ? (arr_5 [10] [i_1]) : -4922472665874914092)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [14] = 57;
        var_18 = (585595644 ? 103 : 0);
        arr_9 [i_2] = (((arr_6 [i_2] [i_2]) <= var_10));

        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            var_19 = ((-(arr_0 [i_3 - 1] [i_3])));
            arr_12 [i_3] [i_3] = 10;
            var_20 = (arr_1 [i_3]);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 = ((198 ? ((((arr_6 [i_6] [i_5]) ? 96 : (arr_6 [i_2] [i_4])))) : 7088647235338741824));
                        arr_22 [i_2] [i_4] [1] [i_6] = 1;
                        var_22 *= 1;
                        arr_23 [i_2] [i_2] [i_4] [i_2] = 95;
                    }
                }
            }
            var_23 += ((((var_10 ? 0 : 136)) >> 6));
        }
    }
    var_24 = var_3;
    var_25 = 249;
    #pragma endscop
}
