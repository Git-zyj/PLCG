/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 + 2147483647) << (((((+-4216666455918753405) + 4216666455918753407)) - 2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min((((var_4 / (arr_3 [i_0] [i_1] [i_0])))), (min((min((arr_4 [i_0] [i_1] [i_0]), -4216666455918753396)), ((((arr_0 [i_0]) ? -125 : (arr_6 [15] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (((min((var_4 != 1), ((~(arr_3 [i_0] [i_2] [i_0]))))) != (arr_5 [i_0] [i_2] [i_0])));
                                var_13 = min((((min(9, (arr_4 [i_0] [i_2] [i_0]))))), ((((min(var_5, var_3))) ? 65535 : 9)));
                                var_14 = (((var_1 || 9223372036854775807) >= (arr_3 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                    var_15 = (min(var_15, (((~(!1))))));
                }
            }
        }
    }
    #pragma endscop
}
