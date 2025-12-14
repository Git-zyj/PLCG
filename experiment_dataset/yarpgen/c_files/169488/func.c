/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169488
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                var_16 = ((/* implicit */signed char) (+((((_Bool)0) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 7; i_2 += 4) 
    {
        var_17 = ((/* implicit */signed char) var_1);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [(signed char)6] [i_2] [i_2] = ((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) (_Bool)1)));
                    arr_14 [i_2] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_4 - 2] [i_4 - 1]))));
                    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_4])) : (((/* implicit */int) arr_11 [i_4 + 1] [i_3] [i_4 + 1]))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_2 + 1]))));
    }
    for (signed char i_5 = 4; i_5 < 15; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_5] [(_Bool)1] [i_7 - 1] = ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) + ((+((((_Bool)0) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_28 [i_8] [i_8] [i_8] [i_7 - 1] [i_8] [i_5] = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                arr_29 [i_5] [i_5 - 3] [i_6 + 1] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_17 [i_5]))))))) ? (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_27 [i_6 - 1] [i_5 - 3])))) : ((((_Bool)1) ? (((/* implicit */int) min((var_3), ((_Bool)1)))) : (((/* implicit */int) var_14))))));
                var_21 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((signed char) ((_Bool) arr_22 [i_5] [i_5 - 3] [i_6 - 1])))));
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_30 [i_10]))));
            }
            /* LoopSeq 1 */
            for (signed char i_11 = 3; i_11 < 13; i_11 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    arr_37 [i_12] [i_11] [i_5] [i_11] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((var_4), (arr_22 [i_5 - 1] [i_6 - 1] [i_6 - 1])))) : (min((((/* implicit */int) (signed char)83)), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-68))))))));
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((signed char) (_Bool)0)), (((/* implicit */signed char) ((_Bool) (signed char)-65)))))) ? (((/* implicit */int) ((_Bool) (signed char)-5))) : (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+((-(((((/* implicit */int) (signed char)18)) * (((/* implicit */int) (signed char)-40)))))))))));
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_5 - 3]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_18 [i_5 + 1]), (arr_18 [i_5 - 3]))))));
                }
                for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    var_27 -= ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (_Bool)1))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */signed char) arr_31 [i_5] [i_13])), ((signed char)-22)))), (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-45)))))))))));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))));
                    arr_43 [i_11] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    var_30 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [(signed char)9] [i_6 + 1] [i_5 - 3] [i_11 + 1] [i_11]))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_31 -= ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)72)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_33 [i_11] [i_11 + 1] [i_6 - 1] [i_11]))))) ? (max((((((/* implicit */int) arr_33 [i_11] [i_11] [i_6] [i_11])) * (((/* implicit */int) (signed char)0)))), ((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (signed char)-34)))) : ((+(((/* implicit */int) (signed char)90))))))));
                    var_33 = ((/* implicit */signed char) min((((((/* implicit */int) arr_17 [i_5 - 3])) << (((((/* implicit */int) arr_17 [i_5 - 2])) - (92))))), (((/* implicit */int) max((((/* implicit */signed char) var_0)), (arr_17 [i_6 + 1]))))));
                }
                arr_47 [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) arr_46 [i_5] [i_11] [i_5 - 3] [i_5 - 4])), (arr_41 [i_5 - 1] [i_11])))) * (((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) arr_24 [i_11] [(_Bool)1] [i_6 - 1] [i_5] [(_Bool)1])) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1)))) - (64)))))));
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) min((((/* implicit */int) min(((!((_Bool)1))), (min((var_12), (arr_26 [i_5] [i_11])))))), (((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_30 [i_5 - 4])) : ((((_Bool)1) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_21 [(signed char)2] [i_5] [i_5])))))))))));
                /* LoopSeq 3 */
                for (signed char i_16 = 3; i_16 < 15; i_16 += 1) /* same iter space */
                {
                    var_36 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) (_Bool)0))))))) <= ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */signed char) var_1)), (arr_52 [i_6] [i_6 + 1] [i_6 + 1] [i_11] [i_6 - 1] [i_6 + 1]))));
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((_Bool) arr_24 [i_5 + 1] [i_6] [i_11] [i_5 + 1] [i_17])) ? ((+(((/* implicit */int) arr_17 [i_16 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))))))));
                        var_39 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_40 = var_3;
                    }
                    /* vectorizable */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_56 [i_18] [i_11] [i_18] [i_16] [(_Bool)1] [i_11] [i_5 - 3] = (!(((_Bool) (signed char)84)));
                        arr_57 [i_11] [i_11 + 1] [i_11 + 1] [i_6 + 1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) arr_32 [i_6 - 1] [i_18] [i_6 - 1] [i_18])) : (((/* implicit */int) arr_41 [i_18] [i_11]))));
                        var_41 = arr_35 [i_18] [i_11] [i_11] [i_6 + 1];
                    }
                }
                /* vectorizable */
                for (signed char i_19 = 3; i_19 < 15; i_19 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */signed char) var_0);
                    var_43 = ((/* implicit */_Bool) (signed char)10);
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_62 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_11] [i_20]))))) ? (((/* implicit */int) arr_55 [(signed char)6] [i_6 - 1] [i_6] [i_11 - 1] [i_20])) : (((/* implicit */int) min((((/* implicit */signed char) var_0)), ((signed char)60))))))) ? ((((+(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((signed char) (_Bool)1))))) : (((/* implicit */int) (signed char)62))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)34))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)117))));
                        arr_65 [i_11] = ((/* implicit */_Bool) ((((_Bool) max(((signed char)58), ((signed char)127)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_11] [i_11]))));
                        arr_66 [i_5] [i_5] [i_11] [i_20] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) >> (((var_1) ? ((+(((/* implicit */int) arr_45 [i_5])))) : (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)15))))))));
                    }
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_18 [i_11])) : (((((/* implicit */_Bool) arr_34 [i_11] [i_11] [i_5])) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) ((_Bool) (signed char)97))) : (((((/* implicit */_Bool) arr_44 [i_5 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_5] [i_6 + 1] [i_11] [(_Bool)1])))))) : (((/* implicit */int) var_10))));
                    arr_67 [i_5] [i_11] [i_11] = ((/* implicit */_Bool) ((signed char) (_Bool)0));
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [(_Bool)1] [i_6 - 1] [(_Bool)1] [i_20]))))))) ? ((+((+(((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) arr_19 [i_5] [i_5]))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_70 [i_22] = ((/* implicit */signed char) min((((/* implicit */int) min((var_3), (arr_42 [i_22])))), (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-109)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_5] [i_6] [i_6] [i_22])))) : (((/* implicit */int) (!(arr_48 [i_22] [i_6] [i_22] [i_5]))))))));
                arr_71 [i_22] [i_22] = max((arr_52 [i_5] [(signed char)9] [(signed char)3] [i_22] [i_22] [i_22]), ((signed char)114));
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_22]))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_17 [i_22])))) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((_Bool) (_Bool)0)))))))))));
                var_48 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1))));
                var_49 = (_Bool)1;
            }
        }
        for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            arr_76 [i_23] [i_23] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_36 [i_5] [(_Bool)1] [(_Bool)1] [i_23]))))));
            arr_77 [(signed char)3] [i_23] = ((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_32 [i_5 - 2] [i_5 - 2] [i_5] [i_23])))) % (((/* implicit */int) ((_Bool) (signed char)-54))))) % (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
            {
                var_50 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)59)) <= (((/* implicit */int) arr_35 [i_5] [i_24] [i_5] [i_25]))));
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                {
                    arr_85 [i_26] [i_26] [i_26] [i_26] [i_5] = ((/* implicit */_Bool) ((arr_68 [i_26] [i_26]) ? (((/* implicit */int) var_2)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1))))));
                    var_51 += ((/* implicit */signed char) arr_45 [(_Bool)1]);
                }
            }
            var_52 *= ((/* implicit */signed char) ((((/* implicit */int) (signed char)28)) < (((/* implicit */int) arr_82 [i_5 - 1]))));
            var_53 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_64 [i_5 - 4] [i_24] [i_5] [i_5] [i_24])) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_7))));
            arr_86 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_24]))))) ? (((arr_69 [i_5 - 2] [i_5] [i_5] [i_5 + 1]) ? (((/* implicit */int) arr_68 [i_5 - 4] [i_5])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)127))));
        }
        var_54 = (((-((+(((/* implicit */int) var_4)))))) == (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_31 [i_5] [i_5])))));
    }
}
