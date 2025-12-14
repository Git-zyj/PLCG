/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((82 ? 2490471317 : 12044729413924483159))), (((((var_12 >> (6402014659785068457 - 6402014659785068454)))) * 6402014659785068443))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = 12044729413924483159;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = 57;
                    var_20 = ((((arr_3 [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : var_9)));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_21 += 6402014659785068455;
                    var_22 = var_16;
                    arr_11 [i_0] [i_3] [i_3] = (max(((max((arr_0 [i_0] [i_0]), (~41177188)))), (((arr_3 [i_3]) ? -637840098 : (arr_0 [i_0] [i_3])))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_5] [i_6] [i_5] = 255;
                                arr_21 [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((((((arr_0 [i_0] [i_0]) ? 4294967272 : 0))) ? 22588 : 23))) ? (max(((-(arr_18 [i_0]))), (((56 < (arr_14 [i_1] [16] [16])))))) : (((-((((arr_7 [i_0] [i_0] [i_0] [i_5]) || 6402014659785068464))))))));
                                arr_22 [i_1] [i_5] [i_1] = ((((((~(arr_4 [8]))))) ? ((max((-32767 - 1), 955136957))) : (((var_3 - var_14) ? 56 : (max(9627872485212016303, 25333))))));
                                var_23 = (min(var_23, var_13));
                                var_24 |= (1088619176790386234 >= 23);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_25 *= (((((145290764 ? (arr_19 [i_8 - 1] [i_1] [i_7] [i_7 - 1] [i_7] [i_1] [i_7]) : (arr_19 [i_8 - 1] [i_1] [i_7] [i_7 - 4] [i_1] [i_1] [i_0])))) ? (arr_25 [i_8 - 1]) : (((var_12 ? var_3 : (arr_25 [i_8 - 1]))))));
                                arr_29 [i_0] [i_1] [i_1] = (((((arr_9 [i_0]) <= var_14)) ? 43 : (max(((-(arr_16 [i_8] [i_1] [i_1] [i_1] [i_0]))), var_8))));
                            }
                        }
                    }
                    arr_30 [i_0] [i_0] [i_4] |= var_16;
                    var_26 = (max(var_10, (arr_13 [i_1] [i_1])));
                }
                arr_31 [i_0] = (~200);
                var_27 = (max(0, 1453119320));
                arr_32 [4] [i_1] = var_17;
            }
        }
    }
    #pragma endscop
}
