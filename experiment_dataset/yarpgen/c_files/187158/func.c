/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187158
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) 315271894576388952LL)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) 3196533742818007898ULL);
            var_21 += ((/* implicit */long long int) (signed char)-60);
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 17764280419964280245ULL;
                            arr_15 [i_4] [14LL] [i_2] [2LL] [i_1] [(signed char)21] [(signed char)21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? ((-(arr_10 [i_0] [i_1] [14U] [i_3] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(330383261U))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((min((arr_13 [i_0] [i_1] [i_2]), (arr_13 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0])))))));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)32);
            }
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_19 [i_5] [i_1] [23ULL] [i_5] = ((/* implicit */unsigned char) max((15250210330891543718ULL), (var_15)));
                arr_20 [(unsigned char)23] [21U] [i_5] [i_5] = ((3196533742818007898ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))));
            }
            for (long long int i_6 = 2; i_6 < 22; i_6 += 3) 
            {
                arr_23 [7U] [i_1] = ((/* implicit */unsigned short) var_4);
                arr_24 [(short)19] [i_1] [i_1] [i_1] = var_9;
                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 68141447610090963LL)) >= (min((((/* implicit */unsigned long long int) arr_4 [i_6 + 2] [i_6 + 1] [i_1])), (3196533742818007898ULL)))));
            }
            for (short i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) max((-6457436519097936181LL), (((/* implicit */long long int) (unsigned short)17)))));
                    var_24 = (signed char)64;
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_33 [i_9] [i_0] [i_0] [6LL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_22 [i_0]))))));
                        var_25 = ((/* implicit */int) min((var_25), (arr_4 [i_9] [i_1] [i_7])));
                        arr_34 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */signed char) arr_18 [i_0] [i_7] [i_1] [i_9]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */int) (signed char)-110)) / (((/* implicit */int) (unsigned short)65518))))))));
                        arr_39 [i_10] [i_8] [i_7] [i_1] [i_0] = ((/* implicit */signed char) (~(((long long int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_40 [i_0] [i_0] [i_1] [i_7] [i_7] [i_8] [i_10] = ((/* implicit */signed char) (unsigned short)65518);
                        arr_41 [12ULL] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) var_4)), (((int) 1812944822U))))), (max((((/* implicit */long long int) min(((signed char)-74), ((signed char)-60)))), (arr_7 [i_10] [i_7] [i_1] [i_0])))));
                    }
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_7))));
                }
                var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)10)), (15250210330891543718ULL)));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) min((((/* implicit */long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)55138))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (2U) : (3900563424U)))), (6221945340615839824LL))))))));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-8426764323419887493LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_7])))))))) ? (((/* implicit */int) (signed char)89)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                arr_42 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_2);
            }
        }
    }
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        arr_45 [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-76))));
        arr_46 [i_11] = (signed char)3;
        arr_47 [i_11] |= ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)31405)), (var_15))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30578)))));
        arr_48 [i_11] = ((/* implicit */unsigned long long int) var_7);
        var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((4632392957046393115LL) / (arr_11 [i_11] [22LL])))) ? (((/* implicit */unsigned long long int) arr_26 [i_11] [i_11] [i_11] [i_11])) : (var_15))) : (var_15)));
    }
    /* LoopSeq 4 */
    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_31 = ((/* implicit */long long int) var_4);
        arr_52 [i_12] [(signed char)8] = ((/* implicit */signed char) (-((((_Bool)0) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_43 [0] [i_12])))))))));
    }
    for (unsigned short i_13 = 2; i_13 < 10; i_13 += 2) 
    {
        arr_55 [i_13] [i_13] = (-(max((((/* implicit */long long int) ((arr_25 [(unsigned char)3] [i_13] [i_13]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))))), (5385038464839754072LL))));
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            arr_59 [i_14] [10ULL] [10U] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-60)))), (((/* implicit */int) ((unsigned char) 3900563424U)))));
            arr_60 [i_14] [i_13] [i_14] |= ((/* implicit */unsigned long long int) var_1);
        }
        /* LoopSeq 4 */
        for (unsigned short i_15 = 2; i_15 < 9; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 3; i_16 < 8; i_16 += 2) 
            {
                for (long long int i_17 = 3; i_17 < 10; i_17 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (var_10))));
                        var_33 += ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            var_34 = ((/* implicit */signed char) arr_35 [i_15 - 2] [i_15 - 2] [i_15] [i_15] [19LL]);
            var_35 = var_15;
            /* LoopNest 2 */
            for (signed char i_18 = 4; i_18 < 8; i_18 += 4) 
            {
                for (signed char i_19 = 3; i_19 < 10; i_19 += 4) 
                {
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (unsigned short)18507)) : (((/* implicit */int) (unsigned char)56))))) ? (arr_75 [5U] [5U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17)))))) ? ((~(((/* implicit */int) arr_29 [i_19])))) : (((int) var_2))));
                        arr_76 [i_15] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)28672)), (var_13)))) ? (max((6110115248962897508LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)7193)) : (((/* implicit */int) arr_58 [(unsigned short)0] [(unsigned short)0]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_8))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (min((3159107733U), (((/* implicit */unsigned int) (signed char)96))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_74 [i_13 - 2]))))) : (((long long int) (-(var_16))))));
        }
        for (unsigned char i_20 = 4; i_20 < 8; i_20 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) var_1)), (var_15))))))));
            var_39 |= ((/* implicit */signed char) (unsigned short)13332);
            var_40 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 1624973229U)) ? (911508418U) : (4294967295U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) var_5)))))))), ((-(((unsigned long long int) arr_72 [3LL] [i_13] [i_13]))))));
        }
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
            {
                arr_84 [i_21] [i_21] [i_22] [0LL] = ((_Bool) (signed char)-96);
                arr_85 [(signed char)2] [0U] [i_21] [i_13] |= ((/* implicit */unsigned int) var_1);
                arr_86 [i_13] [(signed char)8] [i_21] [i_13] |= ((/* implicit */signed char) (+(var_11)));
                var_41 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27))) <= (1529138535111512514ULL)));
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((7411667631766921484LL) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))))))));
            }
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) 8589934591ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6280))))))));
            arr_87 [i_21] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [(unsigned char)18]))));
        }
        for (long long int i_23 = 3; i_23 < 7; i_23 += 1) 
        {
            var_44 = ((/* implicit */unsigned char) arr_82 [i_13] [i_13] [(short)2]);
            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))));
            arr_90 [i_23] [i_23] [i_23] = ((((/* implicit */_Bool) (signed char)45)) || (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)16)), (5601568950716414709LL)))));
        }
        arr_91 [(unsigned char)6] [i_13 - 2] = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) 4217597002U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)53554)))), (max((((/* implicit */int) (signed char)15)), (((((/* implicit */int) arr_3 [(signed char)20])) | (((/* implicit */int) (unsigned char)31))))))));
    }
    for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
    {
        var_46 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)18343)), (1099808419U)));
        /* LoopNest 2 */
        for (unsigned int i_25 = 1; i_25 < 11; i_25 += 2) 
        {
            for (signed char i_26 = 0; i_26 < 13; i_26 += 3) 
            {
                {
                    var_47 = ((/* implicit */unsigned long long int) min((var_47), ((~(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16638)) < (((/* implicit */int) (signed char)101))))), (max((0ULL), (((/* implicit */unsigned long long int) (signed char)57))))))))));
                    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) 16167571880819441416ULL)) ? (7371940334142830366LL) : (((/* implicit */long long int) var_13))));
                    arr_99 [i_24] [i_25] [i_25] = (short)0;
                    var_49 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-69))))), (min((((((/* implicit */_Bool) arr_92 [(signed char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (1872776333U))), (((/* implicit */unsigned int) var_7))))));
                }
            } 
        } 
        arr_100 [i_24] = ((/* implicit */unsigned int) ((((long long int) var_12)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)52185), (((/* implicit */unsigned short) (signed char)101))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114)))))) : (((unsigned int) (signed char)-114)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_27 = 0; i_27 < 18; i_27 += 2) 
    {
        var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)56323))));
        var_51 = ((/* implicit */long long int) 2526097713U);
        var_52 = ((/* implicit */_Bool) (unsigned short)12271);
    }
}
