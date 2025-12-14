/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((~var_9), ((250 ? var_2 : (8562053981523384812 - var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 *= var_15;
                arr_5 [i_0] = (max(var_6, -var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_18 = ((((min(((775159301 ? 240 : -1)), -32751))) ? ((max((max(710380492007663252, 1)), (1 & 255)))) : (min(var_5, var_9))));
                                arr_14 [i_0] [18] [i_2] [i_2] [i_0] [i_3] [2] = ((!((((3312120018832967720 / -3059413287147510436) + (~-1006137131125076052))))));
                                arr_15 [i_0 - 1] [0] [i_0] [i_2] [i_2] [i_3] [i_0] = (max((min(var_15, (min(var_1, 12)))), (-32767 - 1)));
                                arr_16 [5] [5] [i_2] [i_3] [i_3] [i_4] [i_0] = (((arr_12 [9] [12] [18] [i_0] [i_4]) / ((min((arr_12 [1] [i_0] [i_3] [i_0] [i_0 + 1]), (arr_13 [i_0] [i_0]))))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] = (((((max(var_6, (arr_4 [i_0] [i_5] [i_2]))) ? -596073955507542642 : (max(var_2, var_2))))));
                                var_19 = (min((var_14 * var_11), var_3));
                                var_20 = (min(var_20, ((max(var_5, var_4)))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_22 [1] [i_1] [8] [i_0] [8] [i_6] = ((~(~192)));
                                var_21 = (((((var_11 ? var_5 : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [13])))) ? (((4279374040884138276 ? -5608337360155530730 : var_3))) : 0));
                                var_22 = 4;
                            }
                            arr_23 [i_0] [i_0] [11] [i_3] = (((min(15110575833055037385, 690707698)) != (!50331648)));
                        }
                    }
                }
                arr_24 [i_0] [i_1] = (((max((max((arr_4 [i_0] [i_0] [1]), 1333508636)), ((max(-24, 16777215))))) / (((((min(524287, 18446744073709551615))) ? 1 : 53798)))));
            }
        }
    }
    #pragma endscop
}
