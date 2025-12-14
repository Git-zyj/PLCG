/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((255 / (min(var_3, 1))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_11 = 14683803290345944915;
            var_12 += (((arr_1 [i_1 - 2] [i_1 + 3]) ? (29903 ^ 14683803290345944927) : (3576275264443424135 / 7)));
            var_13 = ((~(arr_5 [i_1 - 2] [i_1 + 3])));
            var_14 = (arr_1 [i_1 - 2] [i_1 + 2]);
        }
        var_15 = arr_5 [i_0] [i_0];
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = ((((max(var_4, ((-5955529176174759892 ? 1426479695 : 4088))))) ? (max(21, (arr_0 [17] [i_2]))) : 3654));
        var_17 -= (((arr_3 [i_2] [i_2] [i_2]) ? ((min((arr_3 [i_2] [i_2] [i_2]), (arr_3 [i_2] [i_2] [2])))) : ((-14 ? (arr_3 [i_2] [i_2] [1]) : 255))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_18 = (arr_4 [4]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_19 = 920641633;
            var_20 = ((-1148020664632531412 ? 4294967289 : 14683803290345944915));
            var_21 = ((((((arr_3 [i_4] [i_3] [16]) ? (arr_2 [i_3 + 1]) : (arr_5 [i_3 - 2] [i_3])))) ? ((var_8 % (arr_5 [i_3] [i_4]))) : ((((arr_8 [i_4]) - 1)))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_5] = ((arr_0 [i_3] [i_5]) ? (arr_0 [i_3 - 1] [i_3 - 2]) : (arr_11 [i_5]));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        var_22 = ((arr_22 [i_3] [i_3 + 2] [i_6] [i_5]) ? (arr_22 [i_3] [i_3 - 1] [i_6] [i_7]) : (arr_22 [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 2]));
                        var_23 = (((31 - (arr_19 [i_3] [i_3] [5]))) - ((~(arr_18 [i_3] [i_3] [i_3]))));
                    }
                }
            }
        }
    }
    var_24 = ((var_6 + (min((max(102, var_4)), ((min(var_2, 0)))))));
    #pragma endscop
}
