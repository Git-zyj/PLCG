/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 42209));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, (((max(((max(var_9, (arr_5 [i_4]))), (((arr_8 [i_3] [i_3] [i_0] [i_0]) ? var_8 : 2147483630)))))))));
                                arr_11 [i_1] [i_1] [8] [i_1] [i_1] [i_1] [i_1] = (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
                                var_12 = ((42209 ? (arr_0 [i_4] [i_3]) : ((min(-8070450532247928832, ((max((arr_1 [i_0]), var_4))))))));
                                var_13 = ((((((arr_3 [i_0 + 1] [i_0 + 1]) ? var_8 : 13399))) ? ((max(((~(arr_10 [i_0] [i_1] [i_0] [i_3] [i_4]))), (((arr_8 [i_4] [1] [i_1] [i_0]) ? (arr_8 [i_0] [i_1] [6] [i_3]) : var_4))))) : ((((0 ? var_9 : (arr_4 [i_0] [i_0] [i_2] [i_2]))) * ((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_1] = ((((((arr_5 [i_0 + 1]) * (arr_5 [i_0 + 1])))) - var_7));
                        var_14 = ((((max(126, 220))) ? ((var_1 - (((arr_7 [i_0] [i_0 + 3] [1]) - var_9)))) : ((((arr_3 [i_0 - 2] [i_0 + 1]) < (arr_3 [i_0 + 2] [i_5]))))));
                        var_15 ^= ((((min(6851371321086708171, 11042050112810525990))) ? (((0 ^ 134217727) ? 64 : 134217727)) : (-13401 ^ 40665)));
                        var_16 *= ((((!(arr_14 [2]))) ? ((min((arr_14 [6]), (arr_14 [8])))) : (min(var_1, (arr_14 [6])))));
                    }
                    var_17 |= (min(136, (max(6271903867615052127, 12174840206094499479))));
                    var_18 += var_7;
                    var_19 |= (arr_12 [12] [i_1] [12]);
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}
