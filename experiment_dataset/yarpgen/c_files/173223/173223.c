/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min((((3 ? var_5 : 7875))), -7676949501408360927));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (((((230 ? 4 : 1))) ? ((min(15, 62604))) : ((max(1, 6)))));
                    arr_7 [i_0] [i_0] [i_1] = ((-65221 ? 1 : 1828511396741317599));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_3] = ((!((!(min(1, 1))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [8] [i_3] = ((((((((65223 ? 1 : 1))) ? ((max(56, 238))) : 0))) ? ((5659536078834800886 ? 47477 : 8)) : -6));
                    }
                }
                var_18 = (((((1 ? 2942 : 55))) ? (~1) : ((0 ? 4294967295 : 7))));
            }
        }
    }
    var_19 = ((6480 ? var_13 : var_15));
    #pragma endscop
}
