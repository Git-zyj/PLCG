/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((24965 ? var_9 : var_8)) / var_0)), (((-(var_6 < var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = (max(((-var_12 | (var_5 > 1))), var_4));
                            var_14 = (((max((((var_3 ? var_11 : (arr_1 [i_0])))), (max(var_4, 9223372036854775807)))) == (((-255983330 ? var_11 : -255983331)))));
                            var_15 *= ((((((-120 == 13069211982794211019) - (var_10 | 255983330)))) ? var_9 : ((((max((arr_7 [i_0] [i_1] [i_2]), 5377532090915340596))) ? (max(-7917598497645249128, (arr_6 [i_0] [i_1] [i_2] [i_3]))) : var_3))));
                        }
                    }
                }
                var_16 = max((((arr_8 [i_0 + 1] [i_0] [i_0 + 1]) ? var_0 : (arr_8 [i_1 - 1] [i_0] [i_0 - 1]))), (~-1096309548));
            }
        }
    }
    #pragma endscop
}
