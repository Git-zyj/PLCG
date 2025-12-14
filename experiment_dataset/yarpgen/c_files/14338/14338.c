/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) ^ (~1755880158625247434)));
        var_18 = (-1294964796283805260 & 16);
        var_19 = ((((min((var_5 >= 0), (arr_0 [i_0] [i_0])))) || (((((var_11 - (arr_0 [i_0] [i_0])))) < 1755880158625247447))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((((((((17940 ? 1755880158625247456 : 11759))) ? (-9223372036854775807 - 1) : (arr_6 [i_1])))) ? (((arr_9 [i_1] [i_2] [i_1 + 2]) << (arr_9 [i_1] [i_2] [i_1 + 2]))) : (!-11752)));
                    var_20 = (i_1 % 2 == zero) ? ((((min((max((-9223372036854775807 - 1), -8430)), (min(392967938441314956, var_15)))) & (min((((5404 << (((arr_11 [i_2] [i_1] [i_2]) - 114))))), (((arr_2 [i_1]) & 7943913658615479741))))))) : ((((min((max((-9223372036854775807 - 1), -8430)), (min(392967938441314956, var_15)))) & (min((((5404 << (((((arr_11 [i_2] [i_1] [i_2]) - 114)) - 41))))), (((arr_2 [i_1]) & 7943913658615479741)))))));
                    arr_13 [i_2] [i_2] [i_1] = ((arr_9 [i_1] [i_2] [8]) | (min(-1, 5054)));
                }
            }
        }
        arr_14 [i_1] = (((min(197, ((((arr_2 [i_1 + 3]) <= (arr_8 [i_1] [i_1]))))))) ? var_12 : ((-3220795461139355476 % (arr_11 [i_1 + 2] [i_1] [i_1 + 3]))));
        var_21 = (((((arr_3 [i_1 + 2]) ? (arr_3 [i_1 + 3]) : (arr_3 [i_1 + 1]))) ^ ((-9084867397059726427 ? (arr_6 [i_1]) : ((var_10 | (arr_6 [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                arr_20 [i_4] = ((-((((arr_15 [i_4] [i_4]) && (arr_15 [i_4] [i_4]))))));
                var_22 = (min(4306621309013040278, -2160868436432946485));
            }
        }
    }
    #pragma endscop
}
