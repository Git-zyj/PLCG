/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_13;
    var_19 &= ((((var_6 ? var_17 : ((252 ? 18446744073709551604 : var_2)))) != (min((~18446744073709551615), (((var_8 ? var_2 : var_13)))))));
    var_20 = (0 % 945351654);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1] [i_4] [i_3] [i_2] [i_0] [i_1] = (min(((min((max(var_14, (-2147483647 - 1))), (((arr_12 [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0]) >> (7086980862441466051 - 7086980862441466040)))))), ((861337470 ? (((arr_2 [i_0 - 2]) % (arr_6 [i_1] [11] [i_4]))) : ((((arr_12 [i_0] [i_0 - 2] [i_0] [i_0 + 3] [i_0] [i_0 - 1]) ? (arr_11 [i_0] [i_4] [i_3] [i_2 + 2] [i_1] [i_0]) : -426550751)))))));
                                var_21 &= (((((arr_7 [10] [i_2 - 2] [10]) < 0)) ? 1 : -4441718474164561607));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = ((((1 ? -1 : (((max(47241, (arr_1 [i_0 + 2] [i_0]))))))) % var_15));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [8] = (!26);
                            var_22 = (min(var_22, ((-var_3 > ((((((arr_16 [i_0] [i_0 + 1] [i_0]) ? var_10 : var_15))) ? ((min((arr_20 [i_6]), var_3))) : (max(var_5, 824362418))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = (((((18288 ? 21240 : (arr_24 [i_0] [i_0 + 1] [i_9] [i_9])))) ? (((max((arr_24 [i_0] [i_0 - 2] [i_0 - 2] [0]), (arr_24 [i_0 + 2] [i_0 - 2] [i_1] [i_9]))))) : (arr_24 [i_0 - 3] [i_0 - 2] [i_9] [i_9])));
                                var_23 = 246;
                                arr_31 [i_0] = ((((3751633845 - (arr_29 [i_0 - 2] [i_1] [i_8] [i_9])))));
                            }
                        }
                    }
                }
                arr_32 [i_0] [i_1] = 9223372036854775807;
            }
        }
    }
    #pragma endscop
}
