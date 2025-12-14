/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(1149368456 & 1000384309)));
    var_12 *= (((var_10 + 2147483647) << (((max((min(12438287015831225941, var_7)), var_1)) - 12438287015831225941))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = (max(var_13, ((((-328136471 < 6008457057878325674) ? (arr_3 [i_0] [i_0]) : var_0)))));
        arr_4 [i_0 - 1] = -202467425;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = (min((min(58, 607450398087031812)), (((arr_0 [i_1]) ? (arr_0 [6]) : (max((arr_3 [i_1] [i_1]), 607450398087031812))))));
        arr_9 [i_1] [i_1] = (!((min((((4629736547924374321 ? (arr_6 [i_1]) : var_1))), ((var_6 >> (3298814880 - 3298814880)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_21 [i_2] [i_4] [i_5] = (((((-(((arr_10 [i_1] [7] [i_1]) | var_10))))) ? (min(((var_4 + (arr_11 [i_5 + 2]))), ((((arr_2 [i_5 - 1]) > (arr_14 [i_2])))))) : (((!(arr_7 [0] [0]))))));
                                var_14 = 16770056020079065458;
                            }
                        }
                    }
                    arr_22 [i_1] [i_2] [i_3] |= ((var_9 ? -545280596 : ((((max((arr_12 [i_1]), var_10)) < ((-(arr_18 [i_1]))))))));
                }
            }
        }
    }
    var_15 = ((((250 ? (var_1 - var_7) : ((var_5 ? 144115188075331584 : 6008457057878325674)))) >> (var_1 - 47057)));
    #pragma endscop
}
