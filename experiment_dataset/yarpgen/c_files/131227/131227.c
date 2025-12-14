/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(((-(max(var_5, 9)))), (max(34, 65)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 -= (((min(((max(15, 1))), (((arr_3 [i_0]) ? 65532 : (arr_0 [i_0])))))) && ((max((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (max(18446744073709551615, 3874145202))))));
        var_12 ^= ((((min((((!(arr_2 [i_0])))), (max(20, 1))))) ? ((((max((arr_2 [i_0]), 2147483647))))) : ((-(max(1, 0))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_0] [i_1] [i_0] = (max((max((arr_12 [i_1] [i_1] [i_1] [i_1]), ((max(65532, -3))))), ((max((max(-1807058309, (arr_12 [i_1] [i_1] [i_1] [i_1]))), (max((arr_11 [i_0] [i_1] [i_2] [i_3]), 0)))))));
                        var_13 = ((~(~118)));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((max((48679 | 20), (max(0, 18446744073709551615)))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_14 = (min(var_14, (((~(arr_0 [i_2]))))));
                            var_15 = (((((-105269615 ? ((65535 ? (arr_1 [8] [i_4]) : (arr_4 [i_0] [i_0]))) : -119))) ? (max((arr_11 [i_1] [i_2] [15] [i_4]), (max(16686527439370856078, (arr_1 [i_0] [5]))))) : (((((max(12, 15))) ? ((max((arr_16 [i_4] [3] [i_2 - 3] [3] [3]), 118))) : (~133955584))))));
                            var_16 = (min((((max(65508, (arr_3 [8]))))), (min(((2125451034 ? (arr_11 [i_1] [i_1] [i_1] [i_4]) : (arr_7 [i_1]))), ((max((arr_1 [i_2 + 1] [i_1]), -118)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
