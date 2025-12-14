/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168457
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((arr_1 [(unsigned short)9]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (max((((/* implicit */unsigned long long int) arr_1 [9LL])), (var_17))))))));
        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)31539)) : (((/* implicit */int) (short)0))))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1814752598017123338ULL)) ? (((/* implicit */long long int) 0U)) : (((((/* implicit */_Bool) (((_Bool)1) ? (7696340754978371371LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) ? (((/* implicit */long long int) 4241364598U)) : (((((/* implicit */_Bool) (short)0)) ? (-3829720785975213748LL) : (((/* implicit */long long int) var_15))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((long long int) 4241364598U))))) < (((((/* implicit */_Bool) ((-12) * (((/* implicit */int) (short)-1))))) ? (min((var_1), (((/* implicit */long long int) (unsigned short)46626)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)49584))) < (var_17));
        var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? ((-(-9223372036854775795LL))) : (((/* implicit */long long int) var_12))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) min((2214875357U), (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_2])), ((~(((/* implicit */int) arr_7 [i_2])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 2; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_11 [i_3] [3U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) (short)1)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-14524)) ? (arr_13 [(_Bool)1] [i_3] [i_4] [i_4]) : (6235111460622571615ULL)))));
                    var_25 = ((/* implicit */short) 5000902U);
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(arr_13 [i_2] [i_3] [i_4] [i_5])));
                    var_26 &= ((/* implicit */unsigned char) ((unsigned int) var_16));
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_19 [i_3 + 1] [i_2] [i_4] [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) var_10);
                    var_27 = ((/* implicit */short) ((unsigned int) 571906762));
                }
                var_28 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4])))) ? (((/* implicit */int) (unsigned short)63619)) : (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-891))))));
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_24 [(_Bool)1] [i_7] = (+((+(((/* implicit */int) arr_9 [(unsigned short)23] [i_7])))));
                    var_29 = ((/* implicit */short) ((_Bool) var_2));
                }
                arr_25 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_23 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)21861)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            }
            for (long long int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8926))));
                var_31 = ((/* implicit */unsigned short) (short)2016);
                arr_29 [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-21861)) == (((/* implicit */int) arr_20 [i_3 - 2] [i_3] [i_3 - 2]))));
                var_32 ^= ((/* implicit */short) (~(arr_23 [i_3 - 1] [i_3 - 2])));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 3; i_10 < 23; i_10 += 4) 
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) ((unsigned char) arr_12 [i_2] [i_3 - 2] [i_9] [i_2]))) ? (((((/* implicit */_Bool) (short)3481)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_17))) : (((/* implicit */unsigned long long int) var_10))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        arr_35 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12)))) ? (((unsigned int) var_10)) : (((((/* implicit */_Bool) 316950234U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7696340754978371371LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21861))) : (arr_28 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1])));
                    }
                    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) (-((-(var_17)))));
                        arr_38 [i_2] [i_3] [i_9] [i_2] [i_9] [i_10] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30863)) ? (((/* implicit */int) (unsigned char)238)) : (((((/* implicit */_Bool) (unsigned short)2313)) ? (((/* implicit */int) arr_37 [i_2] [i_3])) : (2046)))));
                        arr_39 [i_9] [i_3 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) 6878052922428235831LL));
                        arr_40 [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_12))));
                    }
                    var_36 = ((/* implicit */short) var_12);
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 4) 
            {
                var_37 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_13 [i_2] [i_3] [i_13] [i_3]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2]))) > (var_1)))) : (((/* implicit */int) ((unsigned short) var_12)))));
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6049))) ^ (var_10))))));
            }
            var_39 ^= ((/* implicit */long long int) (unsigned short)48028);
        }
        for (short i_14 = 2; i_14 < 23; i_14 += 2) /* same iter space */
        {
            var_40 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) (-(16631991475692428265ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) - (min((((/* implicit */unsigned long long int) var_7)), (var_17)))))));
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) max((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2]))) : (739947966555064917LL))), (((/* implicit */long long int) ((unsigned char) var_14))))), (((/* implicit */long long int) (~(425451248)))))))));
            var_42 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((unsigned int) var_13))))));
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_9 [i_14 + 1] [i_14 + 1]))));
        }
        var_44 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) arr_26 [i_2] [11] [i_2]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_13 [i_2] [i_2] [i_2] [i_2]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1214418772U)) ? (((/* implicit */int) (unsigned char)128)) : (-1278465029))))));
        arr_45 [i_2] = ((long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (_Bool)1))))) && ((!(((/* implicit */_Bool) arr_32 [i_2]))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
    {
        var_45 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((7779449536402514791ULL), (((/* implicit */unsigned long long int) var_6)))) : (8062662401144331594ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [i_15 + 3] [i_15 - 1])) != (((/* implicit */int) (unsigned char)159)))))));
        arr_50 [(unsigned short)24] [i_15] |= ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)11106)) ? (var_9) : (((/* implicit */int) arr_48 [i_15 + 1] [i_15 + 1]))))))) : (((/* implicit */long long int) min(((-(var_12))), (((/* implicit */unsigned int) var_0))))));
    }
    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_7)) ^ (var_10))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)11835)))))))));
}
