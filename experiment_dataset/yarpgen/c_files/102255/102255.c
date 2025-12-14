/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max(((max(1, var_2))), (~var_3)))));
    var_12 = ((((((58307 ? var_4 : 116)) ? ((var_9 ? var_0 : var_9)) : 18))));
    var_13 = (((4294967277 ? var_10 : var_4)));
    var_14 = ((var_2 ? (((~((58307 ? 116 : 111))))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] |= ((((((((min(136, var_10))) || var_10)))) & ((-(max(4294967277, var_9))))));
                    arr_8 [i_0] [i_2] [i_2] = (((((((max(var_7, var_1))) ? var_6 : ((((-22314 && (arr_5 [i_0] [5] [i_2] [i_2 - 4])))))))) ? ((((arr_2 [7]) < ((4294967277 ? 19 : 16383))))) : ((((arr_4 [i_0] [i_0] [i_0]) != ((max(var_8, 124))))))));
                    var_15 = (((max(((var_4 ? 18 : 32757)), ((min(var_5, var_4))))) | (((((142 ? (arr_1 [i_0]) : -1001)))))));
                    var_16 += 1679171417668822262;
                    arr_9 [i_2 - 2] [i_0 + 1] [i_0 + 1] [i_0] |= (min(((min(1, (arr_4 [i_0] [i_0 - 2] [i_0])))), 144));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_17 = (arr_10 [i_0] [i_1] [i_3]);
                    var_18 ^= ((-((4294967292 & (arr_4 [i_1] [i_1] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_5] = (((((~(~var_6)))) ? (min((448 != var_0), 4294967290)) : (((max(-32758, (arr_5 [i_0] [i_3] [i_4] [i_5])))))));
                                var_19 *= (((arr_10 [i_0] [i_0] [i_0]) ? (max((14699 & var_1), (~-1679171417668822279))) : (((~(arr_1 [i_0 + 3]))))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_21 [2] [i_1] [2] [i_1] &= min((((arr_16 [i_0 - 2]) ? (((118 ? (arr_2 [i_0]) : var_4))) : ((~(arr_1 [i_6]))))), (((~(arr_19 [i_6] [i_1] [i_0])))));
                    var_20 = (min(((~((max((arr_16 [i_0 + 2]), (arr_4 [i_0] [i_0] [i_0])))))), ((((arr_12 [i_0 + 1]) > 17959)))));
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_7] [i_0] = -4294967277;

                            for (int i_9 = 0; i_9 < 13;i_9 += 1)
                            {
                                var_21 = (max(var_21, 17959));
                                var_22 &= (arr_31 [i_0] [i_0] [i_0 - 1] [i_0] [i_7 + 1]);
                            }
                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                var_23 &= (((arr_20 [i_0 - 1] [i_0 + 4]) ? ((0 ? (arr_23 [i_0 - 1]) : 32760)) : (((min(5, (arr_26 [i_7 - 3] [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 4])))))));
                                arr_36 [i_10] [3] [i_0] = (max((((((min(466270516, -70))) ? (((131 - (arr_30 [i_0 - 2] [i_1] [i_7] [i_1] [i_8] [0] [i_10])))) : (max(1920, 47576))))), 1679171417668822262));
                            }
                            var_24 -= ((((max((((arr_11 [i_8] [i_0] [i_0]) + var_0)), (arr_26 [i_7] [i_7 + 1] [i_7 + 1] [6] [i_7 - 3] [i_7 - 4])))) && ((min((max(4294967277, (arr_22 [i_0] [i_1] [i_7]))), 98)))));
                        }
                    }
                }
                var_25 = (min(var_25, (min((((47555 ? (arr_20 [i_0] [i_1]) : 144))), (min((arr_10 [i_0 + 1] [1] [i_0]), (max(4294967278, var_2))))))));
            }
        }
    }
    #pragma endscop
}
