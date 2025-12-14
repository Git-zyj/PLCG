/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118043
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
    var_19 = ((/* implicit */unsigned long long int) (short)22544);
    var_20 = ((/* implicit */signed char) var_10);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_21 |= ((/* implicit */signed char) (((!(arr_1 [9]))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) (unsigned char)208);
                    var_24 = (~((~(arr_3 [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_7 [i_1] [i_2] [i_1] [i_4]))))))));
                        arr_11 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_1 [i_1]))))));
                        var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3] [i_1] [i_4])) ? ((+(((/* implicit */int) arr_2 [i_2])))) : ((-(-611755994)))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_15 [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43277)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_15 [i_6] [i_5] [i_6])))));
                    var_28 = ((/* implicit */short) (+(((/* implicit */int) min(((signed char)-49), (((/* implicit */signed char) arr_1 [i_5])))))));
                    var_29 &= ((/* implicit */unsigned char) arr_5 [i_1]);
                    var_30 *= max((arr_16 [i_1] [(signed char)2] [i_6]), (((((/* implicit */_Bool) arr_16 [i_1] [(unsigned char)4] [i_6])) ? (arr_16 [i_1] [0] [i_6]) : (arr_16 [i_1] [(_Bool)1] [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_21 [i_7] [i_5] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : ((+(min((arr_0 [(short)7]), (((/* implicit */unsigned long long int) var_10))))))));
                        var_31 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_5] [i_6] [i_6] [i_7] [i_6]);
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1] [(unsigned short)5] [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))));
        arr_22 [i_1] = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1])) ? (611755993) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_13 [i_1] [i_1]))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) arr_26 [i_10] [i_8])))))))), (max((((arr_25 [i_8]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_4)))))))));
                arr_33 [i_9] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_8]))));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_34 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        var_35 = ((/* implicit */short) min((var_35), (var_7)));
                        arr_39 [i_9] [i_9] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */int) arr_26 [i_8] [i_9]);
                    }
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_17))));
                    var_37 *= arr_23 [i_8] [i_8];
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_8])))))))) ? (((/* implicit */unsigned long long int) (~(((arr_30 [i_8]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))))) : (var_2)));
                        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_24 [i_9])))));
                        var_40 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-32659))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_41 [i_13] [i_13] [i_13] [(unsigned char)13] [(_Bool)1])) : (var_11)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_42 [i_13] [i_9] [(short)20] [i_9] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_15), ((_Bool)1)))) >> ((((~(((/* implicit */int) arr_31 [i_8])))) + (4263)))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (-((+(((/* implicit */int) ((short) arr_26 [(short)5] [(short)5]))))))))));
                        var_42 = ((/* implicit */signed char) min((((short) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8])), (((short) var_3))));
                    }
                }
                for (signed char i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
                {
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((max((((((/* implicit */int) (short)22544)) <= (((/* implicit */int) arr_47 [i_8] [i_10] [(_Bool)1] [i_8])))), (arr_25 [i_8]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_8] [i_15])) * (((/* implicit */int) arr_26 [i_8] [i_9]))))) : (max((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) (short)-22544)) ? (2127911255998715671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
                    var_44 *= ((/* implicit */unsigned char) (~((~(18446744073709551610ULL)))));
                    var_45 ^= ((/* implicit */_Bool) (((_Bool)1) ? ((((-(((/* implicit */int) arr_47 [i_8] [i_15] [(unsigned short)16] [i_15])))) * (((int) arr_24 [(signed char)0])))) : (((/* implicit */int) arr_34 [(_Bool)1] [i_9] [i_15] [i_10] [(unsigned short)12] [i_15]))));
                    var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((max((var_2), (((/* implicit */unsigned long long int) (signed char)-50)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_45 [i_9] [i_9] [i_15] [i_9]), (((/* implicit */short) (signed char)-30)))))))) <= (((/* implicit */unsigned long long int) ((((_Bool) var_8)) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) (signed char)9))))) : (((/* implicit */int) arr_26 [i_15] [(signed char)3]))))))))));
                }
                for (signed char i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                {
                    var_47 = max((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_8))) < (((/* implicit */int) arr_49 [i_8] [i_9] [i_8] [i_16] [18ULL] [i_16]))))), ((-(((/* implicit */int) var_5)))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        arr_55 [i_8] [(short)2] [(unsigned char)18] [(signed char)14] [i_16] [(_Bool)1] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))))))), ((+((~(var_2)))))));
                        var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) min((var_18), (var_7))))))) && ((_Bool)1)));
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((1152921504606846976ULL), (((/* implicit */unsigned long long int) arr_51 [i_8] [i_16])))))))) | (((((/* implicit */int) ((_Bool) (_Bool)1))) / (((/* implicit */int) arr_35 [i_9] [i_10] [i_16] [i_17])))))))));
                        var_50 = ((/* implicit */short) (-((+(((/* implicit */int) var_15))))));
                        arr_56 [i_8] [i_10] [i_16] |= ((/* implicit */signed char) arr_48 [i_16] [i_9] [i_9] [i_9]);
                    }
                }
            }
            for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                arr_59 [i_18] [i_9] [i_18] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)9)) ? ((~(((/* implicit */int) (!((_Bool)1)))))) : (max(((~(((/* implicit */int) arr_30 [i_8])))), ((~(((/* implicit */int) arr_46 [i_8] [i_8] [(signed char)7]))))))));
                arr_60 [i_9] [i_9] [7] [i_18] = ((/* implicit */unsigned short) arr_30 [i_8]);
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_30 [i_8]) ? (((/* implicit */int) arr_62 [i_8] [i_8] [i_8] [i_19])) : (((/* implicit */int) arr_41 [i_9] [i_9] [i_18] [10] [i_18]))))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_8] [i_18] [i_19]))) : (arr_50 [i_9] [i_18] [(_Bool)1] [i_19])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_28 [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (short)-14678)) ? (((/* implicit */int) arr_61 [(short)3] [(short)12] [i_9] [i_19] [i_9])) : (((/* implicit */int) var_5)))))) : ((-(((/* implicit */int) min((arr_62 [13ULL] [i_18] [i_18] [21ULL]), (((/* implicit */short) arr_61 [i_8] [i_8] [i_9] [i_18] [(short)8])))))))));
                    var_52 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) var_0)))));
                    arr_63 [i_9] [i_18] [i_18] [i_9] [i_18] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [i_19] [i_19])), (max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_3)))))) : (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_3))))))));
                    arr_64 [i_9] [i_9] = ((/* implicit */signed char) arr_31 [i_19]);
                    var_53 = ((/* implicit */short) ((signed char) ((signed char) arr_47 [i_8] [i_9] [i_8] [i_8])));
                }
            }
            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((max((arr_51 [i_8] [i_9]), (((((/* implicit */int) arr_29 [18] [i_9])) > (((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_9] [2ULL])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_49 [i_8] [i_8] [i_8] [(_Bool)1] [(unsigned char)13] [(signed char)2])))) : (((/* implicit */int) (unsigned short)35234)))) : (((/* implicit */int) var_9)))))));
            arr_65 [(short)6] |= ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */int) arr_29 [(short)6] [(short)6])) - (((/* implicit */int) var_6)))) == (((/* implicit */int) var_15))))), (((((/* implicit */int) var_15)) - (((/* implicit */int) ((signed char) var_12)))))));
            var_55 = ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))) == (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)9))))), (((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
        }
        arr_66 [(_Bool)1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) ((unsigned char) arr_48 [10] [(short)10] [10] [i_8])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [(_Bool)1] [i_8] [(_Bool)1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(short)12] [i_8] [i_8] [i_8] [(short)12]))) : (var_2)))))));
    }
    var_56 = ((/* implicit */short) var_17);
}
