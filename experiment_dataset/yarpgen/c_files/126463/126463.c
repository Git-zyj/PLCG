/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126463
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
                arr_6 [6] [5] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_18 = (min((max((arr_10 [6] [i_2 + 2] [i_2 + 1] [i_3 - 1]), (arr_10 [i_0] [i_2 + 2] [0] [i_3 + 1]))), (((arr_10 [i_0] [i_2 + 1] [i_2 + 2] [i_3 + 1]) ? (arr_10 [6] [i_2 + 2] [i_2 - 1] [i_3 + 2]) : (arr_10 [i_0] [i_2 - 1] [i_2 + 1] [i_3 - 1])))));
                            var_19 &= 8730133255209349088;
                            arr_14 [9] [i_1] [9] [i_2] [i_3 + 1] = (((arr_1 [i_1]) <= ((-(arr_11 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            {
                arr_20 [15] [0] = (((((arr_16 [i_5 - 1]) - 2147483634)) < ((+((max((arr_15 [12]), (arr_18 [i_4 + 1] [i_5 + 1]))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_20 = ((~(((!(arr_15 [i_4 + 2]))))));
                            var_21 = (min(var_21, (((~(((var_8 && (arr_26 [i_7] [i_6 + 2] [i_5 + 1] [i_4 - 1])))))))));
                            arr_27 [2] [i_5 + 2] [i_4] [i_5 + 2] &= (((((((((arr_18 [i_5 + 2] [i_7]) > (arr_18 [9] [1]))))) < (arr_17 [i_4 + 2]))) ? ((min((arr_22 [i_6 + 1] [i_6 + 4] [i_6 + 1] [i_6 + 1]), (((arr_19 [14] [i_7]) | 1))))) : (arr_17 [9])));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((0 ? var_14 : (~-1430720097))) >= (((var_3 ? (var_8 < var_13) : 698915322)))));
    #pragma endscop
}
