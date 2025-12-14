/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_19 != (((191995710 >> (var_12 - 12494195376385141770))))))) >> (((min(4294967293, (~20))) - 4294967270))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 -= 2;
            var_22 = (min(var_22, (!-191995727)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_23 |= (((((1682793379524455244 <= (arr_0 [i_0])))) >> ((((4294967292 >> (((arr_9 [i_0] [4]) - 1799439182)))) - 4073))));
            var_24 = (max(var_24, (--105)));
            arr_11 [i_0 - 2] [i_2] = -1084532700;
            var_25 |= (((arr_1 [i_0 - 3]) > (arr_9 [i_2 + 2] [i_0 - 2])));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_26 = ((((min((max((arr_0 [i_0 - 3]), 1786378841)), ((((arr_5 [i_0] [i_3] [i_3]) / 316942917)))))) ? (214 >> 2) : ((max((arr_10 [i_0] [i_0 + 1] [i_0 + 1]), -105)))));
            var_27 = (max(var_27, ((((1 ^ 23) + (arr_9 [i_0 + 1] [i_3]))))));
        }
        var_28 = -24260;
        arr_15 [8] [i_0] = ((((min(((((arr_2 [i_0 - 1] [i_0]) <= (arr_8 [i_0] [i_0])))), -65535))) || (((((~(arr_3 [i_0] [3]))) ^ (((arr_9 [i_0] [11]) / (arr_13 [10] [8]))))))));
    }
    #pragma endscop
}
