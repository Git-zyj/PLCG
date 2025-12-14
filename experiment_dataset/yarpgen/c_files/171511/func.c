/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171511
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-23))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)84)), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (signed char)-23)))))))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)10360)) % (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)22)), ((unsigned short)15864))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max(((unsigned short)23438), (((/* implicit */unsigned short) (signed char)-8))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_18 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)62305))));
                var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((var_0), ((unsigned short)59151)))))) ? (((((/* implicit */_Bool) (unsigned short)15926)) ? ((-(((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0 + 2] [i_0]))))) : (((/* implicit */int) (signed char)123))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_17 [i_3] [(unsigned short)0] [(unsigned short)5] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)123)) == (((/* implicit */int) (unsigned short)4865))));
                    var_20 = ((/* implicit */signed char) ((unsigned short) (signed char)-23));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)18634)));
                        arr_24 [i_3] [i_6] [i_3] [i_5] [i_5] = min((min((arr_2 [i_0 + 2]), (arr_2 [i_0 + 1]))), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-66)) && (((/* implicit */_Bool) (unsigned short)49317))))));
                        var_22 = ((signed char) (unsigned short)59136);
                        arr_25 [i_3] [(signed char)4] [(unsigned short)2] [i_1] [i_3] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)35484)) ? (((/* implicit */int) arr_23 [i_5] [i_0 + 2] [i_0 + 2] [i_0] [(unsigned short)7])) : (((/* implicit */int) arr_23 [i_6] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0])))));
                    }
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        var_23 = (unsigned short)6405;
                        arr_28 [(unsigned short)6] [i_0] [i_0] [i_3] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((signed char) ((signed char) (!(((/* implicit */_Bool) arr_26 [i_3] [i_1]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_24 = ((unsigned short) min(((unsigned short)1115), (((/* implicit */unsigned short) (signed char)-32))));
                        var_25 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64436)) ? (((/* implicit */int) arr_21 [i_1] [i_3] [i_1] [i_1])) : (((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) arr_23 [(unsigned short)9] [i_0 + 2] [i_8] [i_5] [i_8])) : (((/* implicit */int) (signed char)-12)))) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_8]))));
                        var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)63760)) <= (((/* implicit */int) (signed char)-69)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)49691)) : (((/* implicit */int) (unsigned short)15845)))) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)43097)) : (((/* implicit */int) (signed char)124)))))))));
                    }
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)32347)) ? (((/* implicit */int) (unsigned short)15620)) : (((/* implicit */int) arr_27 [(unsigned short)1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)19523))))))) ? ((((~(((/* implicit */int) (unsigned short)36520)))) % (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)16)))))) : (max((((((/* implicit */_Bool) (unsigned short)1579)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)59140)))), (((/* implicit */int) var_0))))));
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned short)63944)))) - (((((/* implicit */_Bool) (unsigned short)6392)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (unsigned short)40347))))));
                }
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)1591)))) ? (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (signed char)5)))) : (((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)25))))))) ? (min((((/* implicit */int) min((arr_5 [(signed char)6]), ((unsigned short)31668)))), (((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)31463)))))) : (((((/* implicit */_Bool) min(((signed char)79), ((signed char)-89)))) ? (((/* implicit */int) min(((signed char)88), (arr_1 [i_1])))) : (((/* implicit */int) ((unsigned short) (signed char)-65)))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_30 = (unsigned short)24837;
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (signed char)84))));
                        var_32 = ((signed char) (((!(((/* implicit */_Bool) (unsigned short)15897)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (signed char)62)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_33 ^= ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) (unsigned short)53781)) > (((/* implicit */int) (unsigned short)1)))) ? (((((/* implicit */_Bool) (unsigned short)9555)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)35550)))) : (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (unsigned short)15631)) : (((/* implicit */int) (signed char)5)))))));
                            var_34 = ((/* implicit */unsigned short) max(((((-(((/* implicit */int) (unsigned short)22030)))) % (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)98))));
                            var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)16817)))) ? (((/* implicit */int) max((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)5328)))))))) : (((((/* implicit */_Bool) (unsigned short)63962)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)99)) < (((/* implicit */int) (unsigned short)49026))))) : (((/* implicit */int) (unsigned short)5))))));
                            var_36 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) (signed char)101)) - (89)))))));
                        }
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            arr_46 [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16504)) ? (((/* implicit */int) (unsigned short)65504)) : (((/* implicit */int) (unsigned short)49011))));
                            var_37 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) arr_33 [i_10] [i_9] [(signed char)4])))), ((~(((/* implicit */int) (unsigned short)65508))))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) ((signed char) arr_15 [i_0] [i_0]));
                            arr_49 [i_13] [(unsigned short)7] [i_9] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (unsigned short)53422)))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)48367)) : (((/* implicit */int) (unsigned short)18545))))) ? (((/* implicit */int) (unsigned short)7048)) : (((((/* implicit */int) (unsigned short)49026)) ^ (((/* implicit */int) var_8)))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            var_40 = ((/* implicit */signed char) min((max((((/* implicit */int) (unsigned short)8666)), (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned short)53422)) : (((/* implicit */int) (signed char)127)))))), (((/* implicit */int) (unsigned short)12127))));
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)1151)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))));
                            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(unsigned short)8])) ? (((/* implicit */int) ((signed char) max(((unsigned short)49026), ((unsigned short)13315))))) : (((((/* implicit */_Bool) (unsigned short)52221)) ? (((/* implicit */int) (unsigned short)22850)) : (((/* implicit */int) (signed char)97))))));
                        }
                        arr_55 [i_0 + 2] [i_9] [i_9] [i_10] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_9] [i_9] [i_0 - 1] [i_0])) / (((/* implicit */int) arr_2 [i_0])))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52241)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-112))))) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_3))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_15 = 2; i_15 < 11; i_15 += 1) 
            {
                arr_58 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) (signed char)-45))));
                var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (unsigned short)22850))))))));
                var_43 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (unsigned short)58000)))), ((!(((/* implicit */_Bool) (unsigned short)22825))))));
            }
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48368)) ? (((/* implicit */int) arr_20 [i_0])) : (((/* implicit */int) (unsigned short)45730))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)48982))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65534)))))));
        }
        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)126)) - (((/* implicit */int) (signed char)107)))), ((~(((/* implicit */int) max(((signed char)68), ((signed char)26)))))))))));
            arr_62 [i_16] [i_16] = ((/* implicit */signed char) max(((unsigned short)44627), (((/* implicit */unsigned short) (signed char)-108))));
            arr_63 [(signed char)2] &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)6))));
            var_46 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned short)42682), (min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)42666)))))) ? (((((/* implicit */_Bool) (unsigned short)12318)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max(((signed char)123), ((signed char)100)))))) : (((((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_0 + 1])) * (((/* implicit */int) (signed char)-112))))));
        }
    }
}
