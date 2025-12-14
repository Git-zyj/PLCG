/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114579
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = max((max((((/* implicit */int) var_1)), (min((var_15), (((/* implicit */int) var_14)))))), (max((max((24625007), (((/* implicit */int) var_2)))), (var_4))));
    var_18 = ((/* implicit */int) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0 - 1])), (var_7)))), (max((((/* implicit */int) arr_2 [i_0 - 2])), (-24625007))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_8 [17] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_2 [i_0 - 3])), (24625007))), (max((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)0)))), (max((var_10), (((/* implicit */int) (short)21193))))))));
            var_20 = ((/* implicit */short) max((max((var_1), (((/* implicit */unsigned short) arr_5 [i_0 - 3] [i_0] [i_0 + 1])))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_5 [i_0 - 3] [15] [i_0 + 1])), (arr_1 [i_0] [i_0 + 1]))))));
            var_21 = max((min((max((((/* implicit */int) arr_1 [(unsigned char)14] [(unsigned char)14])), (var_15))), (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 3] [i_0 + 1])))), (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0 + 1] [i_0 - 3])), (var_3)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) (short)29462);
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 548852034))));
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)65513);
                var_24 = ((/* implicit */unsigned char) 24624991);
                var_25 = (unsigned short)51449;
                /* LoopSeq 3 */
                for (int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    var_26 = ((/* implicit */int) (unsigned short)7);
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 2147483647))));
                    arr_17 [i_0] [i_0] [(unsigned short)15] [i_0] = ((/* implicit */int) (unsigned char)182);
                }
                for (unsigned char i_5 = 3; i_5 < 18; i_5 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (short)-30432))));
                    var_29 = ((/* implicit */short) (unsigned short)14080);
                    arr_20 [i_3] [i_5 - 1] = (short)30791;
                }
                for (int i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    arr_25 [i_0] [5] [i_3] [i_6] = 2147483647;
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        arr_28 [i_6] = ((/* implicit */short) (unsigned char)215);
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 3))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */int) (unsigned short)33777);
                        arr_31 [i_2] [i_2] [i_6] [i_8] = ((/* implicit */unsigned short) (short)-29098);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        arr_36 [i_0 - 2] [i_6] [i_3] [i_6 - 1] [i_9] = ((/* implicit */int) (unsigned char)42);
                        var_32 = (unsigned char)250;
                    }
                    for (unsigned char i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        arr_41 [i_2] [i_2] [i_2] [i_6] [i_2] = -24625018;
                        var_33 = (short)-30786;
                    }
                }
            }
        }
        var_34 *= ((/* implicit */unsigned short) max((((/* implicit */int) min((max(((unsigned short)18096), (((/* implicit */unsigned short) arr_15 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0 - 3])))), (((/* implicit */unsigned short) min(((unsigned char)250), (arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [14]))))))), (max((max((24625009), (((/* implicit */int) (short)29274)))), (max((((/* implicit */int) var_2)), (arr_40 [i_0] [i_0 - 1] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_35 = max((var_15), (min((((/* implicit */int) var_8)), (var_12))));
}
