/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(var_6, 5037377201993676221)) ^ ((var_9 ? -1 : 23614))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_12 = (28186 ? 3129063308640621650 : 54371);
                            var_13 = ((max(48935, 7808407465703111766)) - (arr_3 [i_2]));
                            var_14 &= ((arr_8 [i_1] [i_3] [i_2] [i_1 - 1] [i_1]) ? (max(-5980571203954761679, 36141)) : ((((!(arr_7 [i_3 - 1] [i_3 - 2] [i_1 + 2]))))));
                        }
                    }
                }
                var_15 = (max(var_15, (arr_6 [9] [i_1 - 1])));
                arr_11 [i_1] [i_1 - 1] = ((((((arr_4 [i_1 + 2] [i_1 - 1]) | 40512))) ? ((max(62447, 41320))) : ((min(65534, 17358)))));
            }
        }
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4 + 2] = (arr_12 [i_4]);
        var_16 = ((((((max(var_7, var_6))) || (-2685749313778838874 > var_0))) ? ((((min((arr_12 [i_4]), (arr_13 [10])))) ? (((arr_12 [i_4]) ? 65535 : var_2)) : ((var_4 ? 29708 : (-9223372036854775807 - 1))))) : (34014 ^ 18758)));
        arr_15 [i_4] = (((((((max(var_2, (arr_12 [i_4])))) ? ((((9223372036854775807 > (arr_12 [i_4 - 1]))))) : (arr_13 [i_4])))) ? (((((max(-8553816992436390252, 63278)) < (min(var_6, -1)))))) : (min(0, (arr_12 [i_4 - 1])))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_6 - 2] [5] = (((52755 - 36504) ? ((14414 ? 60216 : var_9)) : (50976 - 54573)));
                    var_17 |= 25608;
                }
            }
        }
        var_18 = (max(var_18, -5262193055736436930));
    }
    #pragma endscop
}
