/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = ((!(((((min((arr_0 [i_1]), (arr_2 [9] [i_1])))) ? ((4167953174563403404 ? (arr_0 [i_1]) : 216)) : 3788551784)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] = (max((((((max(681803606621891036, 198))) && (~223)))), (((!-3299360401271516194) ? 780466328 : (arr_4 [i_2])))));
                            arr_10 [i_2] [i_2] [i_2] [i_2] = (((((((min((arr_4 [i_2]), 6071238783153766615))) ? (((125 ? (arr_2 [i_1] [i_1]) : 3982019395))) : 18446744073709551587))) && (((((max(3955627527, (arr_7 [i_0] [i_1] [i_1] [i_1] [i_2] [8])))) ? (min((arr_5 [i_2] [i_2] [i_2] [i_2]), 1269786344054367598)) : ((((var_4 || (arr_5 [i_2] [i_1] [i_2] [i_0]))))))))));
                            arr_11 [i_2] = ((33554368 ? 0 : 2639089734));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_16 [i_0] [i_2] [i_3] = (min(((~(arr_2 [i_0] [i_0]))), (max(-2241045732768724947, 262961980871518300))));
                                arr_17 [1] [i_2] [i_2] = 182;
                                arr_18 [i_2] = (min(((var_3 ? -3299360401271516226 : (max((arr_6 [i_2] [9] [i_2]), var_6)))), ((min(((-(arr_14 [9] [i_2] [i_3] [i_2] [i_2] [1]))), (min(30548, (arr_1 [i_4]))))))));
                                arr_19 [i_2] [i_2] [i_3] = (~-25893);
                                arr_20 [i_2] [4] [i_0] [i_3] [i_4] [i_2] = (((((-28060 | (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (max((((arr_15 [i_0] [i_1] [i_1] [i_2] [5] [11]) ? 8742630693353773328 : -6573)), -27474)) : ((min((28921 & 4018867779), -1844)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 &= ((((!((max(2927237452, 8677164526145625080))))) ? ((max(((var_3 ? 4261412920 : var_1)), (max(var_3, 46))))) : (101 | var_5)));
    #pragma endscop
}
