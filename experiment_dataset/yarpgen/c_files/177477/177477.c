/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((~var_3) == ((max((!var_7), var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = ((arr_5 [4] [i_0] [i_0]) ? ((((((arr_3 [i_1]) ? 24764 : 8))))) : ((((min((arr_3 [i_1]), var_13))) ? (-54 + 53) : 169787493347821390)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [i_2] [i_1] [i_2] [i_2] = (max((arr_1 [i_0] [i_0]), ((max(((var_13 ? var_13 : var_4)), var_0)))));
                            var_20 = (min((max((((4775332824781953818 ? 22084 : 43452))), var_15)), (((31037 > (((var_5 ? var_9 : var_10))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = (((((3336053910813102498 ? var_9 : (arr_7 [i_0] [1] [i_0] [i_0])))) ? ((min(var_17, (arr_3 [i_1])))) : (arr_4 [i_1])));
                            arr_12 [i_2] [8] |= ((-31025 ? 177 : 9290113170853152772));
                            var_21 += ((!(((41830 ? 9156630902856398838 : 22083)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_5));
    #pragma endscop
}
