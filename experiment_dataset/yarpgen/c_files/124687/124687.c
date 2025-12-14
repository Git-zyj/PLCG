/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((max((40917 <= var_17), (max(var_7, var_7))))) ? var_2 : (max(var_15, var_17))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = ((((((40917 ? (arr_0 [i_2]) : (arr_0 [i_2]))) <= ((0 ? var_12 : 256)))) ? ((~(arr_2 [i_0] [i_2] [6]))) : (((arr_5 [i_0] [i_0] [i_1]) ? ((min((arr_4 [i_3] [9]), 1))) : (arr_6 [i_0] [1] [18])))));
                            var_21 = (min(var_21, (arr_4 [i_0] [i_0])));
                            var_22 = ((!((max(((((arr_7 [i_3] [4] [i_1] [14]) <= -20465))), ((-(arr_8 [11] [i_1] [i_2] [11]))))))));
                            arr_9 [i_0 - 4] [i_1] [i_2] [i_1] = (arr_0 [i_0 - 4]);
                        }
                    }
                }
                var_23 ^= (max(((min((arr_4 [i_0] [i_1 - 1]), -20445))), ((((min(20464, 14886800))) ? (min(0, (arr_1 [i_0]))) : ((-(arr_2 [i_0] [i_0] [i_1])))))));
                var_24 -= (((max((65535 <= 1), (var_2 ^ 0))) == (~55)));
                var_25 = ((((max((arr_0 [i_0 + 1]), 65530))) ? (arr_4 [i_0 + 1] [i_1 + 2]) : (arr_0 [i_0 + 1])));
                arr_10 [i_0] [i_0] [i_1] = ((-(arr_0 [i_0 - 2])));
            }
        }
    }
    var_26 ^= 18446744073709551615;
    #pragma endscop
}
