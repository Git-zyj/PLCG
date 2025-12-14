/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 > (var_13 == -var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (((((-(arr_4 [i_1] [i_1] [i_1])))) ? ((min((var_15 == var_9), (((arr_3 [i_1]) || (arr_4 [11] [11] [i_1])))))) : (arr_1 [i_0] [i_1])));
                arr_5 [9] [i_0] = ((!(((arr_2 [i_0] [i_1]) >= (arr_1 [i_1] [i_0])))));
            }
        }
    }
    var_21 = var_18;
    var_22 = (((min((var_3 - var_10), -var_17)) - (((var_10 - var_17) - var_6))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_23 = (((((min((arr_7 [i_2] [i_3]), (arr_7 [i_2] [i_3]))))) + var_11));
                var_24 = (max(var_24, (((var_6 < (min((-433239728 / 433239742), ((4294967292 / (arr_6 [11]))))))))));
                var_25 = (~(min(-433239725, (min((arr_8 [i_3] [i_3]), var_16)))));
            }
        }
    }
    #pragma endscop
}
