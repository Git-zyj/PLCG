/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_4 ? (~var_13) : (max(var_9, var_13))))) ? ((((max(var_10, var_11))) & (max(var_6, var_17)))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [1] [i_2] [17] [i_3] = (min((((0 ? 17543 : -1970777238))), ((((var_12 * (arr_3 [i_3]))) + (arr_5 [i_0] [i_1])))));
                            var_19 = ((-(arr_0 [10] [i_2])));
                        }
                    }
                }
                var_20 = (min((1970777233 - 128), ((+((min((arr_8 [i_0]), (arr_11 [11]))))))));
            }
        }
    }
    #pragma endscop
}
