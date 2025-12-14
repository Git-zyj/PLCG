/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -var_14));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_14 [i_3] [0] [i_2] [i_2] [i_1] [i_0] = (((~var_5) ? ((var_0 * (arr_3 [i_3 - 1] [i_2 + 1]))) : (arr_5 [i_0 + 1])));
                        var_18 = var_8;
                        var_19 = (min(3239464032204763191, -7681248668372309488));
                        var_20 ^= max(var_2, ((-(!1289510600))));
                        arr_15 [i_2 - 1] [i_2] [i_0] = (!(arr_11 [i_3] [i_3 + 2] [i_3] [i_3 - 2]));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_21 = 3594026282008266470;
                        arr_18 [i_0] [5] [7] [i_1] [i_2] [i_0] = (max(((((max(var_7, var_8))) ? -359097593 : 20)), (((arr_17 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_4 + 2]) ? (~var_13) : (((!(arr_8 [7] [1] [i_4]))))))));
                    }
                    arr_19 [i_2] [i_1] [1] = (((-7681248668372309463 + 9223372036854775807) >> (10995055688922426228 - 60275)));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = (min(var_22, 80));
                        var_23 ^= ((!((min((var_14 < -22), var_7)))));
                    }
                }
            }
        }
    }
    var_24 *= (max(var_11, var_8));
    var_25 = (max(-9, ((var_6 ? ((var_1 ? -20 : var_15)) : 1914785714))));
    #pragma endscop
}
