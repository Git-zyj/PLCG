/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((7 ^ 2503843610) / 17126));
        arr_4 [0] = (((arr_1 [i_0 - 1] [i_0]) / (min((arr_1 [i_0 + 1] [i_0]), (7897 >> 12)))));
        var_15 = (max(var_15, ((((arr_1 [i_0] [7]) ? 0 : (arr_1 [i_0] [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = (((((((((3324495984 ? 65 : (arr_0 [i_1] [i_1])))) || ((var_0 == (arr_0 [i_1] [i_1]))))))) / (((-2147483647 - 1) ? -56 : 456532106))));
        var_16 = (((((arr_2 [i_1] [i_1]) ? 7 : ((var_4 >> (14969892019157739168 - 14969892019157739161))))) + (((arr_6 [i_1]) * (arr_6 [i_1])))));
        arr_8 [i_1] = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    {
                        var_17 = (!(arr_17 [i_3] [i_5 + 3] [i_5] [i_5 + 3]));
                        arr_18 [i_4] = ((-1 ? 1515664039 : 8796093022207));
                    }
                }
            }
        }
        var_18 = (min(var_18, (((0 ? 191 : 3987558075)))));
        arr_19 [i_2] [6] = (arr_12 [i_2] [i_2]);
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_22 [i_6] &= (min(565675624, 1889420550));
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_29 [i_7] [i_7 + 1] [i_7] = (((arr_27 [i_6]) >> ((((min(220, 90))) - 53))));
                        var_19 = (max(var_19, (((((max(3838435216, ((min((arr_26 [i_6] [i_7] [i_8]), var_11)))))) ? (71 ^ 456532109) : (456532088 > 191))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
