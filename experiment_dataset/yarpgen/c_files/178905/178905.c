/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 3] [i_1] [i_1] = (-5655 - 171);
                            arr_10 [i_0] [i_0] [11] [i_1] [i_0] [i_3] = (~45537);
                        }
                    }
                }
                arr_11 [i_1] = (max(((min((arr_2 [i_0] [i_0 - 3] [2]), (arr_2 [i_0] [i_0 - 1] [9])))), var_2));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_4] [i_5] = ((~(((arr_13 [i_5]) ? (arr_13 [i_5]) : 108))));
                var_21 = (max(var_21, (((((max((~19992), (max(85, 1507871983))))) ? (((~(arr_13 [i_5])))) : (max(((min(52, 2094427929))), (arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 1]))))))));
            }
        }
    }
    var_22 += ((var_15 && (((max(var_6, 53604))))));
    #pragma endscop
}
