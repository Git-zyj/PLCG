/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(var_9, (min(5214057655159546559, var_0)))));
    var_16 = (max(var_16, ((min((min(var_5, var_9)), (!-753865236))))));
    var_17 = 90;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = 45;
                    arr_9 [13] [i_0] [i_1] [i_2] = ((-(arr_0 [i_0] [i_1])));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((60 ? 2386849663740486582 : 555852095));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_18 += 196;
                        arr_14 [i_0] [16] = (arr_11 [i_1] [i_0]);
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((~(((((528115652 ? 0 : 195))) - (min(var_6, 0))))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] = 8123747337503014825;
                            var_20 = ((var_0 ? 528115652 : (var_1 <= var_5)));
                            arr_20 [9] [9] [i_0] [i_4] [i_5] = (((4657280506597965689 ^ var_0) ? (((((arr_7 [i_0] [i_0]) >= 69)) ? var_2 : (arr_11 [i_4 + 3] [i_0]))) : (~90)));
                        }
                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            var_21 = -3161826197;
                            arr_23 [i_0] [i_0] [i_2] [19] [i_6 - 4] = 79;
                        }
                        var_22 &= (max(2489430376, 113));
                        var_23 = (max((((!(arr_22 [i_0] [i_1] [i_2] [i_0] [11] [i_2] [i_4])))), var_1));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_24 = ((((min(((max(var_8, var_10))), ((var_1 ? var_1 : -2386849663740486582))))) ? (arr_5 [i_0] [i_7 + 3] [i_0] [i_7 + 3]) : (((arr_4 [i_0]) >> (3114618344262407502 - 5433)))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] = 2386849663740486582;
                    }
                    arr_28 [i_0] [i_0] [i_0] = ((~(min(1845047345, 2386849663740486607))));
                }
            }
        }
    }
    var_25 = var_6;
    #pragma endscop
}
