/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [14] [i_0] [i_1] = (arr_3 [i_0] [i_0] [17]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 += (arr_3 [i_0] [i_1] [10]);
                            arr_11 [1] [i_0] [16] [i_1] [i_0] [i_0] = (((arr_1 [i_2]) + (arr_3 [8] [i_1] [8])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_4] [i_3] [i_0] [i_1] [i_1] [i_0] = ((!(arr_12 [i_4] [i_3] [i_1] [i_0])));
                                var_17 ^= (arr_0 [0]);
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] = 1462150665;
                                arr_19 [i_0] [i_1] [i_1] [6] [i_0] [11] = ((1 ? (((arr_2 [i_0 - 2] [i_1 + 2]) ? (((21450 ? var_2 : 371318432))) : (min((arr_1 [5]), var_6)))) : -1366063023));
                                arr_20 [2] [i_0] = ((((-28295 ? ((min((arr_9 [i_1] [7] [i_3] [i_5]), 56385))) : 25)) * ((((!56385) ? (((arr_17 [8] [i_1 + 1] [i_2] [2] [2]) ? 32767 : 201013659)) : 62667)))));
                                arr_21 [i_0] [i_0] = ((min((!48516917), (((arr_2 [i_2] [11]) ? 48516917 : (arr_7 [i_5]))))));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [14] [i_0] [i_6] = (arr_14 [i_0] [2] [1] [1] [i_3] [6] [i_6]);
                                arr_25 [i_0] [i_1 + 1] [i_2] [i_0] [i_6] = arr_0 [1];
                                var_18 = (max(var_18, ((((arr_10 [i_0] [i_0] [i_0] [i_1 - 1]) ? (((((48516897 ? var_8 : var_14))) ? (arr_3 [i_1 + 1] [i_2 - 3] [i_6 + 1]) : ((min(32640, var_4))))) : (arr_0 [12]))))));
                                var_19 ^= ((32640 < (-48516886 == 231)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 *= ((var_7 == (min((1742647087 <= 3665), (min(var_7, var_15))))));
    var_21 = ((-48516898 & ((var_2 ? var_5 : ((var_10 ? var_7 : 201013658))))));
    #pragma endscop
}
