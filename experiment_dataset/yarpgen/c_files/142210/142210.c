/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_14 = ((+((((119 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))) * ((max(0, (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((~(((arr_2 [i_0 - 1]) >> ((((arr_1 [i_0] [i_0]) && (arr_0 [i_0]))))))));
        var_15 = (max((((arr_0 [i_0 + 2]) ? (arr_1 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0 - 2]))), ((max((arr_1 [i_0 + 3] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 + 3]))))));
        var_16 = ((((((arr_1 [i_0] [i_0]) && (arr_1 [i_0 + 2] [i_0]))))) | ((6833805990961508544 % (-8885477453222861957 | 105))));
        arr_4 [i_0 + 2] = ((148 ? ((max((arr_1 [i_0 + 1] [i_0 + 3]), (arr_0 [i_0 + 1])))) : ((0 % (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_17 += ((~((((arr_5 [i_1] [i_1 + 3]) && ((((arr_6 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))))))));
        var_18 |= (max(((((arr_8 [i_1 + 2]) % (max(13568, -1844109214))))), (((arr_1 [i_1 + 2] [i_1 + 2]) ? 0 : -676170198))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_19 = (((((arr_7 [i_2 + 1]) ? (arr_7 [i_2 + 1]) : 18446744073709551604))) ? (((arr_7 [i_2 + 1]) >> (((arr_7 [i_2 + 1]) - 3882194143483878014)))) : (max((arr_7 [i_2 - 1]), (arr_7 [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((-(arr_11 [i_2 + 1]))) - (((arr_9 [i_4 + 1] [i_2 + 1]) ? (arr_9 [i_4 - 3] [i_2 + 1]) : 65535)))))));
                                arr_24 [i_2] [i_2] [i_4] [i_2] [i_2] = (((((arr_15 [i_4 - 2] [i_6] [i_4 - 2]) ? (arr_15 [i_4 - 2] [i_4] [i_4]) : 1)) | ((max(16352, (arr_15 [i_4 - 2] [i_4 - 3] [i_5]))))));
                                var_21 = (max(var_21, (((((max((arr_21 [i_4 - 2] [i_2 + 2]), (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) * ((1 % ((((arr_21 [i_2] [i_2]) && 1))))))))));
                                var_22 = ((-5897143804680644287 | (arr_19 [i_2] [i_3])));
                                var_23 = (max(var_23, ((max((((max(22697, (arr_13 [i_6]))) % ((max((arr_20 [i_2 + 1] [i_2 + 1] [i_4 + 3] [i_5]), (arr_23 [i_2] [i_2] [i_2] [16] [i_2 + 2])))))), (max(((1 ? (arr_0 [14]) : (arr_21 [i_2] [i_3]))), ((max(193, 1))))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_30 [i_2] [3] [i_4] [i_7] [i_8] = ((((((arr_16 [i_2 - 1]) ? (arr_16 [i_2 + 1]) : (arr_16 [i_2 + 2])))) ? (((max((arr_18 [i_2 + 2] [i_4 + 2] [i_7] [i_7] [i_7 + 3] [i_8 - 2]), (arr_18 [i_2 + 2] [i_4 + 2] [i_7] [i_7] [i_7 + 3] [i_8 + 2]))))) : (max((arr_16 [i_2 - 1]), (arr_23 [i_2 + 2] [i_4 + 1] [i_4 + 1] [i_7 + 1] [i_7 - 3])))));
                                var_24 = (max((((-(arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 2])))), (arr_0 [i_7 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
