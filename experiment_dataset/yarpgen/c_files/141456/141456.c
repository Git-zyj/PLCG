/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((var_7 ? ((((max(var_5, var_9))) ? ((var_6 ? 8856839537911462461 : var_10)) : (min(4968394343352623154, var_8)))) : ((((var_7 <= (min(var_2, 4968394343352623142))))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_13 = ((!((!(arr_1 [i_0 + 1] [i_0])))));
        var_14 = (min((((arr_1 [i_0 + 2] [i_0]) + var_5)), (((!(arr_2 [i_0 - 3]))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((max(((min((arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_3]), var_2))), ((((((arr_7 [i_0] [i_0] [i_0]) ? 0 : var_4))) ? (arr_0 [i_0]) : (~var_6))))))));
                        var_16 = (((arr_2 [i_0 - 4]) ? ((((var_4 ? (arr_9 [i_1]) : 1)) & (((min((arr_7 [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_0]))))))) : -2));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_17 = (arr_5 [i_4] [i_4] [i_4]);
        var_18 = (-28277 * (arr_6 [i_4] [i_4] [i_4] [12]));
        var_19 &= ((((var_10 ? (arr_2 [0]) : -7119842052485023018)) * ((((!(arr_11 [i_4])))))));
        var_20 = -4968394343352623143;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                {
                    var_21 = 4968394343352623142;

                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        arr_22 [i_4] [i_5] [i_5] [i_4] [0] [i_7] |= ((!(arr_6 [i_6] [i_7 + 1] [i_7 + 1] [i_7])));
                        arr_23 [11] [11] [i_7] = (var_6 ^ 2589534021);
                    }
                }
            }
        }
    }
    var_22 |= var_8;
    #pragma endscop
}
