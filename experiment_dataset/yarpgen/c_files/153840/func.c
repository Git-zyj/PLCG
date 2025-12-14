/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153840
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
    var_12 ^= ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))) >> (((((var_0) - (((/* implicit */int) (unsigned char)22)))) + (685075175)))));
            var_14 = var_9;
            var_15 ^= ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)215))))));
            var_16 = var_2;
            var_17 ^= ((/* implicit */signed char) ((11928650142060656722ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(signed char)11])) % (((/* implicit */int) var_2))));
            var_19 = ((/* implicit */unsigned char) var_2);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */_Bool) var_0);
                var_21 = ((/* implicit */int) arr_3 [i_3]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) ((367258170) / (((/* implicit */int) (signed char)-38))));
                    var_23 = ((/* implicit */int) arr_13 [i_4] [i_4]);
                    var_24 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-3479))));
                    arr_15 [i_4] [i_4] = ((/* implicit */signed char) ((459335279U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) -2147483646);
                    var_26 = ((/* implicit */int) var_3);
                    arr_18 [i_0] [i_4] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                    var_27 = (~((+(((/* implicit */int) var_4)))));
                }
            }
            for (short i_7 = 2; i_7 < 9; i_7 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)76))));
                var_29 = ((/* implicit */int) (!(min(((_Bool)0), (arr_12 [i_0] [i_0] [i_0] [i_0])))));
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) -600957505))));
            }
            for (short i_8 = 2; i_8 < 9; i_8 += 3) /* same iter space */
            {
                var_31 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)16)))) - (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)26))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_26 [i_9] [i_8 - 1] [i_3] [i_3] [9] [i_0] = ((/* implicit */unsigned int) (+(600957498)));
                    var_32 = ((/* implicit */unsigned int) ((367258170) * (((/* implicit */int) arr_19 [i_8] [i_9]))));
                    var_33 = ((/* implicit */long long int) ((507644286) << (((600957496) - (600957495)))));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)1))));
                    arr_27 [8U] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) (signed char)-38)) < (((/* implicit */int) (!(((/* implicit */_Bool) 6518093931648894918ULL)))))));
                }
            }
            for (short i_10 = 2; i_10 < 9; i_10 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned int) var_5);
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((((((/* implicit */int) var_7)) - (var_1))) | (var_5))) | ((-(((((/* implicit */int) (signed char)123)) & (-600957505))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        var_37 = -507644265;
                        var_38 ^= ((600957532) / (((/* implicit */int) ((1796189705U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0ULL])))))));
                        var_39 = (((~(((/* implicit */int) (unsigned char)206)))) / (-1329094773));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-107)) >= (-70306637)))) >> (((((/* implicit */int) var_11)) + (1078)))));
                        var_41 = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_19 [(_Bool)1] [i_12]))))));
                    }
                    for (int i_13 = 1; i_13 < 11; i_13 += 4) 
                    {
                        arr_39 [i_0] [i_0] [i_10 - 2] [i_11] [i_11] [(signed char)3] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_0])) : (var_8)))));
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) var_6))));
                        var_43 = ((/* implicit */signed char) var_5);
                    }
                    for (unsigned char i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((3126406330U) - (((/* implicit */unsigned int) -1015735481))));
                        var_45 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                        arr_42 [i_0] [i_3] [i_10] = ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (unsigned char)194)));
                    }
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_46 = ((/* implicit */_Bool) var_5);
                        var_47 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) + (((var_3) - (var_3)))));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */short) arr_23 [i_10 - 1] [i_3] [i_10] [(signed char)9]);
                        var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) 1260352007))));
                    }
                    for (int i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned long long int) ((507644284) & (-729683407)));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [10ULL] [(signed char)6])))))));
                    }
                    var_52 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -729683409)) + (6518093931648894893ULL)));
                    var_53 = ((/* implicit */unsigned int) (short)-32756);
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    arr_54 [i_0] [i_0] [(unsigned char)8] [7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_2))));
                    var_54 = ((/* implicit */unsigned char) (short)-13747);
                }
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        var_55 &= ((/* implicit */unsigned int) ((((11928650142060656716ULL) << (((-1445442219) + (1445442267))))) << (((11928650142060656727ULL) - (11928650142060656677ULL)))));
                        var_56 = ((/* implicit */short) ((var_1) >> (((613822030) - (613822013)))));
                        var_57 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-55)), (429443091259956238ULL)));
                    }
                    var_58 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((((-2147483636) + (2147483647))) >> (((arr_61 [i_0] [i_0] [11ULL] [(unsigned char)0] [i_10 - 2] [i_19]) + (853831874))))), (var_0)))), (((((/* implicit */_Bool) (signed char)93)) ? (1U) : (((/* implicit */unsigned int) 386453974))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        arr_64 [i_0] [(short)9] [i_19] = ((/* implicit */int) var_3);
                        var_59 = ((/* implicit */unsigned short) var_3);
                    }
                }
            }
            var_60 = ((/* implicit */int) max((((/* implicit */short) max((var_10), (var_7)))), (max((((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0])), (var_11)))));
            arr_65 [i_3] [i_3] [9] = ((/* implicit */signed char) arr_43 [3] [3] [i_3] [i_3] [i_3]);
            /* LoopSeq 1 */
            for (int i_22 = 0; i_22 < 12; i_22 += 1) 
            {
                arr_70 [i_22] = (+(((/* implicit */int) min((arr_32 [i_3] [i_3] [i_3] [(signed char)1] [(signed char)0] [i_3]), (((/* implicit */unsigned short) var_7))))));
                var_61 = ((/* implicit */int) var_3);
            }
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            arr_74 [(unsigned char)10] = arr_61 [1] [i_23] [3] [i_0] [i_0] [i_0];
            var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) ((var_5) <= (arr_0 [i_23] [i_23]))))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            var_63 = (unsigned short)47122;
            var_64 += min((((/* implicit */int) arr_12 [(signed char)8] [i_0] [i_0] [i_24])), (((((/* implicit */int) (unsigned short)63746)) | (((/* implicit */int) (signed char)-81)))));
            var_65 *= ((((/* implicit */_Bool) (signed char)-59)) || (((/* implicit */_Bool) (short)-17)));
            var_66 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-13195))));
        }
        var_67 = ((/* implicit */signed char) -613822056);
    }
}
