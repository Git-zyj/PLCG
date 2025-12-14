/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 39139;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (max(var_11, ((min((min(-12907, 6175275973347097153)), (arr_2 [6]))))));
        arr_3 [6] |= (min((arr_0 [i_0] [i_0]), -243941612));
        var_12 = (max(1, (((arr_1 [5] [i_0]) ? (min(var_4, var_8)) : 4294967295))));
    }
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_14 &= (((((~((4 ? 1586 : (-127 - 1)))))) ? 0 : (((arr_14 [i_1] [i_2] [i_3] [i_4] [i_2 - 3]) ? (arr_14 [i_1] [i_1] [i_3] [9] [i_2 - 1]) : (arr_14 [i_3] [i_3] [i_3] [i_1] [i_2 - 2])))));
                        var_15 = ((((((~-7436) ^ 206))) ? (((4173404555 ? (arr_10 [i_1] [i_2] [i_3] [i_4]) : (arr_13 [i_1] [i_1] [i_3])))) : ((((min(var_9, 337066594))) ? (arr_4 [i_2 + 2]) : (8479027641451185145 / var_5)))));
                    }
                    var_16 = (max(var_16, 40));
                    var_17 = (min(var_17, ((((((38234 ? (((min(21565, 49)))) : (arr_9 [i_2 + 2])))) ? (max(1, (arr_12 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2]))) : (arr_14 [i_1] [i_2] [i_2] [i_2] [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
