/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = (max((max(((((arr_1 [i_0] [i_1]) > 1682111025))), (arr_2 [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_0] [i_1])));
            var_12 = -1090251169917121989;
            var_13 = ((var_8 ? (!var_3) : var_9));
            arr_6 [i_1] [i_1] [10] = ((!(((var_8 ? (arr_4 [i_0]) : (((min(87, (arr_1 [i_1] [i_0]))))))))));
            var_14 &= 87;
        }
        var_15 |= ((max((169 >= 96), (max(var_10, (arr_0 [i_0] [i_0]))))) / 165);
        arr_7 [i_0] = (((((-(arr_2 [i_0] [3] [7]))))));
        var_16 ^= (arr_4 [i_0]);
        arr_8 [1] &= ((~((((arr_5 [8]) < (arr_5 [1]))))));
    }
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_16 [1] [i_3] = max((((!(arr_13 [i_2 - 3])))), var_10);
                var_18 *= ((((!(arr_9 [i_2 + 1]))) ? 186 : (~169)));
            }
        }
    }
    var_19 = (min(var_19, var_5));
    var_20 *= (min(((min(var_8, -var_2))), var_4));
    #pragma endscop
}
