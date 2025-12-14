/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [5] = ((min(var_6, 760496697222316700)));
        arr_4 [i_0] = (min(var_8, (((min((arr_0 [i_0] [i_0]), var_3))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_10 = (min(var_10, 11));
                    var_11 = (max(var_11, -173224473));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_12 = ((((((max(2245, -173224460)) * (min(173224472, 2257))))) ? var_2 : (((-7903 ? (arr_7 [i_6 + 4]) : (arr_1 [i_1] [i_6]))))));
                        var_13 = ((((((max(5689567421892665642, 4365))) ? ((var_9 ? var_0 : 11382966390939011014)) : 173224437)) >> (-5689567421892665627 + 5689567421892665688)));
                    }
                }
            }
        }
        var_14 ^= (!239);
        var_15 = (max(((((arr_19 [i_1] [i_1]) && (arr_9 [i_1] [i_1])))), (max((max((arr_9 [i_1] [i_1]), var_8)), -227))));
        var_16 += (max((max((((arr_16 [1] [0] [0]) ^ var_7)), (arr_21 [i_1] [i_1]))), 173224460));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_17 = (max(((-(arr_27 [i_7]))), (arr_11 [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    arr_33 [14] [i_8] [15] [i_8] = ((!((max((arr_6 [i_7] [i_8]), (arr_6 [i_7] [i_9 + 1]))))));
                    var_18 -= (((max((~var_6), ((max(0, 0))))) >= (((!(((arr_19 [i_7] [i_9]) >= (arr_5 [3]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_19 *= (arr_34 [i_11 + 1] [i_9 - 1]);
                                arr_40 [i_11 - 1] [i_10] [i_9] [i_8] [i_7] = ((((((arr_2 [i_11]) ? (((-(arr_30 [6])))) : ((var_2 ? 173224459 : var_0))))) ? ((37415 / (arr_21 [i_8] [i_8]))) : (((var_9 ? var_6 : (arr_31 [i_7] [i_8] [i_7] [i_10]))))));
                            }
                        }
                    }
                    arr_41 [i_7] [i_7] [i_9] [13] = (((((1 - var_5) ? (min(0, var_2)) : (arr_17 [i_8]))) > ((((((arr_19 [i_7] [i_8]) / var_5))) ? (arr_16 [i_7] [i_9 - 2] [i_9]) : (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
                }
            }
        }
        arr_42 [i_7] [i_7] = (max(((((var_8 - 1) * ((((var_9 <= (arr_13 [1] [i_7] [i_7])))))))), ((-1266592414 ? (arr_18 [7] [7] [i_7]) : (min((arr_27 [i_7]), 9091723905224334945))))));
        var_20 = (min(var_20, ((max((max((arr_30 [i_7]), (arr_30 [i_7]))), ((max((arr_27 [i_7]), (arr_28 [i_7] [i_7])))))))));
        var_21 = ((-((((arr_8 [1] [i_7]) & (arr_16 [i_7] [13] [i_7]))))));
    }
    var_22 = ((var_8 <= (((((max(2146435072, var_1)) != (var_2 > -2146435073)))))));
    var_23 = (((7 && -31573) ? var_3 : var_7));
    var_24 = (max((max((240 / var_2), ((min(var_6, var_8))))), var_0));
    #pragma endscop
}
