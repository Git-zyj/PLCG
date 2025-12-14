/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [i_0] [i_0 - 3] = (min(((((~0) ? var_10 : (arr_3 [i_0])))), (((max((arr_4 [i_1] [i_0] [i_0]), (arr_3 [i_0]))) ^ -7757901538648087801))));
                var_20 = (min(1, (min(var_18, var_3))));
            }
        }
    }
    var_21 = max((((var_5 <= (((var_13 ? var_17 : var_15)))))), (min(var_16, (~var_14))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {
                    var_22 = ((-(min(var_14, (arr_8 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = (((((-(arr_11 [i_2 + 1] [i_2] [i_2] [i_2 + 1])))) & (max(((var_1 ? var_13 : var_11)), var_8))));
                                arr_19 [i_5] [i_2] [i_4] = (((((-(min(2147483647, (arr_17 [i_2] [i_5 - 1] [i_4] [i_2] [i_2])))))) ? (-1058693292 != 1937522359) : (((!108) & 111))));
                                arr_20 [i_2 + 1] [12] [i_3] [i_2] [12] [9] [i_6 + 1] = ((((((var_4 || var_15) ? ((var_4 ? (arr_13 [i_5] [i_2] [i_4 - 4] [i_5 + 1] [i_6 + 1] [i_2]) : -114)) : (!var_10)))) ? ((((((64672 ? -2435821020051187805 : 463874717))) || ((min(63, (arr_7 [i_2]))))))) : ((((!114) || ((((arr_12 [i_2] [i_5] [i_4] [i_2]) ? var_13 : 22709))))))));
                                arr_21 [i_2] [i_3 + 1] [i_4] [i_2] = (i_2 % 2 == 0) ? (((min((((arr_7 [i_2]) << (((arr_6 [i_4] [i_2]) - 63)))), ((min((arr_10 [i_2] [i_2]), (arr_9 [i_2 + 1] [i_2] [i_4 - 3])))))) * ((-(arr_6 [i_2] [i_2]))))) : (((min((((arr_7 [i_2]) << (((((arr_6 [i_4] [i_2]) - 63)) - 13)))), ((min((arr_10 [i_2] [i_2]), (arr_9 [i_2 + 1] [i_2] [i_4 - 3])))))) * ((-(arr_6 [i_2] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
