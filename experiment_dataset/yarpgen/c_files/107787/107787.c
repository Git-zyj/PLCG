/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((min((((arr_1 [i_0]) ? var_18 : 4294967282)), 4294967283))) ^ ((((max(var_4, 4294967257))) * var_11))));
                arr_7 [i_1] [i_1] [i_0] = ((-(((((14876635322731213824 ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0])))) ? (arr_5 [i_0]) : (arr_1 [i_0])))));
                var_20 = (((((3570108750978337792 ? 2191533795 : ((max((arr_0 [6] [i_1]), 65534)))))) ? ((((((var_18 / (arr_2 [i_0])))) || ((max(var_5, var_6)))))) : (min((arr_2 [19]), ((4294967282 ? (arr_5 [i_1]) : var_8))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = (min(((-((4294967284 ? 3570108750978337801 : var_11)))), ((((arr_4 [i_1]) ? (arr_10 [i_0] [i_1] [15] [i_3]) : var_13)))));

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_22 = min(((((arr_4 [i_0]) ? ((((var_6 && (arr_14 [i_0] [i_0] [1] [19]))))) : (arr_2 [i_3])))), (max((((arr_5 [11]) ? var_3 : 3570108750978337785)), 14)));
                                arr_17 [i_4] [i_3] [i_2] [i_1] [12] [i_0] [12] = ((!(((arr_12 [i_0] [i_0] [i_0] [13]) == 9428))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = (min((max((var_8 - var_12), (min((arr_10 [i_2] [i_2] [i_2] [i_2]), 1687865783)))), (((var_15 ? (arr_3 [i_2] [i_2]) : (arr_3 [i_0] [i_2]))))));
                                var_24 *= (arr_14 [i_0] [i_1] [i_2] [i_0]);
                                arr_21 [i_5] [1] [1] [i_1] [i_5] = ((-(max(14876635322731213824, (!4294967264)))));
                                var_25 = (max(var_25, ((((((arr_11 [i_5] [i_3] [i_3] [0] [i_1] [0]) <= (min(3105192418937063487, (arr_9 [i_0] [14]))))) ? ((((4294967281 != (min((arr_18 [i_0] [14] [i_0] [i_2] [i_2] [i_3] [i_3]), var_2)))))) : (arr_2 [i_0]))))));
                            }
                            arr_22 [6] [i_1] [i_1] [i_1] [i_1] = var_19;
                        }
                    }
                }
            }
        }
    }
    var_26 = ((3570108750978337781 ? (max(((max(var_18, var_19))), (min(14, var_13)))) : var_17));
    var_27 = (max(var_27, ((((1 || var_1) >> (!var_0))))));
    var_28 = ((var_17 * (max(var_5, var_3))));
    #pragma endscop
}
