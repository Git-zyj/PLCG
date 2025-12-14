/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, 86));
                    var_18 = (max(var_18, ((((arr_5 [i_0] [i_2]) ? (arr_2 [i_0]) : (arr_5 [i_2 + 1] [i_1 + 1]))))));
                    arr_9 [2] [i_1] [i_2] = arr_5 [1] [1];
                }
            }
        }
        arr_10 [i_0] = (arr_6 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_19 *= ((((!(arr_17 [i_3] [i_3] [i_5]))) ? -24315 : ((min((!var_6), (arr_15 [3] [i_4] [12]))))));
                    var_20 *= (max((arr_19 [i_3] [i_5 + 2] [i_5]), 40234));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_25 [i_3] [i_4] [i_6] [12] = var_11;
                    var_21 += (arr_13 [i_3]);
                }
                arr_26 [i_3] [14] [17] = (((!var_16) % (((((0 ? var_10 : 0))) ? (!1) : (max(1713036792, -1040690682))))));
                arr_27 [i_3] [i_3] [i_3] = (var_11 ? (~var_2) : (min(1, ((var_12 ? 24318 : (arr_23 [20] [20]))))));
            }
        }
    }
    #pragma endscop
}
