/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [i_2 + 2] = min(((var_3 * ((min((arr_2 [i_2] [i_1] [3]), var_0))))), (arr_2 [i_0] [i_0] [i_0]));
                    arr_7 [i_0] [8] [6] = ((!(((~((min(var_7, (arr_1 [6] [i_0])))))))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] [i_0] [20] [i_2] [i_3] = ((((((((var_8 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : var_17))) ? ((((arr_4 [i_0] [i_1] [i_2] [20]) || 33704))) : (arr_1 [i_0] [i_0])))) || ((max((arr_5 [i_1]), var_16)))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((((((max((arr_8 [i_0] [i_1 - 4] [i_1] [i_2] [i_1]), (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0] [i_1] [i_1]) : var_4))) ? ((~(~47262))) : ((54083 ? (arr_9 [17] [i_1 - 1] [i_2 + 3] [i_2 - 1]) : (~33702))));
                    }
                    arr_13 [i_1] [i_1] [i_2] = (max(var_19, (min(188606053, -14636))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_4] = (arr_1 [i_4] [i_4]);
                arr_19 [i_4] = 119;

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_4] = ((arr_2 [i_4] [15] [i_6]) + (arr_2 [i_4] [i_5] [i_6]));
                    arr_25 [2] = ((((var_9 / (arr_3 [i_6]))) / 27246));
                }
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    arr_29 [i_4] [i_7] [i_5] [i_7] = 91;
                    arr_30 [i_7] [i_5] [i_7] = (min((arr_20 [i_4] [i_5] [7] [i_7 - 1]), (((arr_20 [i_4] [i_4] [i_5] [i_7]) ? (arr_20 [i_4] [i_5] [i_7 - 3] [i_5]) : (arr_20 [i_4] [i_5] [i_7] [i_7])))));
                    arr_31 [i_4] [5] [i_7] = (arr_14 [i_7] [i_7 - 1]);
                }
                arr_32 [6] [i_5] = (arr_1 [i_4] [i_4]);
            }
        }
    }
    var_20 = 18;
    var_21 = var_12;
    var_22 = var_18;
    #pragma endscop
}
