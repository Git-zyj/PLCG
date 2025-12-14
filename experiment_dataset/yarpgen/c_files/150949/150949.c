/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 ^= ((!((((721272254180873230 / 4190348581) * var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [16] [16] [8] [4] [i_0] [i_0] &= 205;
                            arr_13 [i_0] = ((((~(arr_3 [17] [17] [17]))) >= (min((arr_7 [19] [19] [12] [i_3]), ((var_11 | (arr_11 [i_0] [i_2] [i_2] [3])))))));
                            var_13 += (max((arr_10 [i_0 - 4] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]), (((arr_10 [7] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) ? (arr_10 [i_2] [i_2] [i_0 + 2] [i_0] [i_0] [12]) : (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])))));
                            arr_14 [i_0] [1] [i_0] [i_3] = ((~(min((((arr_2 [i_0] [i_2]) | var_4)), ((169 ? (arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1]) : 20417))))));
                            var_14 = (min(var_14, ((((32755 ? 62013 : (51 == 18)))))));
                        }
                    }
                }
                arr_15 [i_0] = ((+((((arr_3 [i_0] [i_0] [i_0]) && ((min((arr_7 [6] [i_1] [i_1] [i_0]), (arr_4 [i_0])))))))));
                arr_16 [i_1] [i_0] = (min(var_4, (arr_7 [i_0] [i_0] [i_0] [i_1])));
            }
        }
    }
    var_15 = 65517;
    #pragma endscop
}
