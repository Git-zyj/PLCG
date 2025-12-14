/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((-((-4149583406665709583 ? -1 : var_0))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_19 -= ((((max(var_7, var_3))) ? (((var_13 & (arr_2 [i_1 + 2] [i_1 + 2])))) : (((arr_2 [i_1 + 2] [i_1 + 2]) ^ var_1))));
            var_20 = ((((2 ? ((1 ? 0 : 1289259729)) : var_8)) < (((-((var_10 ? (arr_0 [i_1 - 1]) : var_3)))))));
            arr_6 [24] [i_1 + 1] = ((!(((-2 ? (((arr_3 [i_0] [i_1]) & (arr_1 [i_0] [i_1]))) : 17524)))));
            var_21 = (min(67108863, (((((max(11, var_12))) ? 83 : (~19334))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_22 = var_13;
                            var_23 = (((-194642597 / (arr_1 [i_3 - 4] [i_4 + 1]))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((-(arr_7 [i_0])));
                            var_24 = var_7;
                        }
                        var_25 += (arr_3 [i_2] [i_0]);
                        var_26 = 503066398194662015;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (max((((~9223372036854775807) ? (((arr_3 [i_6] [i_6]) ? (arr_7 [20]) : var_17)) : (((max(var_12, 65526)))))), var_6));
        var_27 = (max(var_27, ((((2 >= var_9) ? ((((((560017394941551416 ? 11053 : -17875))) ? ((min(62956, 32767))) : -1450625946))) : (((arr_14 [i_6] [i_6]) ? ((var_10 ? (arr_4 [i_6] [2]) : var_9)) : 32761)))))));
    }
    var_28 ^= ((var_2 ? var_12 : ((var_4 ? var_2 : (~var_4)))));
    #pragma endscop
}
