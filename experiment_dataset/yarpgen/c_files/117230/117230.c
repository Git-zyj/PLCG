/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((min(1422497009197384450, 1))), var_11));
    var_20 = (12874 | var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_21 = (((arr_0 [i_0 + 2]) ? ((-30377 ? ((max(1, 1040275136))) : ((-5824526548859158566 ^ (arr_7 [i_3] [i_2] [i_1 - 2] [i_0]))))) : (!-33)));
                        arr_11 [i_0] [i_1] [i_1] [i_0] = ((max(1040275136, var_0)));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((((max((arr_4 [i_1] [i_3]), (min(20695, 12874))))) ? -1055839999 : ((max(var_7, 620175853694415213)))));
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((~(32235 <= 3580367040)));
                }
            }
        }
    }
    #pragma endscop
}
