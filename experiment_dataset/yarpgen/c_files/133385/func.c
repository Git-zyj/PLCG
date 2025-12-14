/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133385
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)48))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)58))))) ? (((((/* implicit */int) ((((/* implicit */int) (short)-23099)) < (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) max((var_1), (((/* implicit */short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7)))))))))))));
    var_14 = ((/* implicit */short) (-(((/* implicit */int) (signed char)24))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [8] [i_0])) ? (((((((/* implicit */int) arr_3 [(unsigned char)16])) + (2147483647))) << (((((((/* implicit */int) arr_3 [(short)2])) + (9731))) - (24))))) : (((/* implicit */int) min(((short)867), (((/* implicit */short) var_12)))))))), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)48)), ((short)(-32767 - 1))))) ? ((((_Bool)1) ? (((/* implicit */long long int) 2188635940U)) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [6]))))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1838647505) : (((/* implicit */int) var_7))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_2))))))))) : (((((/* implicit */_Bool) (short)-26495)) ? ((-(5894068061276746208ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) (_Bool)1)))))))))))));
    }
    var_17 = ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((var_3) >= (arr_6 [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_0)))))))));
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-38))));
            arr_8 [i_1] = ((/* implicit */short) var_6);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_1] [i_3 - 1] = ((/* implicit */long long int) max((max((2188635928U), (((/* implicit */unsigned int) (unsigned char)31)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)12)) % (((/* implicit */int) (unsigned char)225)))))));
            arr_13 [i_1] = ((/* implicit */int) var_11);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_6] [i_3] [i_3] [i_3 - 1] = ((/* implicit */unsigned int) (unsigned char)247);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (((-(arr_19 [i_6] [i_5] [i_4] [i_3 - 1] [i_1]))) ^ (((/* implicit */int) var_2)))))));
                            var_21 |= ((/* implicit */signed char) arr_21 [i_6 - 1] [i_3] [i_4 + 3] [i_5] [i_3 - 1]);
                        }
                    } 
                } 
                arr_24 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_1] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1])) & (((/* implicit */int) arr_11 [i_3 - 1] [i_4 + 1]))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_11))));
                            arr_30 [i_4] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_4))))));
                            var_23 = ((/* implicit */unsigned int) (~(((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_4 + 3]))))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_3]))))), (max((-7455522789678615839LL), (((/* implicit */long long int) max((var_8), (((/* implicit */short) var_0))))))))))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_1] [i_1] [i_1] [i_1]))) : (arr_32 [i_1] [i_9]))))));
            /* LoopNest 3 */
            for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12] [i_11] [i_10] [i_9] [i_1]))) : (189623545U)))) ? (((/* implicit */int) (_Bool)0)) : ((+(arr_41 [i_1] [i_9] [i_10] [i_11]))))))));
                            var_27 = ((/* implicit */long long int) var_10);
                            var_28 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_10 - 2] [i_12 + 1])) : (((/* implicit */int) arr_39 [i_9] [i_9] [i_10] [i_10 + 1] [i_12 + 1]))));
                            var_29 = ((((((/* implicit */int) (signed char)-62)) & (((/* implicit */int) var_11)))) > (((/* implicit */int) arr_15 [i_1] [i_9] [i_12])));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]))))) | (var_10)));
        }
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_1])))), ((+(((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 13; i_14 += 2) 
            {
                for (unsigned char i_15 = 1; i_15 < 12; i_15 += 2) 
                {
                    {
                        arr_54 [i_15] [i_15] [i_14] [i_13] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)157)), (arr_52 [i_1] [i_13])))) ? ((+(((/* implicit */int) (short)-5306)))) : ((+((~(arr_9 [i_1] [i_13])))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            arr_57 [i_1] [i_13] [i_14] [i_15] [i_16] = (~(((unsigned int) var_12)));
                            arr_58 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                            var_32 = ((/* implicit */signed char) arr_14 [i_14] [i_16]);
                            arr_59 [i_1] [i_13] [i_14] [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) var_2);
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            arr_62 [i_1] [i_17] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2207)) ? (608627964U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            arr_63 [i_1] [i_13] [i_14 + 1] [i_15] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (~(750896531317766579ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_1] [i_15] [i_14] [i_15] [i_17]))))) : (7770024696006427037ULL)));
                        }
                        arr_64 [i_1] [i_13] [i_14 + 1] [i_13] = ((/* implicit */unsigned int) ((300903072268286292ULL) % (((/* implicit */unsigned long long int) 1177705409U))));
                        arr_65 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_34 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [i_14] [i_13])))) & (((/* implicit */int) arr_47 [i_14 + 1] [i_15 + 2]))))) ? ((~((-(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (short)-460)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        arr_68 [i_18] = ((/* implicit */unsigned char) min(((short)32755), (((/* implicit */short) (signed char)(-127 - 1)))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) arr_25 [i_18])) : (((/* implicit */int) arr_25 [i_18]))))) : (((((/* implicit */_Bool) (signed char)-4)) ? (((arr_29 [i_18] [i_18]) << (((((/* implicit */int) var_8)) + (4019))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_6)), (var_4)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                {
                    arr_74 [i_18] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-121)), (var_12)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_18] [i_19] [i_20] [i_19] [i_19] [i_20] [i_20])) : (((/* implicit */int) (_Bool)1))))) : ((-(arr_6 [i_18]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)157)) | (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (short)-5324)) ? (((/* implicit */int) (short)5267)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-15240)))))));
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_11)) - (116)))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_53 [i_18] [i_19] [i_20] [i_21])) % (((/* implicit */int) var_1)))))), (((/* implicit */int) (_Bool)1)))))));
                                arr_80 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) (~(((/* implicit */int) arr_39 [i_21] [i_21] [i_21] [i_21] [i_21]))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */int) ((short) ((((/* implicit */int) var_7)) != ((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
                    var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((arr_75 [i_18] [i_20]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_18]))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) max((arr_72 [i_20]), (((/* implicit */unsigned long long int) -1075614621))))) ? (var_10) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                }
            } 
        } 
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) min((((/* implicit */unsigned long long int) max(((short)11290), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10))))))));
        var_38 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) arr_75 [i_18] [(signed char)2])) ? (arr_75 [i_18] [(signed char)8]) : (var_10)))));
    }
    for (short i_23 = 0; i_23 < 22; i_23 += 4) 
    {
        var_39 = ((/* implicit */int) var_1);
        arr_83 [i_23] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 816674567951329836LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (7770024696006427037ULL))))) < (7312707297774889445ULL)));
        /* LoopNest 3 */
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 1) 
        {
            for (signed char i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                for (signed char i_26 = 0; i_26 < 22; i_26 += 3) 
                {
                    {
                        var_40 |= ((/* implicit */short) (signed char)52);
                        arr_91 [i_25] [i_23] [i_25] [i_25] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_90 [i_26] [i_24] [i_23])), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_0))))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_1 [i_25] [i_25]), (((/* implicit */unsigned char) (signed char)-4))))), (((((/* implicit */_Bool) 6042241434845651105ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3)))))) : (min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_90 [i_23] [i_25] [i_26])))), (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_42 = (signed char)16;
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [i_23] [i_23] [i_23]))));
    }
}
