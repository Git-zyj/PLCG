/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = (((max((min(var_0, var_5)), 4273653242611127310)) ^ var_1));
                    var_11 = ((0 ? (min(-930767837145789018, 0)) : (arr_6 [i_0] [8] [i_1])));
                    var_12 = (min(((((min((arr_4 [i_2] [0] [i_0]), (arr_0 [15]))) >= ((((!(arr_1 [14])))))))), (min(var_7, var_9))));
                    var_13 = (max(var_13, (arr_1 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = (((!(((387413566375644416 ? 930767837145789018 : var_2))))));
                                arr_15 [i_1] [i_2] [i_2] [i_3] [1] [1] = ((-(((arr_5 [i_1] [i_3 - 2] [i_4 - 1]) | (arr_5 [12] [i_3 + 2] [i_4 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 11402646221899585737;
    var_15 = ((930767837145789005 ? (((-930767837145789005 ? -77 : 2147483647))) : 2281395833012109935));
    #pragma endscop
}
