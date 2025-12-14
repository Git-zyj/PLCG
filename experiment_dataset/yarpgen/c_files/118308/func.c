/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118308
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
    var_19 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 1463655223)) ? (12947668797355555580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [7ULL] [7ULL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)79))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)245)), (var_3)))))))));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_3 - 1])) ? ((+(((/* implicit */int) (unsigned short)18376)))) : (((/* implicit */int) min((var_13), (var_6))))))) ? (873410182441490078LL) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)229)) : (arr_0 [i_0] [i_1]))))))));
                        var_21 = ((/* implicit */unsigned long long int) ((-7336882884736759557LL) / (((/* implicit */long long int) 1446940875))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */int) var_5);
        var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_0] [(unsigned short)21] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [17ULL] [i_0]))) : (min((var_12), (((/* implicit */long long int) arr_2 [i_0]))))))) && (((/* implicit */_Bool) (+(-2147483643))))));
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_23 ^= ((/* implicit */short) var_14);
            /* LoopSeq 3 */
            for (short i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                arr_18 [i_0] [i_4] [i_5 + 1] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((-753294888), (arr_15 [i_0] [i_4] [i_5])))) == (((((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)20] [i_0])) ? (arr_4 [i_5] [i_4] [i_0]) : (5567035181019031113ULL)))))) <= (((/* implicit */int) arr_9 [i_0] [i_4] [i_5 + 3])));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (short)-15883))));
            }
            for (signed char i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (+(14ULL)));
                            arr_25 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((8896054636972396143ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_8 - 2]))))) ? (((((/* implicit */_Bool) 268413196)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9599))))) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_30 [i_9] [i_4] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -147885443)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12736))) != (4142868536U)))) : (((/* implicit */int) (unsigned char)161))))) ? (((((((/* implicit */int) arr_17 [i_0] [i_4] [i_6 - 1])) - (((/* implicit */int) var_4)))) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 18446744073709551611ULL))))))) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_31 [i_4] [i_4] [(unsigned char)20] [i_4] [i_4] [i_4] |= ((/* implicit */_Bool) arr_4 [i_6] [i_6] [i_6 - 1]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_34 [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_9 - 1])) : (((/* implicit */int) var_13))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((-9223372036854775798LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))) ? (((/* implicit */int) ((((/* implicit */int) (short)27182)) > (((/* implicit */int) arr_2 [15U]))))) : (((((/* implicit */_Bool) 1219352752U)) ? (((/* implicit */int) (short)21765)) : (-416393014))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 - 2] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6 - 2] [i_0])))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_16)), (((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */int) (short)32760)) : (((/* implicit */int) (unsigned short)65504)))))))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(min((max((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_11] [i_9]))), (((((/* implicit */_Bool) arr_24 [i_0] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2])) ? (arr_15 [i_0] [i_6] [i_9 - 1]) : (((/* implicit */int) var_16)))))))))));
                        arr_39 [i_4] [i_9 - 1] [i_9] = var_7;
                        arr_40 [i_0] [i_4] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)20] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_9] [i_0] [i_4]))) : (arr_20 [i_0] [i_4] [i_4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)86))))) ? (1920492013) : (((((/* implicit */_Bool) (short)22373)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        arr_43 [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_4] [i_6]))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-119)) : (arr_38 [i_0] [i_9] [i_4] [i_6] [i_6] [i_9] [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47800)) || (((/* implicit */_Bool) (unsigned char)184)))))) : (arr_24 [i_0] [i_0] [i_6 - 2] [i_9] [(unsigned char)4])))));
                        arr_44 [i_0] [i_9] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1846493889)) != (min((2640833062U), (((/* implicit */unsigned int) (unsigned char)203))))))), (10650308821984269847ULL)));
                        arr_45 [i_9] [i_0] [i_6 - 3] [(unsigned char)8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-9223372036854775807LL - 1LL)))) + (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) + ((-9223372036854775807LL - 1LL))))))));
                        arr_46 [i_4] [i_4] [i_4] [i_9 - 1] [i_12] [i_9] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-2025187114) > (((/* implicit */int) (unsigned char)235))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? ((((_Bool)1) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_6] [i_12 - 1])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_35 [i_9])) : (((/* implicit */int) (unsigned char)15))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        arr_51 [i_9] [i_0] [i_6] [i_4] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 10329843472704551534ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6 - 1])) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [19U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] = (-(arr_4 [i_9 - 1] [i_9 - 1] [i_9 - 1]));
                    }
                    arr_53 [(unsigned char)5] [i_9] [i_4] [i_6 - 1] [i_6 - 1] [i_4] = ((/* implicit */signed char) max(((+(4079286195U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)42341)))) : (arr_15 [i_6] [i_6] [i_6]))))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)61)) ? ((+(min((((/* implicit */long long int) var_8)), (arr_24 [13] [i_4] [i_6] [13] [i_15]))))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                        arr_60 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-2147483645) > (((/* implicit */int) (unsigned char)55))))) <= ((~(((((/* implicit */int) arr_12 [i_6 - 3] [i_6 - 1] [i_6 - 3])) | (((/* implicit */int) arr_56 [i_0] [i_4] [(unsigned short)15] [6ULL]))))))));
                        arr_61 [i_0] [i_4] [i_6 - 3] [i_14] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)9);
                    }
                    arr_62 [i_0] [i_0] [i_4] [i_4] [i_6] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2996964249846316802LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (((((/* implicit */_Bool) 4408717139137462318LL)) || (((/* implicit */_Bool) (unsigned short)5984))))))) >> (((((/* implicit */int) var_13)) - (((/* implicit */int) min((((/* implicit */short) arr_16 [i_0] [i_0] [i_6])), (var_13))))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_17)))) / (((((/* implicit */_Bool) arr_55 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) var_13)))))), (((((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)0])) && (((/* implicit */_Bool) arr_35 [i_4])))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_41 [i_0] [i_4] [i_4] [i_6] [i_6] [6])))))))));
                    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((+(((((/* implicit */int) var_8)) * (((/* implicit */int) arr_49 [i_0] [i_4] [i_6 - 1] [i_4] [10]))))))));
                }
            }
            /* vectorizable */
            for (short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                arr_65 [i_4] [i_16] = ((/* implicit */long long int) arr_5 [i_0] [i_4]);
                arr_66 [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [(unsigned char)18])) ? (var_9) : (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_4])) ? (((/* implicit */int) arr_26 [i_0] [5LL] [i_16] [i_0])) : (((/* implicit */int) var_2)))))));
                /* LoopSeq 3 */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7732700381397164926LL)) ? (((/* implicit */int) arr_63 [(unsigned char)0] [i_4] [i_0])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */int) var_18)) & (((/* implicit */int) (unsigned short)4372)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_63 [i_0] [i_0] [i_17])) : (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0]))))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_4] [i_17 - 1] [i_17 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_16] [i_17]))) : (((((/* implicit */unsigned long long int) arr_50 [i_0])) ^ (var_10))))))));
                    arr_70 [i_0] [i_0] [i_4] [i_16] [i_16] [i_17] = ((((/* implicit */int) arr_42 [i_4] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1])) + (((/* implicit */int) arr_42 [i_4] [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1])));
                    arr_71 [i_0] [i_4] [i_16] [i_4] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_4] [i_16] [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (arr_21 [i_0] [i_0] [i_0] [i_17] [(unsigned char)6])))));
                }
                for (long long int i_18 = 2; i_18 < 20; i_18 += 2) 
                {
                    var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_18 - 1] [i_16] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) + (18446744073709551593ULL)))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_4] [i_18 - 1])))))));
                }
                for (unsigned char i_19 = 1; i_19 < 19; i_19 += 1) 
                {
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (unsigned char)226))));
                    /* LoopSeq 2 */
                    for (signed char i_20 = 3; i_20 < 20; i_20 += 3) 
                    {
                        var_37 ^= arr_73 [i_0] [i_4] [i_16];
                        var_38 = ((/* implicit */unsigned char) arr_15 [i_0] [i_16] [i_20 - 2]);
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_20 - 2] [i_19 + 1] [i_19 + 1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17067))) : (17567388354337498479ULL))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                    {
                        arr_82 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((arr_59 [i_21] [i_21] [i_19] [i_19 + 1] [i_16] [i_4] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) var_0))))))));
                        arr_83 [i_21] [i_21] [15U] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_49 [(unsigned char)12] [i_19 + 1] [i_19 + 3] [i_4] [i_19])) - (((/* implicit */int) arr_5 [i_0] [i_16]))));
                        arr_84 [i_4] [i_19] [i_16] [i_19] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) : (4560134848757794953ULL)));
                        var_40 = ((/* implicit */unsigned long long int) var_11);
                    }
                }
            }
            arr_85 [i_0] [i_4] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)11721)) > (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))))), (((((((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_4] [i_4] [i_0])) * (14194613385779047923ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1409194198U)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (short)-4180)))))))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 22; i_22 += 2) 
            {
                for (unsigned long long int i_23 = 3; i_23 < 20; i_23 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned char) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)246)))))));
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_4] [i_0])) == (((/* implicit */int) var_18)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-22947), (((/* implicit */short) arr_88 [i_0] [i_4] [i_22] [i_23])))))) : (min((((/* implicit */long long int) (-2147483647 - 1))), (var_12)))))), (arr_4 [i_4] [i_22] [i_23 - 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_24 = 3; i_24 < 21; i_24 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) min((min((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_22] [i_22] [i_22] [i_24 - 1])), (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) max((var_11), (((/* implicit */short) arr_87 [i_0]))))), (((((/* implicit */int) var_7)) - (arr_68 [i_0] [i_0] [i_0] [i_0]))))))))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_0] [i_4] [i_22] [i_23 - 1] [(_Bool)0])) ^ (((((((/* implicit */_Bool) arr_19 [i_4] [i_22])) ? (((/* implicit */int) arr_17 [i_0] [i_4] [i_23])) : (arr_73 [i_0] [i_0] [i_0]))) & (((arr_15 [i_0] [(unsigned short)0] [i_0]) ^ (((/* implicit */int) arr_74 [i_4])))))))))));
                        }
                        arr_94 [i_0] [i_4] [i_4] [i_22] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_58 [i_4] [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_23])))) ? ((((_Bool)0) ? (arr_78 [i_22]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7384449936384778654LL)))))) : (((((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_4] [i_0] [i_23 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_86 [i_0] [i_0] [i_0] [i_0]))) : (arr_20 [i_23] [(unsigned short)16] [i_0]))) * (((/* implicit */unsigned long long int) max((-900775936), (arr_73 [i_23] [i_22] [i_0]))))))));
                        var_45 = (+(((/* implicit */int) (unsigned char)87)));
                    }
                } 
            } 
        }
        for (unsigned char i_25 = 0; i_25 < 22; i_25 += 2) 
        {
            var_46 = ((/* implicit */unsigned long long int) var_11);
            arr_97 [i_0] [i_25] [i_25] = ((/* implicit */unsigned short) max(((unsigned char)88), ((unsigned char)55)));
            arr_98 [i_0] [3] = ((/* implicit */signed char) (unsigned char)185);
        }
        for (unsigned char i_26 = 4; i_26 < 20; i_26 += 2) 
        {
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_78 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) | (3735327744U)))) ? (var_1) : (1731222812098496799ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_35 [i_0])) ? (((/* implicit */int) var_5)) : (var_0))))))));
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (7473027082135800158LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))))));
        }
    }
    var_49 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) != (13951229236182441478ULL)));
    var_50 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)9860)) : (((/* implicit */int) var_6)))))) == (((/* implicit */int) var_4))));
}
