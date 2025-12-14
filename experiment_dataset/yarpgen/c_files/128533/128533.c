/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_3;
    var_13 = ((-(((!((min(var_8, var_8))))))));
    var_14 = (((var_3 ? ((3178 ? -3176 : 3178) : ((max(var_10, var_5)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min((arr_0 [i_0]), (max((min((arr_0 [i_0]), (arr_1 [i_0]))), ((min((arr_2 [i_0]), (arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 += (((((+(((arr_8 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_1])))))) ? (arr_2 [i_1]) : (arr_8 [i_1] [i_0])));
                    arr_10 [i_0] = (arr_9 [i_2]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_17 = (arr_13 [i_3] [i_3]);
        arr_14 [i_3] = (((52 ? 3178 : 3365633560572702738)));
        var_18 += (((arr_13 [i_3] [i_3]) ? (arr_12 [14]) : (((arr_11 [i_3]) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3])))));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_19 += (((2 ? 219 : 128)));

        /* vectorizable */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            var_20 += ((~((0 ? 14685 : 215))));
            var_21 = (min(var_21, ((((~(arr_21 [i_4 + 1] [i_4 - 1] [i_4 - 1])))))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 = (((arr_21 [i_4] [i_5 - 3] [i_5 - 1]) ? (arr_21 [i_4] [i_5] [i_5 - 4]) : (arr_21 [0] [i_5] [i_5 + 1])));
                            var_23 = (((arr_20 [i_6 - 1] [i_6 - 3]) ? (arr_20 [i_6 - 3] [i_6 - 3]) : (arr_20 [i_6 - 1] [i_6 - 2])));
                            var_24 = (min(var_24, ((((~(arr_15 [i_7] [i_8])))))));
                            var_25 = (arr_25 [i_6] [i_6] [i_5 - 3]);
                            arr_28 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 2] [i_6] = (((arr_18 [i_4 + 2]) ? (arr_26 [i_7]) : ((6128859006252804759 ? -1609882954253204180 : 241))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
