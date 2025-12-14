/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -120;
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_8 [1] [1] [i_1] = ((((((((arr_0 [6]) ? var_4 : -117))) ? ((var_1 ? var_8 : 36)) : (arr_6 [i_0])))) ? (((max(var_12, (arr_4 [i_2 + 3] [3] [i_2 - 2]))))) : ((0 ? (max(var_8, var_9)) : var_11)));
                    var_16 = (max(var_16, (((((arr_7 [i_2 + 1] [i_2 + 4] [i_0]) < (((24 >> (var_7 + 81))))))))));
                    var_17 += (max((~var_9), (arr_4 [i_0] [i_2] [i_2])));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    var_18 = ((11392197780878414842 >> (23578 - 23526)));
                    var_19 ^= -580988801848937083;
                    var_20 = (min(var_20, (((((var_3 ? 1 : 1)) <= ((-(arr_4 [i_0] [i_0] [5]))))))));
                    var_21 = (max(var_21, var_1));
                    var_22 += var_2;
                }
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_23 = (arr_7 [i_0] [1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [8] [8] [i_1] [1] [i_1] [1] [i_1] = (!var_5);
                                var_24 = (max(65522, 127));
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_25 = (min(var_25, ((max(((!(arr_18 [i_0] [8] [i_1] [i_7 - 1] [i_0]))), var_8)))));
                    var_26 = (var_0 ? var_2 : ((((!(arr_7 [i_7] [i_7] [i_1]))))));
                    var_27 ^= var_13;
                    var_28 = ((-((var_5 ? (arr_21 [8] [i_7 - 1] [i_1]) : (arr_13 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1])))));
                    var_29 = (min(-var_8, (arr_1 [i_7 - 1])));
                }
                var_30 = (max((((!(arr_13 [i_0] [i_1] [i_1] [i_0])))), ((var_3 ? -45974 : ((-(arr_7 [4] [9] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
