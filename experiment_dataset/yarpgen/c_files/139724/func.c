/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139724
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned char) arr_1 [(unsigned short)22]);
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_16)) - (41841))))) - (((/* implicit */int) var_8))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [(unsigned char)0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */int) (unsigned char)116)) >> (((((/* implicit */int) arr_4 [i_1 - 2])) - (101))))) : (((/* implicit */int) ((unsigned char) arr_4 [i_1 + 1])))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3356)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (unsigned char)75))));
        var_23 = var_7;
    }
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 3; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)242))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_11 [(unsigned char)11] [i_6 - 2] [i_6 - 2] [i_3 + 2]))))) ? (((((/* implicit */int) var_7)) - (((/* implicit */int) arr_7 [i_6 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_6 - 3])) != (((/* implicit */int) (unsigned char)23)))))));
                                var_26 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (unsigned char)186)));
                                arr_22 [i_4] [i_4] [(unsigned char)5] [(unsigned short)5] [i_4] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (unsigned char)224)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_6)))) & (min((((((/* implicit */_Bool) arr_6 [(unsigned char)3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)23)))), (((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_28 = min((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)51))))), (arr_31 [i_10] [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10]))), (var_0));
                            var_29 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)185)))))), ((-(((/* implicit */int) var_14))))));
                            arr_32 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) / (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))));
                            arr_33 [i_2] [i_9] [(unsigned char)5] [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)222))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_9])) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (unsigned char)140)))), (((((/* implicit */_Bool) (unsigned short)31851)) ? (((/* implicit */int) arr_15 [(unsigned char)9] [i_2 - 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_15 [i_2 - 2] [i_2 + 1] [i_8 - 1] [i_9]))))));
                            arr_34 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)5926))))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), ((unsigned char)100)));
                            arr_39 [i_11 - 1] [i_7] [i_9] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (max((((/* implicit */int) (unsigned char)191)), (((((/* implicit */int) var_14)) - (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_3))));
                            arr_40 [i_7] [(unsigned char)4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)166)) - (((/* implicit */int) (unsigned char)126))));
                            var_31 = ((/* implicit */unsigned char) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_6), (var_12))))))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 12; i_12 += 3) 
                        {
                            var_32 = var_17;
                            arr_44 [i_9] [i_7] [i_7] [i_7] [(unsigned char)4] [i_9] [i_12 - 1] = (unsigned char)113;
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            arr_47 [i_2 - 1] [i_2] [i_9] [i_2] [i_2 - 1] = ((unsigned char) var_11);
                            arr_48 [i_2 - 2] [i_9] [i_2 + 1] = ((unsigned char) arr_18 [i_8] [i_9] [i_8 - 1] [i_9] [i_9] [i_8 - 1]);
                            var_33 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)79)) & (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)13175)) : (((/* implicit */int) (unsigned char)114))))));
                        }
                        var_34 = var_17;
                    }
                } 
            } 
        } 
        var_35 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_31 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)27889))));
        arr_49 [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)51411))));
        var_36 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_12)) % (((/* implicit */int) (unsigned short)49642)))) * ((-(((/* implicit */int) (unsigned char)177))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_14 = 1; i_14 < 14; i_14 += 4) 
    {
        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 3) 
        {
            {
                arr_55 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_14 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17207))))) : (((/* implicit */int) ((unsigned char) var_11)))));
                var_37 = max(((unsigned char)20), ((unsigned char)196));
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)45780)))))));
                var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned short)45515)))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_16 = 2; i_16 < 11; i_16 += 4) 
    {
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            {
                var_40 = ((/* implicit */unsigned char) var_8);
                arr_61 [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) & (((/* implicit */int) (unsigned short)7786)))), (((/* implicit */int) arr_9 [i_16]))))) ? ((((+(((/* implicit */int) arr_52 [i_16] [i_16] [i_16])))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)58)) != (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)85)), (arr_1 [i_17])))) ? (((/* implicit */int) (unsigned char)191)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
}
