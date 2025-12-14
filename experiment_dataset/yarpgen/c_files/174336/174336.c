/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 ^= (!(((-((~(arr_0 [i_0] [i_0 + 1])))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0 + 1] [2] [i_0 + 1] = ((((((var_11 ? (arr_0 [i_0] [i_0 + 1]) : var_16))) ? (((min(var_19, 235)))) : (((arr_1 [i_0]) ? (arr_3 [12] [i_1 + 1] [i_0]) : 3351507320)))));
            arr_7 [6] [0] = ((((32767 % 49272) ? var_9 : (max(-112, var_2)))));
            arr_8 [i_1 + 1] [i_0] &= ((!((max(var_19, (!var_17))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 = (((((((-(arr_4 [i_4 + 3] [10] [10])))) ? 1527359260 : (max(49278, 3028981252)))) >> (((-2147483647 - 1) | ((49273 ? (arr_11 [i_4] [i_3 + 2] [i_0]) : var_7))))));
                        var_23 = var_8;
                    }
                }
            }
            arr_19 [i_0] [i_0] = (arr_2 [i_2]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_24 ^= (max((((((min(57947, (arr_16 [i_0]))))) & var_2)), (((-(arr_13 [i_5] [i_0] [i_0 + 1]))))));
            var_25 = (arr_11 [i_5] [i_0 + 1] [i_0]);
        }
        arr_22 [i_0 + 1] = (((arr_18 [i_0] [4] [4] [i_0]) ? ((-((max(1, var_1))))) : 48870));
        arr_23 [i_0] = 96;
    }
    var_26 = (max(var_26, var_11));
    var_27 = (((7598 ? ((max(var_4, 6))) : ((var_8 ? var_11 : 65518)))) <= (((!48840) % (~var_18))));
    #pragma endscop
}
