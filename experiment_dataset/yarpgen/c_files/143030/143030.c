/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 1073741824;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(1610612736, (-127 - 1)));
        var_18 = 705532890;
        var_19 = var_14;
        var_20 = (min(var_20, (0 && 7412096279044690617)));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_2] [i_2] [14] = (!4294967286);
                        arr_16 [i_2] [i_2] [i_2] [i_3] [i_4] [i_4] = (11034647794664860999 > 11014811820038306484);
                    }
                }
            }
            arr_17 [i_2] [i_2] [i_2] = ((var_5 ? 7412096279044690629 : 11014811820038306491));
            var_21 = (min(var_21, var_7));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_20 [i_5] [i_1] = ((+(min((arr_8 [i_1] [i_1] [14] [i_5]), (((arr_5 [11] [i_5]) ? 80 : var_9))))));
            arr_21 [1] [i_5] [i_5] = var_0;
            var_22 += (min((7412096279044690617 && 11034647794664860997), (!1168247651234004060)));
        }

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            arr_24 [i_1] = (arr_7 [i_6 + 4] [i_6] [i_1]);
            arr_25 [i_1] [i_1] [i_6] |= (min(((min((((var_12 >= (arr_23 [i_1] [i_6])))), (arr_0 [i_1])))), ((11034647794664860987 ^ (min(11034647794664860999, 11034647794664860999))))));
            arr_26 [i_1] [i_6] = ((17592051826688 ? 7412096279044690624 : -88));
            var_23 ^= (min(((~(arr_19 [i_6 + 2] [i_6 + 1]))), var_12));
        }
    }
    var_24 = (~-14);
    #pragma endscop
}
