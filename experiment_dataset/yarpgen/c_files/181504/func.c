/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181504
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
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 260046848)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))), ((+((+(2147483647)))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (unsigned short)49718)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) (+(var_14)))))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(-3987961630165173947LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)1))))) << (((/* implicit */int) ((((/* implicit */_Bool) -677847131)) || (((/* implicit */_Bool) (unsigned char)255)))))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)-19903)))), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (var_14))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2]))))) && (((/* implicit */_Bool) ((var_8) ? (max((((/* implicit */unsigned int) arr_6 [i_2])), (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_20 |= max((max((((long long int) 8179061966837706138LL)), (((/* implicit */long long int) arr_6 [i_2])))), (((/* implicit */long long int) (unsigned char)153)));
                    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_4] [i_2] [i_2] [i_2])), (var_11))))))), (((unsigned long long int) var_13))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        arr_26 [i_5] [(unsigned short)9] [i_7] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) ((_Bool) -2207579748441269684LL))) : (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)69))))));
                        var_22 ^= ((/* implicit */_Bool) (~(max((((8179061966837706138LL) | (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_13))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_9] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 1214900409U)))))) : (((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 2305843009213562880LL)) ? (-8179061966837706139LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69)))))))));
            var_24 -= ((/* implicit */signed char) max(((~(arr_22 [i_5]))), (((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9]))) < (var_15)))), (((signed char) var_6)))))));
            arr_29 [i_9] = ((/* implicit */int) ((long long int) ((_Bool) (short)25922)));
            var_25 = (~(((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (unsigned short)38088)) : (((/* implicit */int) (_Bool)1)))));
            var_26 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (short)-4961)) != (((/* implicit */int) arr_18 [i_5]))))) == (((/* implicit */int) max((((/* implicit */short) var_12)), ((short)-25919)))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) / (min((-4483223363527679339LL), (((/* implicit */long long int) 2147483647)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        var_27 = min((((/* implicit */long long int) -984049246)), (-4483223363527679339LL));
                        var_28 = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_21 [i_5] [i_5] [i_11] [4LL]))))));
                        var_29 = ((/* implicit */signed char) (~(((int) arr_12 [i_12] [i_5] [i_10] [i_5]))));
                    }
                } 
            } 
            var_30 = ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) 2714839996U)) > (-4596977494673069235LL)))), (var_2))))));
        }
        for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
        {
            /* LoopSeq 4 */
            for (short i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                var_31 -= ((/* implicit */long long int) (+(((/* implicit */int) ((short) (+(arr_17 [i_14])))))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (var_1)))) && (((((/* implicit */long long int) var_14)) <= (arr_33 [i_13] [i_13] [i_14])))))) != (((/* implicit */int) ((_Bool) arr_41 [i_14 - 1] [i_14] [i_5] [i_14 - 1]))))))));
            }
            for (int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                arr_47 [3] [i_13] [15LL] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((arr_9 [i_5]), (arr_24 [4ULL] [i_5] [i_5] [i_5])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((-1909475940797921313LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((int) var_3))) > (((((/* implicit */_Bool) (signed char)-69)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17713))))))) ? (((((/* implicit */_Bool) 3880999140U)) ? ((+(var_7))) : ((+(((/* implicit */int) (unsigned char)54)))))) : (max((((/* implicit */int) ((4265665854214559740ULL) >= (((/* implicit */unsigned long long int) 3103413167U))))), (var_9))))))));
            }
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                var_34 ^= ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_13] [i_16]))))), ((~(((/* implicit */int) var_12))))));
                var_35 = ((/* implicit */_Bool) max((min((max((((/* implicit */long long int) (signed char)-33)), (8179061966837706121LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_13)), (var_0)))))), (((/* implicit */long long int) var_0))));
                var_36 = ((/* implicit */long long int) ((unsigned short) arr_37 [i_13] [i_13] [i_13] [(signed char)16]));
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)4962)) ? (((/* implicit */int) arr_23 [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1])) : (((/* implicit */int) var_6))))) != (((long long int) (_Bool)1))));
                var_38 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))), (2305843000623759360LL))));
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_39 = ((/* implicit */_Bool) min(((+(var_14))), (((/* implicit */unsigned int) arr_44 [i_18] [i_17 + 1] [i_13] [13LL]))));
                    var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (((/* implicit */int) (_Bool)0)) : (arr_50 [i_5])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_36 [i_5] [i_13] [i_17] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [(signed char)4] [i_13] [13U] [(signed char)4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */unsigned int) 316162361)) : (var_14)))))), (((/* implicit */long long int) (~(arr_7 [i_18])))))))));
                }
                for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 4; i_20 < 19; i_20 += 1) 
                    {
                        arr_63 [(_Bool)0] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_8)), (((arr_53 [i_5] [i_13] [i_17] [i_13]) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_41 = ((/* implicit */long long int) ((max((max((((/* implicit */long long int) var_4)), (arr_58 [i_17] [i_20] [i_17 + 1] [i_19]))), (max((6925636257875885249LL), (((/* implicit */long long int) 2118610236)))))) == (((/* implicit */long long int) (-(max((((/* implicit */unsigned int) -1299369643)), (var_11))))))));
                    }
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (((-(((/* implicit */int) var_12)))) * (((/* implicit */int) ((short) (short)32753))))))));
                }
                for (int i_21 = 1; i_21 < 19; i_21 += 4) 
                {
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) -230987060)) : (((((/* implicit */_Bool) arr_57 [i_5] [i_5] [i_5] [i_5])) ? (-6925636257875885228LL) : (((/* implicit */long long int) -1241305333))))))) ? ((~(arr_33 [i_5] [i_5] [i_21 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483647)))) && ((((_Bool)1) || (((/* implicit */_Bool) var_9)))))))))))));
                    var_44 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_14))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_21 - 1] [i_21] [i_17 + 1] [i_5]))) : (((((/* implicit */_Bool) (short)-14775)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))), (((/* implicit */long long int) (!((_Bool)1))))));
                }
                var_45 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (8645571336834744740LL) : (7881299347898368LL)))) ? (((var_3) ? (2073229245) : (((/* implicit */int) arr_13 [i_5] [i_13] [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (var_14))))))), (((((/* implicit */long long int) var_15)) / (arr_38 [i_17 + 1] [i_17 + 1])))));
            }
            var_46 = ((/* implicit */int) max((((((/* implicit */long long int) arr_64 [i_13] [i_5])) - (-7226967180412495270LL))), (((-281874904279459119LL) % (((/* implicit */long long int) arr_64 [i_5] [i_13]))))));
        }
        arr_66 [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (7226967180412495269LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))))), (min((((/* implicit */long long int) arr_35 [i_5] [i_5])), (arr_41 [i_5] [i_5] [i_5] [i_5])))));
        /* LoopSeq 3 */
        for (int i_22 = 0; i_22 < 20; i_22 += 3) 
        {
            arr_71 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)79)) >> ((((~(((arr_62 [i_22] [i_22] [4LL] [i_22] [i_5] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))))) - (47897967028578466LL)))));
            arr_72 [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) max((287627638U), (((/* implicit */unsigned int) (unsigned short)5259)))))) + ((~(((/* implicit */int) (signed char)62))))));
        }
        for (short i_23 = 0; i_23 < 20; i_23 += 1) 
        {
            var_47 -= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2073229229)) || (((/* implicit */_Bool) 5034905034965513705LL))))), (((((/* implicit */unsigned int) 1736030492)) - (arr_22 [i_23])))))));
            var_48 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_8 [i_5] [i_23] [i_23])))));
        }
        for (short i_24 = 0; i_24 < 20; i_24 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_25 = 2; i_25 < 17; i_25 += 2) 
            {
                arr_81 [13] [i_24] [i_25 - 1] [i_25] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-14984))));
                arr_82 [i_24] [i_24] = ((/* implicit */unsigned short) max((((/* implicit */long long int) -1389909481)), (-7226967180412495270LL)));
            }
            for (unsigned char i_26 = 0; i_26 < 20; i_26 += 1) 
            {
                var_49 -= (~(max((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5))), (((/* implicit */long long int) arr_42 [i_5])))));
                /* LoopSeq 4 */
                for (short i_27 = 3; i_27 < 17; i_27 += 3) 
                {
                    var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-15)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 7226967180412495269LL)) || (((/* implicit */_Bool) (unsigned char)100))))) - (1))))))));
                    arr_87 [(_Bool)1] [(_Bool)1] [i_24] [i_27] = ((/* implicit */signed char) (unsigned char)48);
                    var_51 = ((/* implicit */int) (~(((unsigned long long int) arr_25 [i_27] [(short)19] [i_27 - 2] [(short)19]))));
                }
                for (unsigned int i_28 = 3; i_28 < 17; i_28 += 4) 
                {
                    arr_90 [i_5] [i_24] [(short)0] [i_28] [i_28] = (_Bool)1;
                    arr_91 [(short)15] [i_24] [i_24] [i_24] [(short)15] [i_24] = ((/* implicit */long long int) min((1910802355U), (2310863680U)));
                }
                for (int i_29 = 2; i_29 < 18; i_29 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)47)) * (((/* implicit */int) arr_37 [i_24] [i_29 - 1] [i_24] [(short)14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_37 [i_24] [i_29 + 1] [i_26] [i_29 + 1])))))) : (((arr_65 [i_5] [i_29 - 2] [i_26] [i_29]) >> (((var_7) - (154936604)))))));
                    var_53 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 7114370359105002305LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-7573)))), (min((((/* implicit */int) (unsigned short)42927)), (-1548572616)))))) ? (((/* implicit */long long int) max((((unsigned int) var_10)), (((/* implicit */unsigned int) (+(12288))))))) : (max((((((/* implicit */_Bool) var_11)) ? (137438920704LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_28 [(_Bool)1] [i_29 - 1]) : (var_9))))))));
                }
                for (int i_30 = 2; i_30 < 18; i_30 += 3) /* same iter space */
                {
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_52 [i_30 - 1] [i_30 + 1] [i_30] [2LL]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_30 + 1] [i_30 + 1] [i_30 + 1] [9LL]))) == (arr_36 [i_30 + 2] [i_30 + 2] [i_30 - 1] [i_24])))) : ((-(((/* implicit */int) (_Bool)0))))));
                    /* LoopSeq 3 */
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) (~(3765862223U)));
                        var_56 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)36)) ? (min((810224114U), (((/* implicit */unsigned int) (unsigned char)207)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (7226967180412495269LL)));
                    }
                    for (short i_32 = 2; i_32 < 17; i_32 += 4) /* same iter space */
                    {
                        arr_103 [i_5] [i_24] [i_24] [i_5] [i_5] = ((/* implicit */short) ((((((((/* implicit */_Bool) 5367973026070920937LL)) ? (((/* implicit */int) (short)-18472)) : (((/* implicit */int) (unsigned char)70)))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (35052)))));
                        var_57 *= ((/* implicit */signed char) var_4);
                        var_58 &= (~(((/* implicit */int) ((unsigned char) ((2147483640) < (2147483647))))));
                    }
                    for (short i_33 = 2; i_33 < 17; i_33 += 4) /* same iter space */
                    {
                        var_59 -= ((((/* implicit */_Bool) (unsigned short)22608)) ? (max(((+(-6925636257875885228LL))), (((/* implicit */long long int) max((-2073229222), (((/* implicit */int) arr_85 [i_5] [i_5] [i_5] [12LL]))))))) : (((var_6) ? (min((((/* implicit */long long int) var_12)), (var_1))) : (((/* implicit */long long int) ((var_11) << (((var_2) - (1386911091U)))))))));
                        var_60 = ((/* implicit */int) min((((long long int) 383742863143885597ULL)), (((/* implicit */long long int) min(((~(var_11))), (((/* implicit */unsigned int) (-(var_9)))))))));
                    }
                }
                var_61 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)42947))));
                arr_106 [i_5] [(_Bool)1] [(_Bool)1] [i_24] = ((/* implicit */int) var_1);
            }
            for (long long int i_34 = 0; i_34 < 20; i_34 += 4) 
            {
                arr_111 [i_5] [i_5] [i_24] = ((/* implicit */long long int) (+(max((2077142784), (((/* implicit */int) (unsigned short)42921))))));
                var_62 = ((((/* implicit */_Bool) (+(18063001210565666004ULL)))) ? (((/* implicit */int) arr_84 [i_5] [i_24] [i_34])) : (((/* implicit */int) min((arr_10 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */signed char) var_12))))));
                var_63 = ((/* implicit */short) (~(((/* implicit */int) ((var_6) || (((/* implicit */_Bool) 7114370359105002296LL)))))));
                var_64 = ((/* implicit */unsigned short) min((var_64), (((/* implicit */unsigned short) min((((/* implicit */long long int) (short)7648)), (min((min((7226967180412495270LL), (((/* implicit */long long int) arr_7 [i_5])))), (((/* implicit */long long int) arr_37 [i_5] [i_34] [i_24] [i_5])))))))));
            }
            var_65 += ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_19 [i_5] [i_24] [i_24])))));
        }
    }
    var_66 = ((/* implicit */_Bool) (+(var_1)));
}
