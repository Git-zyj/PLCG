/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min((((var_1 - 12912781293968905819) * -624184279)), (arr_1 [2])));
                                var_17 += (((!((min((arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]), 30449))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [7] = (((arr_6 [i_0] [i_0] [i_0]) | (max(((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 28349))), (~624184279)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_18 = (((~-501940148) ? ((-1147767231 ? 26195 : (min(var_12, -8228627275229401372)))) : (((((~(arr_3 [i_0] [i_0])))) ? -424723582 : ((1211011583 ? var_14 : (arr_12 [i_6] [10] [i_1] [i_6] [i_6])))))));
                            arr_20 [i_6] [i_6] [i_6] [13] = (-(arr_19 [i_6] [i_6] [i_6 - 1] [i_6 - 2] [i_0] [1]));
                            arr_21 [i_1] [7] [i_6] [20] [i_1] = (+-12912781293968905800);
                            var_19 = 624184279;
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((min(var_9, (min(44, 16111774199137365738))))) ? (max(28349, ((1871660813 ? 2147483647 : 1959144071)))) : var_3));
    #pragma endscop
}
