/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_6 * 6);
    var_13 = (max(864991755053332583, 65529));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(var_14, 8796093022207));
                var_15 = (max(var_15, (((max(-117, (arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((max((max((max(var_7, (arr_4 [i_1] [i_2] [i_1]))), ((max(6, -213309568))))), (17065 ^ var_2))))));
                            arr_11 [i_2] [16] [i_1] [i_2] = (arr_6 [i_1] [1]);
                            var_17 = (max(var_17, ((max(337, 864991755053332583)))));
                            var_18 = (min(var_18, 27347));
                        }
                    }
                }
                var_19 = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) - (max(var_0, var_10))))) ? (arr_5 [i_0] [i_0]) : (max(((16298462326139942372 ? 25913 : -7899672491235592966)), (((1 - (arr_3 [i_0] [i_1]))))))));
            }
        }
    }
    var_20 = (max((1 / 23401), (var_2 > -65198)));
    #pragma endscop
}
