/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184427
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
    var_12 = ((unsigned short) min((((unsigned short) (unsigned char)7)), (max((var_5), (var_4)))));
    var_13 = var_11;
    var_14 = min((((/* implicit */unsigned short) ((unsigned char) var_7))), (var_1));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) var_5))))) == (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2] [i_0])) != (((/* implicit */int) (unsigned short)44336)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_19 [i_4] [i_0] [i_2] [i_0] [i_0] [i_0] = arr_16 [i_2] [i_3] [i_4];
                                var_16 ^= ((/* implicit */unsigned char) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned char)20] [i_0] [i_0] [i_0])))) == (((/* implicit */int) arr_9 [i_0 + 1] [i_0])))))));
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)247)))) == (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [(unsigned short)7]))));
    }
    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_28 [i_5] [(unsigned short)10] [i_7] = arr_12 [i_6] [i_7];
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_25 [i_5] [i_5 - 1])))), (((/* implicit */int) min((arr_25 [i_5] [i_5 + 1]), (arr_25 [i_5 + 2] [i_5 + 1])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_19 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)51849)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)57901)) >= (((/* implicit */int) var_1)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (unsigned short)65535);
                            arr_34 [(unsigned short)3] [i_8] [i_7] [i_6] [(unsigned short)3] = ((/* implicit */unsigned char) var_3);
                        }
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [i_5] [i_5 + 1] [i_5 + 3] [i_5 - 1] [i_5]))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */int) arr_29 [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5 - 1])) : (((((/* implicit */_Bool) arr_35 [i_5 + 4] [i_5 + 4] [i_7] [(unsigned short)6] [i_5 + 4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_6] [(unsigned short)1])))))))));
                            var_23 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9))))));
                        }
                    }
                    arr_37 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)35172))));
                    arr_38 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)61382)) / (((/* implicit */int) (unsigned short)65024)))))), (min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_29 [i_5 - 1] [i_5 + 3] [i_5 - 2] [i_7]))))));
                }
            } 
        } 
        arr_39 [i_5 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)76))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)63)));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)10879)) ? (((/* implicit */int) arr_13 [i_11] [i_11] [i_12] [i_11] [i_11] [i_12])) : (((/* implicit */int) (unsigned short)63)))) == (((/* implicit */int) (unsigned char)15)))))));
            arr_44 [i_12 + 1] [i_12 - 1] = arr_41 [i_11] [i_12];
            arr_45 [i_12 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)125)) == (((/* implicit */int) arr_43 [i_12 - 2] [i_12 - 1]))));
        }
        arr_46 [(unsigned short)6] [i_11] = (unsigned char)0;
        arr_47 [i_11] = ((/* implicit */unsigned short) arr_40 [i_11] [(unsigned short)7]);
    }
}
