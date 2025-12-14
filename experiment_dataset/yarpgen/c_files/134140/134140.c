/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (min(var_9, ((((arr_2 [2]) && (arr_2 [1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_13 ^= (((((var_1 ? var_9 : 2112819743))) ? var_3 : (arr_3 [i_0] [i_0] [i_0])));
                    var_14 = (min(var_14, (((var_6 ? (9436 && -2019118341710603395) : -2019118341710603395)))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_15 = (min(var_15, (arr_4 [i_1] [11] [i_1])));
                    var_16 = (max(var_16, ((((var_7 | (arr_10 [i_0] [i_1] [i_3])))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    arr_13 [i_4] [i_1] [i_4] = ((-(min((((arr_6 [i_4] [i_4] [i_1] [i_0]) ? 1 : (arr_1 [i_1]))), (arr_0 [21])))));
                    arr_14 [i_0] [i_1] [i_4] = 0;
                    var_17 *= 65535;
                    var_18 *= ((((min(var_0, (arr_6 [i_1] [i_1] [i_1] [i_0])))) ? (((max(var_2, (max(var_4, var_7)))))) : ((~(min(9223372036854775807, var_5))))));
                }
                var_19 = (min(var_19, (((-(97 | 1))))));
            }
        }
    }
    var_20 = var_0;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_21 = (max(var_21, ((((arr_5 [10] [1] [i_5]) + (~-1))))));
        arr_17 [i_5] [i_5] = var_8;
        arr_18 [i_5] [i_5] = (((((arr_11 [10] [10]) & 3404)) << (((arr_6 [i_5] [i_5] [i_5] [i_5]) - 3738982178))));
    }
    #pragma endscop
}
