/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] [i_0] = ((((max(2080528788, -2725))) ? (min((min(5470, 2080528788)), -21707)) : 80));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [2] [2] [i_2 - 2] [i_3] = (max(((((max((arr_1 [i_0]), var_13))) ? ((80 ? var_15 : var_6)) : (min(var_4, (arr_1 [i_0]))))), (max(((((arr_9 [i_1] [i_1] [i_2]) ? var_7 : var_10))), (max(var_8, (arr_6 [i_0] [i_0])))))));
                        arr_13 [i_3] [i_3] [i_3] [1] = ((((max(((var_3 ? 7125928530863850482 : var_12)), ((max(var_6, 14087)))))) ? (((((max(var_2, (arr_7 [i_0] [i_3] [i_3] [5])))) ? ((var_2 ? (arr_1 [i_3]) : 80)) : ((min(var_10, (arr_3 [i_3]))))))) : (max((((var_2 ? 2080528788 : (arr_5 [i_0] [i_1] [i_0])))), (((arr_5 [0] [i_1] [0]) ? var_13 : 7180546980811318058))))));
                        var_16 ^= (max(((((((arr_6 [i_0 + 1] [i_0 + 1]) ? (arr_11 [i_2]) : (arr_0 [i_2 - 3])))) ? (((var_1 ? -2726 : var_14))) : (min(var_6, (-9223372036854775807 - 1))))), (max((min(3618794775, 4551483860760560366)), ((((arr_3 [i_2]) ? var_2 : var_5)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 = (min(var_17, ((((((-15302 ? var_1 : (arr_2 [i_2] [i_1])))) ? ((2725 ? 1754362548638023959 : (arr_5 [i_0] [i_0] [i_4]))) : (((var_12 ? (arr_0 [i_1]) : 1))))))));
                        var_18 += ((((((arr_6 [i_0] [i_4]) ? 406811532 : var_1))) ? ((451314429 ? (arr_6 [i_1] [i_4]) : -34)) : ((((-127 - 1) ? 2744 : var_5)))));
                    }
                }
            }
        }
    }
    var_19 -= (max((min((((var_10 ? var_7 : var_13))), (min(var_14, var_4)))), ((max((((var_13 ? var_13 : 1672964326))), (min(9223372036854775807, var_10)))))));
    var_20 = (max(((((max(var_13, 9223372036854775807))) ? (min(var_4, 13)) : ((var_1 ? 7843186694011246700 : var_15)))), ((max(((max(-33, 1))), ((4551483860760560353 ? (-32767 - 1) : -54)))))));
    var_21 = (max(11312599623618666194, (((((14428321807177746039 ? -93 : 1))) ? 840750118428557399 : ((14723118521980871765 ? 4570 : 7757170814189335847))))));
    #pragma endscop
}
