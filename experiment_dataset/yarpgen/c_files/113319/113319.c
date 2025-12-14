/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((var_5 ? (max(4294967295, 32738) : (min(4294967292, -6086))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 *= (((((var_4 - (arr_0 [i_0])))) ? (((var_0 ? var_3 : ((min((arr_5 [2] [i_1] [3]), var_6)))))) : (min((min(var_4, (arr_0 [4]))), ((max(-1, (arr_1 [i_0]))))))));

                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] = (((arr_2 [i_1] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_1] [i_2 - 3])));
                    var_19 = (max(var_19, ((max(var_3, var_3)))));
                    arr_10 [i_1] [i_1] [8] = ((((((min((arr_3 [i_0] [8]), (arr_2 [i_1] [i_1]))))) % (max(4294967295, 25454)))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_3] [i_2 - 2] [i_1] [i_3] = (max((arr_11 [i_2 - 2] [6] [i_2] [i_0]), (arr_7 [i_0] [i_0])));
                        arr_14 [i_3] = ((((((arr_11 [i_2 + 1] [7] [i_2 - 1] [i_3]) ? (arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 3] [5]) : 240))) ? (max(9223372036854775792, var_16)) : ((max(((var_10 ? 4 : var_3)), (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 3]))))));
                        var_20 *= ((-11896 ? -4 : -11899));
                        arr_15 [7] [1] [i_3] [i_3] [i_3] = ((((min((((15 <= (arr_2 [i_0] [4])))), (((arr_4 [i_1] [i_2] [i_3]) & 127))))) || (((((var_5 ? var_11 : var_3)) & (((arr_1 [i_2]) ? (arr_3 [i_3] [i_3]) : (arr_4 [i_0] [6] [i_0]))))))));
                        arr_16 [i_0] [2] [i_0] [2] [i_3] &= ((((((134217727 ? 5 : 5308690101897326016)))) ? (min((((arr_3 [i_3] [4]) ? (arr_1 [i_0]) : var_0)), (min(0, var_14)))) : var_11));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [3] [8] [5] = ((arr_8 [i_2 - 2] [i_2 - 1] [i_2 + 1]) ? (((min((arr_4 [i_0] [8] [8]), (arr_18 [6] [2] [3] [i_4]))))) : (((arr_8 [i_0] [i_2 + 1] [i_2 - 2]) ? (var_0 - var_5) : (arr_12 [i_2 - 1]))));
                        arr_20 [i_2 - 2] [i_2 - 2] [4] [7] = (min((arr_3 [8] [8]), (4294967278 | -179645333)));
                        var_21 = ((((((arr_4 [i_2 - 3] [i_0] [3]) % (var_11 || 32767)))) ? ((1586827455 ? 9077 : 2587826098)) : var_16));
                        arr_21 [i_0] [i_0] [i_2 - 1] [7] = 255;
                    }
                }
            }
        }
    }
    #pragma endscop
}
