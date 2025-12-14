/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_10, (((((-1577785637 ? var_8 : 989900246))) ? ((min(var_15, var_0))) : (min(26761, 1029138983747969000))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (arr_7 [14] [i_0]);

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] = (min((((min(1, var_17)))), (min((arr_6 [i_1 - 1] [i_1 - 1]), ((var_8 ? var_1 : (arr_0 [i_0])))))));
                        var_20 = (!254220429695152463);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_21 = ((((-var_16 ? (((min((arr_5 [i_0] [i_0] [i_2]), (arr_7 [16] [i_0]))))) : var_1)) | (arr_6 [i_0] [13])));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            var_22 = (((arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ^ (arr_1 [i_0])));
                            var_23 += var_2;
                        }
                    }
                    var_24 = -5164784902771667651;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_25 = ((min(var_17, 43)));
                                arr_23 [3] [3] [3] [3] [i_0] = (arr_21 [i_2] [i_1 - 1] [i_2] [i_6] [i_0]);
                                var_26 *= ((!(((-(arr_8 [1] [i_1] [1] [i_1 + 1]))))));
                            }
                        }
                    }
                    arr_24 [5] [i_0] = ((((((!(arr_16 [12] [1] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0] [i_2]))))) & var_1));
                }
            }
        }
    }
    #pragma endscop
}
