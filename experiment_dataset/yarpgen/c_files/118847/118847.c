/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2810;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [0] = 32763;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [7] [i_1] [i_3] = var_7;
                                var_14 = ((max((arr_12 [i_0] [i_4 + 2] [i_2] [i_3] [i_1] [i_2]), (arr_12 [i_0] [i_4 + 3] [i_2] [i_4] [i_1] [i_2]))));
                                var_15 += ((-((-47 ? 9 : 104))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (((4294967293 ? 11567760086115293989 : 15583230794574601668)))));
    var_17 = (min(var_17, (((var_4 ? 9 : -47)))));
    #pragma endscop
}
