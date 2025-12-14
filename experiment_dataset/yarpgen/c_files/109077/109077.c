/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(min(((max(1, 1))), 17622636448856960361))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [1] [i_1] [1] [i_2] = (min((((arr_3 [i_0]) ? ((var_7 + (arr_6 [i_1] [i_1] [i_1]))) : (1 / 3))), (min((arr_4 [2] [2] [2]), ((1 ? 127 : 1))))));
                    arr_11 [i_0 - 1] [10] [i_2] = (((((arr_9 [i_0] [12] [i_0 - 2]) | (max(2147483647, 26))))) || (((57147 ? 1 : 37282))));
                    var_11 = 28242;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [4] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = (((arr_13 [i_2] [i_2] [i_4 + 4] [i_2] [i_2]) | 28253));
                                var_12 = (((((((47 ? 11258917357877682797 : (arr_14 [i_0 - 3] [14] [i_0] [i_0] [i_0] [i_0 - 2]))) != 1))) | ((((arr_1 [i_4 + 1]) != (arr_1 [i_4 - 1]))))));
                                arr_17 [i_0] [4] [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0] = 1;
                                var_13 = (min(((((((arr_1 [i_0]) ? (arr_6 [i_4] [i_3] [i_1]) : 1))) ? (~-5) : (arr_1 [i_0 - 2]))), 1));
                                var_14 = (((((((min(1, 1))) * (!17664)))) && -4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = var_3;
    #pragma endscop
}
