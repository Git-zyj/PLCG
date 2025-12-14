/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (var_1 & -92);
    var_11 = (((~1) ? var_1 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = ((((((max(-1590453888637448942, 0))) ? 1165670553388074548 : 18446744073709551615)) | (((~((0 ? 4294967295 : 0)))))));
                                var_13 = (((((max(-5372212562074299878, 1584837145))) ? (((4294967295 | (arr_4 [i_4])))) : (arr_5 [0] [13] [i_2 - 1] [i_2]))));
                                var_14 = (((((+(((arr_4 [i_4 + 2]) ? var_2 : (arr_11 [i_4 + 1] [i_4] [i_4] [i_4] [i_4])))))) ? (~1167124047) : var_3));
                            }
                        }
                    }
                }
                arr_12 [i_1 - 2] [i_1 + 2] [3] = (arr_11 [i_1] [4] [i_1 + 2] [i_1 - 2] [i_1]);
            }
        }
    }
    #pragma endscop
}
