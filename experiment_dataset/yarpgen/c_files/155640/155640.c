/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    arr_8 [i_2] = 3315118036;
                    var_13 = (arr_5 [i_0]);
                }
                arr_9 [i_0] [i_0] [9] = (arr_6 [i_0] [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_16 [i_4] = (((arr_4 [i_3] [i_3] [i_3]) ? ((((1920 << (979849251 - 979849248))))) : (((979849277 / 1701409244) | (arr_15 [i_3] [i_4])))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_14 = (min(var_14, ((min((max(((16847193913406499914 ? 57342 : (arr_13 [i_5] [i_4] [i_3]))), 224)), 53067)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 = arr_3 [i_3] [i_4] [5];
                                var_16 = (((((167737827 ? -1089081642 : 1599550160303051703))) ? 979849259 : 14));
                            }
                        }
                    }
                    var_17 = (max(var_17, (((!((min((arr_7 [i_3] [i_4] [i_4] [10]), (196 && 3315118036)))))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 10;i_8 += 1)
                {
                    var_18 = (max(var_18, (((((((arr_2 [i_8]) ? 190 : -1701409224))) & (((arr_4 [i_3] [i_4] [i_8]) ? (arr_1 [i_3] [i_3]) : (arr_13 [6] [i_3] [i_3]))))))));
                    arr_26 [i_4] [i_3] |= (((arr_22 [i_3] [i_4]) || (((~(arr_20 [i_4] [i_8] [i_8] [i_8] [i_3] [i_3]))))));
                }
            }
        }
    }
    var_19 = ((!(max(1, (var_3 == var_6)))));
    var_20 = ((var_10 - ((-var_3 ? (-68 - var_0) : (1392458503729700375 * 0)))));
    #pragma endscop
}
