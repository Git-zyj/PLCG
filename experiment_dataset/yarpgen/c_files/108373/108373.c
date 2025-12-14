/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 |= (min(1, (max(20596, 42156))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_2 [i_0 - 2]) & (arr_9 [i_0 + 1] [i_0 + 1])))) ? (arr_2 [i_0 + 1]) : ((-95 ? 0 : (arr_2 [i_0 - 3])))));
                                arr_11 [i_2] [i_2] [i_2] [1] = ((((((arr_9 [15] [1]) ? ((var_1 ? 20619 : 42130)) : ((min(var_2, 1)))))) ? ((min((max(var_4, (arr_8 [i_0] [0]))), 58036))) : (((var_1 == 6909660735342337812) ? var_3 : (((arr_1 [i_1]) ? (arr_9 [i_0] [2]) : (arr_2 [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((max((((var_12 ? var_1 : var_9))), var_8)), 5932));
    #pragma endscop
}
