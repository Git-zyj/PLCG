/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149403
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))) : (((/* implicit */int) (unsigned char)23)))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)1] [(unsigned short)4])))))))));
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_8 [i_0] [(unsigned short)7] [i_2]), (arr_5 [(unsigned short)9])))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)5] [(unsigned short)5])) : (((/* implicit */int) (unsigned char)233)))) : (((/* implicit */int) arr_0 [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)61693))));
                        arr_13 [(unsigned short)7] [(unsigned char)5] [i_2] [(unsigned char)6] = arr_3 [i_3] [(unsigned char)6] [(unsigned char)6];
                    }
                    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) << (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_4] [i_2])), ((-(((/* implicit */int) arr_1 [i_4] [(unsigned short)3]))))))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)233))))) ? (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)15)))) : (min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */int) (unsigned short)45637)) & (((/* implicit */int) (unsigned char)250))))))));
                        var_26 = arr_8 [i_0] [(unsigned char)5] [i_2];
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) min((min(((unsigned short)64298), (((/* implicit */unsigned short) (unsigned char)146)))), ((unsigned short)21577)))) + ((+(((/* implicit */int) max((arr_5 [i_0]), (arr_8 [i_0] [i_0] [(unsigned short)10])))))))))));
                        arr_16 [(unsigned char)4] [(unsigned char)10] [i_1] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_2 + 1] [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [(unsigned char)1] [(unsigned char)1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2])))))) | ((-(((/* implicit */int) arr_0 [i_2 - 1]))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(unsigned short)11] [i_1] [(unsigned short)6])) - (((/* implicit */int) var_12)))))))) << ((((-(((/* implicit */int) arr_5 [i_0])))) + (229)))));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)28701)) ? (((/* implicit */int) arr_19 [i_0] [(unsigned short)8])) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_10 [i_1] [i_2] [(unsigned short)5]))))) ? (((((/* implicit */_Bool) (unsigned char)93)) ? (((/* implicit */int) arr_11 [(unsigned char)4] [i_0] [i_2 - 1] [i_5])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)246)), (var_17)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1] [i_1] [(unsigned short)0]))))))))));
                        arr_21 [(unsigned char)5] [(unsigned char)1] [(unsigned char)7] [(unsigned short)3] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_3 [(unsigned short)4] [i_1] [i_2])) : (((/* implicit */int) arr_14 [i_0] [(unsigned char)4] [i_2 - 1] [i_5]))))) ? ((-(((/* implicit */int) var_3)))) : ((+(((/* implicit */int) (unsigned char)237))))))) ? (((((/* implicit */_Bool) (unsigned short)55194)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2])) : (((((/* implicit */_Bool) arr_8 [(unsigned char)5] [i_1] [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)250)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))));
                        var_29 = ((/* implicit */unsigned short) arr_9 [i_2]);
                        var_30 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_8 [(unsigned char)10] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_0] [(unsigned char)9])) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)10] [(unsigned short)8]))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
    {
        var_31 = min(((unsigned short)42277), ((unsigned short)1792));
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
        {
            for (unsigned char i_8 = 3; i_8 < 8; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_32 = arr_10 [(unsigned short)7] [(unsigned char)2] [(unsigned char)6];
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_33 = arr_31 [i_8 - 1] [i_9] [i_6] [i_8 - 1] [i_7] [i_6];
                            var_34 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)25359)))) + (max(((-(((/* implicit */int) arr_29 [i_6] [(unsigned char)11] [i_7] [i_6] [i_9] [i_7])))), (((/* implicit */int) var_2))))));
                            var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? ((+(((/* implicit */int) var_18)))) : ((+(((/* implicit */int) (unsigned char)215))))));
                            var_36 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned char)6])) ? (((/* implicit */int) arr_6 [i_7] [(unsigned short)11] [i_7])) : (((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */int) arr_9 [(unsigned char)9])) : ((+(((/* implicit */int) arr_11 [i_6] [i_6 - 1] [(unsigned short)4] [(unsigned char)3])))))), ((((!(((/* implicit */_Bool) arr_32 [(unsigned short)10] [(unsigned short)4] [(unsigned char)4] [(unsigned short)2] [i_10] [i_10])))) ? (((/* implicit */int) arr_8 [i_6] [(unsigned char)11] [(unsigned short)3])) : (((((/* implicit */_Bool) arr_10 [i_10] [(unsigned short)4] [i_7])) ? (((/* implicit */int) arr_27 [i_6] [(unsigned short)0])) : (((/* implicit */int) arr_18 [i_6 - 1] [i_6 - 1] [i_6] [i_6]))))))));
                            var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_6]))));
                        }
                        arr_34 [i_6] [i_6] [i_6] [i_8] [i_8] [i_8] = arr_28 [(unsigned short)7] [i_7] [i_7] [i_7 + 1] [(unsigned char)1] [i_7];
                    }
                    var_38 *= arr_27 [i_6] [(unsigned char)6];
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_37 [i_6] [i_6] [i_7] [i_7] [i_8] [i_6] = ((/* implicit */unsigned short) arr_9 [(unsigned char)7]);
                        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_6 - 2]))));
                        arr_38 [i_6] [i_8 - 3] [(unsigned char)11] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned short)2] [i_7 - 1] [i_7 + 1])) ? (((((/* implicit */int) arr_26 [(unsigned short)0] [i_7] [(unsigned char)2])) + (((/* implicit */int) arr_27 [i_6] [i_6])))) : (((/* implicit */int) arr_3 [i_6 + 2] [i_7 - 2] [i_8 - 1]))));
                    }
                    for (unsigned char i_12 = 2; i_12 < 11; i_12 += 4) 
                    {
                        arr_41 [i_6] [i_8] [(unsigned short)4] [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)62))))));
                        var_40 -= min((((/* implicit */unsigned short) (unsigned char)23)), ((unsigned short)60466));
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((/* implicit */int) arr_12 [i_13] [(unsigned char)11] [i_7 + 2] [i_7] [i_7 + 1] [i_7])) - (((/* implicit */int) arr_12 [i_7] [i_13] [i_7 + 2] [i_7] [i_7] [i_7 + 2]))))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) ((((((/* implicit */int) arr_3 [(unsigned char)8] [i_7] [i_6])) ^ (((/* implicit */int) arr_30 [i_6] [(unsigned short)5] [(unsigned char)2] [i_6])))) < (((/* implicit */int) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_7 + 1] [i_7 + 1] [(unsigned char)11])) ? (((/* implicit */int) arr_11 [i_13] [i_8 - 3] [i_7] [i_6 + 1])) : (((/* implicit */int) arr_11 [i_6 - 2] [i_7 + 1] [i_8 - 1] [i_13]))))) ? (((/* implicit */int) max((arr_2 [i_7] [i_13]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [(unsigned short)6] [(unsigned char)6] [i_6] [i_6] [i_6 - 1] [(unsigned char)10])))))))) : (((/* implicit */int) (unsigned short)49007))));
                    }
                }
            } 
        } 
        var_44 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)31261), ((unsigned short)39284)))) < (((((/* implicit */_Bool) (unsigned short)22093)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65513)))))) ? ((-(((((/* implicit */_Bool) arr_18 [(unsigned char)3] [i_6 - 1] [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)6)))))) : (((/* implicit */int) arr_42 [i_6] [(unsigned char)11] [i_6] [i_6]))));
        arr_44 [(unsigned char)0] [i_6 - 2] &= min((min(((unsigned short)20650), (max((arr_39 [(unsigned char)8] [(unsigned short)10]), (((/* implicit */unsigned short) arr_9 [i_6 - 1])))))), (((/* implicit */unsigned short) (unsigned char)178)));
        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6 - 2] [(unsigned char)7] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_8 [i_6] [i_6 + 2] [i_6 - 2])) : (((/* implicit */int) arr_8 [(unsigned char)2] [i_6 - 2] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)12396)) : (((/* implicit */int) arr_8 [i_6] [i_6 - 2] [i_6])))) : ((-(((/* implicit */int) arr_15 [(unsigned short)7] [i_6] [i_6 + 1] [i_6] [i_6]))))));
    }
    var_46 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))));
    var_47 = ((/* implicit */unsigned char) min((var_47), (var_5)));
    var_48 = ((/* implicit */unsigned char) var_0);
}
