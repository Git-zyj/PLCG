/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((min(var_9, var_8)) << (((max(3791386263, var_2)) - 6400821595064275701)))), ((-1 ? -var_11 : 15990669525243482997))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((+(((arr_1 [i_0]) / (arr_1 [i_0])))));
        var_14 += (((((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? (arr_2 [i_0]) : (min(-7654542670082372587, 8))))) ? (max((~56439), (max(-9099, 2142248780941985892)))) : (((+(((arr_1 [i_0]) ? (arr_2 [i_0]) : 29467)))))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_15 *= (min((((-(arr_4 [i_1 + 2])))), ((max(2247159818925357177, (arr_2 [i_1]))))));
        var_16 *= (!3123208003);
        var_17 *= (((((arr_3 [i_1]) ? (arr_3 [i_1 - 2]) : (arr_0 [i_1 - 2]))) + (arr_5 [i_1 - 2])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_18 = (arr_8 [i_5]);
                        var_19 = max((((((7654542670082372586 ? -1 : (arr_16 [i_4] [i_3] [i_4] [i_5] [i_5] [i_4])))) ? (~6984) : (arr_7 [i_2]))), ((min((min((arr_11 [0] [i_4]), 0)), ((((arr_12 [i_2] [i_3]) < (arr_15 [1]))))))));
                    }
                }
            }
        }
        arr_17 [i_2] = (min(((-(((arr_7 [i_2]) >> (((arr_11 [i_2] [i_2]) - 13393)))))), ((min((max(-6984, 1)), (min((arr_11 [i_2] [i_2]), (arr_6 [i_2] [i_2]))))))));
        var_20 += (max((((-(arr_10 [i_2] [i_2] [i_2])))), -123145302310912));
        arr_18 [i_2] = min((min(123145302310932, (((-7654542670082372595 ? (arr_13 [i_2] [i_2] [10] [3]) : (arr_8 [i_2])))))), (((~((min((arr_6 [i_2] [i_2]), 103)))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_21 *= (-6984 - 1596160907438333949);
                                arr_36 [i_6] [1] [i_7] [i_8] [i_9] [i_9] [i_8] = (((!((0 || (arr_20 [i_8]))))));
                            }
                        }
                    }
                    arr_37 [i_6] [i_8] [i_8] [i_8] = ((((min((((~(arr_27 [i_6] [i_7] [i_8])))), (~7654542670082372587)))) ? (~-51) : (min(((((arr_26 [9] [i_7]) / (arr_31 [i_6] [i_7] [i_7] [i_6])))), (((arr_25 [i_6 - 1] [i_7] [i_8]) ? 3 : (arr_29 [i_6] [i_7] [i_8])))))));
                    var_22 = (max(var_22, -7654542670082372585));
                }
                var_23 += ((((min((arr_22 [i_6 - 1]), (55577 / 7654542670082372574)))) ? (((max(-963878994, 25455)) * (((!(arr_35 [i_6] [i_7] [i_6 - 1])))))) : (arr_35 [11] [12] [5])));
            }
        }
    }
    #pragma endscop
}
