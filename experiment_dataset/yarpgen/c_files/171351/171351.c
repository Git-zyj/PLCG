/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] = ((-14557 ? ((+((max((arr_3 [i_1] [2] [i_0]), (arr_2 [8] [6])))))) : 53372));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((~((min((arr_12 [i_3] [i_1] [i_3] [i_3] [9]), 30189))))))));
                            var_19 = max(30195, 30195);
                            var_20 = ((-((58662 ? (((!(arr_1 [i_0] [i_1 - 1])))) : 41985))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_21 = arr_23 [i_0] [i_5] [i_6] [i_5] [i_8] [8];
                                arr_26 [i_0] = 48781;
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] [i_0] = arr_2 [i_0] [9];
                    var_22 = (((arr_11 [i_0]) ? 55883 : 64643));
                    var_23 |= (~34820);
                }
            }
        }
    }
    var_24 = 59194;
    #pragma endscop
}
