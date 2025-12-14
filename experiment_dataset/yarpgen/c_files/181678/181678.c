/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (max((max((min((arr_3 [i_0] [i_0]), 796179074)), 3086075335153569423)), (arr_0 [5])));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] = (arr_7 [i_2 + 1] [i_2 - 1] [i_2]);

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_11 [i_0]) ^ (arr_5 [i_0])));
                        arr_14 [2] [i_0] = ((3498788222 & (!3498788222)));
                        arr_15 [i_0] [i_0] [i_2 + 2] [i_3] [i_3] [2] = (((((796179074 ? (arr_7 [i_0] [i_1] [i_3]) : 2088198241))) & -7395816226701436442));
                    }
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    arr_20 [i_0] = (((arr_5 [i_4 - 1]) ? (arr_11 [i_0]) : 2147483647));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_4 + 1] [i_0] [i_0] [i_4] = (((arr_0 [i_4 + 2]) - 15360668738555982192));
                        arr_25 [i_0] [i_1] [i_0] [i_1] = 5668514980588104311;
                        arr_26 [i_0] [i_0] [i_0] [8] [i_0] = ((arr_5 [i_4 + 2]) ? var_2 : (arr_4 [i_0]));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = 15360668738555982204;
                    }
                    arr_28 [i_0] [i_1] [i_0] = -5668514980588104312;
                    arr_29 [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_4 + 2] [i_0] [i_1]) + var_9));
                    arr_30 [i_0] [i_0] [i_0] [i_4] = (((arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2]) ? (arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2]) : (arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 2])));
                }
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    arr_33 [i_0] [i_0] [i_0] [i_0] = 32;
                    var_19 ^= (arr_21 [i_6]);
                    var_20 -= (!2413982089978341610);
                    arr_34 [i_0] [i_0] [i_0] = (((3086075335153569424 != -2008142565) ? (-1818134038 ^ 75) : (((arr_16 [i_0] [i_6 - 2] [i_6 - 3]) + -6344387532910362764))));
                }
            }
        }
    }
    var_21 = var_2;
    var_22 = ((32 & (var_17 & 15360668738555982192)));
    var_23 -= (min(var_8, (min(var_17, (min(15360668738555982193, -231957065))))));
    #pragma endscop
}
