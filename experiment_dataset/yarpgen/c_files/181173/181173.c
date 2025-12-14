/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~(var_15 >= var_1))));
    var_19 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = (arr_0 [i_2]);
                            arr_11 [i_0] [8] [8] [i_2] [15] [i_3] = ((((arr_8 [8]) | (min((arr_3 [i_2 + 1] [i_3]), -24417)))));
                        }
                    }
                }
                arr_12 [i_1] [i_0] = (((-(arr_10 [i_0] [13] [15] [13] [i_1] [i_0]))));
                arr_13 [i_0] [i_1] = ((((((max(196268743278459491, (arr_4 [i_0] [i_0] [i_0]))) % var_1))) ? ((((arr_6 [i_0] [i_0] [14]) ? -85 : (arr_2 [i_1])))) : (max(((min(-6188351892479578460, 1915324915))), ((7095 ? (arr_6 [i_0] [i_1] [1]) : (arr_3 [i_1] [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_21 = ((var_10 == (--5)));

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                var_22 = ((-((25852 ? 255 : (max(var_10, 24588))))));
                                var_23 = (arr_22 [i_5] [i_5]);
                            }
                        }
                    }
                }
                arr_28 [12] [i_5] = (min(((~(arr_5 [i_4] [13]))), ((12436610957497447310 ? var_1 : (arr_5 [i_5] [i_5])))));
                var_24 = ((((max((min(1601998196, -19962)), var_14))) ? -1 : (15767667354682377252 != 693421681)));
                arr_29 [4] [i_5] = (arr_16 [3] [i_5] [7]);
            }
        }
    }
    var_25 = 18597;
    #pragma endscop
}
