/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 + (max(3443573086506518038, 241))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 *= (arr_3 [i_0] [i_1] [i_2]);
                            arr_10 [i_0] [i_1] [i_0] [i_0 - 1] = ((!((1914257092 || (!3443573086506518025)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_18 = (((((~(arr_5 [i_0 + 1])))) || (((arr_13 [i_5 - 4] [i_0 + 3]) != 112))));
                            arr_16 [i_1] [i_1] [i_4] = (arr_15 [i_0] [5] [i_0] [i_5]);
                            var_19 = (min((arr_3 [i_5] [i_0 + 3] [i_5 - 4]), (min((max((arr_14 [i_5 - 1] [i_4] [i_0] [i_0]), (arr_11 [i_5] [i_0 + 3] [i_5 + 1] [i_0 + 3]))), ((((arr_14 [i_0] [i_1] [i_4] [i_5]) & -617716212)))))));
                            arr_17 [i_1] [i_1] [i_1] [5] [i_1] = (((((((36 && (arr_3 [i_1] [i_1] [i_1])))) <= (((12 && (-9223372036854775807 - 1)))))) ? ((min((arr_6 [i_4]), (arr_6 [i_0 - 3])))) : (((((arr_11 [i_0] [i_1] [i_1] [i_5]) + 2147483647)) >> (((max(var_12, 1327667469)) - 1327667439))))));
                            var_20 = ((((((((max((arr_8 [i_0]), var_9))) && (arr_6 [i_5 - 1]))))) <= (((-19 / 4445043225176397162) * ((((arr_13 [i_0 - 4] [i_0]) ? (arr_4 [7]) : 0)))))));
                        }
                    }
                }
                arr_18 [i_1] = ((((((arr_14 [i_0] [7] [i_0] [6]) ? var_9 : (125 | 236)))) ? (arr_3 [i_0 - 4] [i_0 - 4] [i_0]) : (((max(2110715765, (arr_4 [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_7] [i_8] [i_8] = (arr_24 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]);
                    var_21 ^= 1665099144;
                    arr_27 [i_6] [i_7] [i_8 - 1] [i_7] = (arr_25 [i_6] [i_6] [i_6] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
