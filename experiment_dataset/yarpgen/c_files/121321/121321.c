/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = 37;
                    arr_11 [i_1] = (max((arr_9 [i_0] [i_1]), (((113591615800566388 >= -32608) | (arr_5 [i_0])))));
                    arr_12 [i_2] [i_1] [i_0] = (max(((max(((min(32608, -61))), var_3))), (((arr_1 [i_2 + 3]) ? (arr_0 [i_0]) : (arr_1 [i_1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                {
                    arr_21 [i_3] = ((var_1 ? (((((-2471962716583541111 + (arr_16 [i_3] [i_3] [i_3])))) ? var_3 : var_7)) : (((((max(15221, 32607)))) | (((arr_4 [i_3] [i_4] [i_3]) + (arr_17 [i_3] [i_4] [i_4])))))));
                    arr_22 [i_3] [i_3] [i_4] [i_5 - 1] = ((2027990621 ? 23565 : 798609140));
                    arr_23 [8] = ((((((~(arr_13 [i_5])))) ? (arr_19 [6] [6]) : (arr_15 [8]))) ^ ((((arr_9 [i_3 - 2] [i_3 + 3]) ? (((arr_17 [i_3] [i_4] [i_3]) >> (-75103954989590323 + 75103954989590338))) : (~var_10)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                arr_29 [i_6] [i_6] [i_6] = (arr_28 [i_7] [19]);
                arr_30 [i_6] [i_6] [i_7] = var_17;
                arr_31 [i_6] [i_6] [i_6] = (6280322929463151106 >= 56694);
                arr_32 [i_6] = ((((arr_28 [i_6] [i_7]) & (arr_26 [i_7]))));
                arr_33 [i_6] [7] |= (arr_28 [i_6] [i_7]);
            }
        }
    }
    #pragma endscop
}
