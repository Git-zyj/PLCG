/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? (~var_9) : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = 0;
                var_17 = (((((83 ? 7 : 0))) << (((!(1 >= 1))))));
                var_18 = (~0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_19 = 2;
                            var_20 = ((119 ? 0 : 1));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_21 = (max(var_21, (arr_15 [i_5])));
                var_22 = ((!(((1634631942 ? 7 : 1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_23 *= ((-(((arr_14 [i_7 + 1] [6] [i_7 + 1]) ? (arr_17 [0] [2] [0]) : (arr_17 [6] [6] [6])))));
                    arr_24 [i_7] [i_7] [i_7] = (arr_17 [6] [1] [i_8]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_24 = ((((~(((!(arr_25 [i_6] [i_6])))))) & (!11078594779699247985)));
                                var_25 = ((-11261 ? ((-((11078594779699247985 ? 3 : 125)))) : (arr_15 [i_6])));
                                var_26 = (~1);
                                arr_31 [i_10] [i_9 + 1] [i_9] [i_8] [i_9] [i_7] [i_6] = (((arr_29 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 - 1]) ? ((((arr_29 [0] [i_9 + 1] [i_9] [i_9] [i_9 - 1]) && (arr_29 [i_9] [i_9 - 2] [1] [i_9] [i_9 - 2])))) : (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
