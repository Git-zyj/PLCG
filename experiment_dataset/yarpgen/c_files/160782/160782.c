/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((((((min(-837190944, -1235891904)) + 2147483647)) >> ((((-(arr_5 [i_2]))) + 92337682)))) + ((var_10 ? (arr_1 [i_2]) : ((-(arr_5 [6])))))));
                    arr_9 [i_2] [i_0] = ((max((arr_6 [i_0 - 1] [7] [i_0 + 1] [i_0 + 1]), (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))) / (max(1952619008, ((108 ? var_10 : -1464140519)))));
                }
            }
        }
        arr_10 [i_0] = ((!((min(((~(arr_4 [i_0] [i_0]))), ((var_9 ? 100 : var_13)))))));
        arr_11 [i_0 + 1] = 1075592410;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_23 [17] [i_3] [i_3] [i_3] = 97;
                        arr_24 [i_3] [i_4] = (max((min((arr_16 [i_3] [i_3] [i_3]), (-221529276 >= 1464140512))), ((((~(arr_15 [i_3] [i_3]))) + var_9))));
                    }
                }
            }
        }
        arr_25 [8] = 580198673;
        arr_26 [6] &= -1;
    }
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        arr_29 [i_7] = ((!(!var_14)));
        arr_30 [i_7] = (-678979959 ? 1464140521 : 1235891903);
        arr_31 [i_7] = ((((var_8 & (((arr_21 [i_7]) ? 119 : -1508508959)))) % ((1090021365 >> ((((arr_17 [15] [i_7]) > -837190944)))))));
        arr_32 [16] [i_7 + 2] &= (+((-43 ? (-1956637113 - 18) : (min((arr_17 [9] [7]), -761704891)))));
        arr_33 [12] [2] = arr_21 [i_7];
    }
    var_15 = (-68 ? ((~(~-10))) : ((-(min(var_5, var_7)))));
    #pragma endscop
}
