/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = 9223372036854775807;
                                arr_12 [i_1] [i_1] [i_1] [i_3 + 1] = (((arr_10 [i_0]) + 1));
                            }
                        }
                    }
                    var_19 = 0;
                    arr_13 [i_0] [i_0] [i_1] = (~717754915609111406);
                    arr_14 [i_1] = -1;
                }
            }
        }
    }
    var_20 = ((((1 ? 1 : 1))));
    #pragma endscop
}
