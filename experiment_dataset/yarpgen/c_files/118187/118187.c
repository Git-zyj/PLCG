/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min((((min(var_12, 50330)))), (max(((max(255, var_0))), var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] = ((!(((233607901828983694 ? -233607901828983696 : 2300947795)))));
                    var_19 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (251658240 <= ((~(arr_8 [i_0] [i_0]))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [10] [i_4 - 1] = var_16;
                                arr_18 [i_0] = var_6;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_20 = -var_14;
                                var_21 = ((~(min((((arr_13 [i_0] [0] [3] [i_7]) | (arr_4 [i_0]))), (((!(arr_15 [3] [i_0]))))))));
                            }
                        }
                    }
                    var_22 = -104;
                    var_23 += (arr_3 [0]);
                    arr_27 [i_0] [i_0] = ((-(min(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || var_10))), (min(1517315159, (arr_12 [i_0] [i_0] [3] [5])))))));
                }
                var_24 = 5648534402040654154;
                var_25 = -1;
            }
        }
    }
    #pragma endscop
}
