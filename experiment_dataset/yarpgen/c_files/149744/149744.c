/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_10 << (((var_6 | var_2) - 3236677179218067421))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))) + ((var_9 << (var_10 - 3494))))))));
        var_14 = (((((((max(var_10, 13))) % ((8651604189366075303 ? -8076422502925429706 : -7))))) ? var_0 : (arr_2 [i_0])));
        var_15 = ((+(((max((arr_2 [i_0]), 70368609959936)) - (448 - 3446798073082321777)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = 139;
        var_17 = (min(448, 65106));
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_18 = (((arr_6 [i_2] [18]) || (((arr_6 [i_2] [i_2 + 1]) != (arr_6 [i_2] [i_2 + 1])))));
        var_19 = (i_2 % 2 == 0) ? (((((((4104082782 << (((arr_6 [i_2] [i_2]) - 17298959106502399828))))) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2 - 1]))) + (((min(4592854292618627002, (arr_5 [i_2 - 1]))) / (arr_6 [i_2] [i_2]))))) : (((((((4104082782 << (((((arr_6 [i_2] [i_2]) - 17298959106502399828)) - 9213071100996730903))))) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2 - 1]))) + (((min(4592854292618627002, (arr_5 [i_2 - 1]))) / (arr_6 [i_2] [i_2])))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (arr_5 [1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    {
                        var_21 = 65113;
                        arr_13 [i_2] [i_2] [i_4] [i_5] = (((var_1 - var_5) || (((126 >> ((((arr_11 [9] [i_3] [9] [i_3] [i_3] [i_3]) || -2973892519403612394))))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            var_22 = ((((430 ? var_6 : (arr_7 [i_2 - 1] [i_2 - 1]))) >> (((arr_8 [i_2] [i_2]) ? var_3 : (arr_8 [i_2] [i_2])))));
            var_23 = (min(var_23, (((min((arr_9 [i_2] [i_2 + 1] [i_2 - 1] [i_2]), var_8))))));
        }
        var_24 = ((1966708025101762553 ? 65130 : 65106));
    }
    var_25 = var_8;
    #pragma endscop
}
