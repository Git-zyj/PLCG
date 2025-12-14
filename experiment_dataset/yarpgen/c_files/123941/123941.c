/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((10268327714239958984 >> (var_0 - 1456704118))))) ? (var_4 <= var_9) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = var_3;
                            var_16 = (~250857109);
                            var_17 = ((+(((arr_3 [i_1] [i_1] [i_2 - 1]) ^ 10268327714239958988))));
                        }
                    }
                }
                var_18 = (((-(-4 <= 8500787827329176973))));
                arr_10 [i_1] = ((-12555 | (((16172122633759505485 >= (arr_1 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_16 [10] [i_5] [i_4] = (-((((((arr_14 [i_5] [i_4 + 2] [i_4]) != (arr_13 [i_4])))) * (!-12555))));
                var_19 = (min((arr_11 [i_4] [14]), (arr_15 [i_4])));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_14 [19] [i_7] [i_8])));
                                arr_25 [i_4] [11] [7] = (((!(!var_3))));
                            }
                        }
                    }
                }
                var_21 -= (max((((arr_15 [i_4 + 2]) / (min((arr_13 [10]), (arr_19 [i_5]))))), (((!(arr_12 [23]))))));
            }
        }
    }
    #pragma endscop
}
