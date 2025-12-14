/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2] = (max((min(var_2, (arr_6 [i_1] [i_1] [i_1]))), (max(((4480276034705648140 ? var_1 : var_12)), ((var_12 ? 1827 : var_9))))));
                                var_13 = arr_8 [0] [0] [i_2] [6];
                            }
                        }
                    }
                }
                var_14 *= ((310529193034028073 ? ((((var_12 + 2147483647) >> (-42 + 56)))) : (min(((-1827 ? 143241259 : -1842)), (arr_3 [i_0] [i_1 - 1])))));
                var_15 ^= (max(((((min((arr_2 [i_0] [i_1]), 1827))) ? ((var_4 + (arr_4 [20] [i_1] [i_1]))) : (((min(1827, -8374)))))), (((-1834 ? 1 : 3954179791)))));
                var_16 = (((((min((arr_5 [i_0] [i_1] [i_0] [i_1]), (arr_3 [i_0] [19]))))) ? 1842 : ((var_9 << (-13199 - 18446744073709538403)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    var_17 = ((((min((arr_4 [i_7] [i_6] [i_7 - 2]), ((var_1 ? (arr_4 [i_7] [i_7] [18]) : 13))))) || ((((((-1834 ? 8910240440678069543 : (arr_17 [i_7])))) ? ((var_8 ? var_12 : 65535)) : -16658)))));
                    arr_20 [i_5] [4] [i_7] [i_7] = var_1;
                }
            }
        }
    }
    var_18 = (((((max(-17, 32767)))) ? 24 : var_3));
    #pragma endscop
}
