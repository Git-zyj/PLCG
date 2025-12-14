/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140125
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            arr_4 [i_0 + 1] [i_0 + 1] = ((((/* implicit */int) ((signed char) 1555082612))) / (((2147483647) / (((/* implicit */int) arr_0 [i_1 + 4] [i_0 - 1])))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1555082634)) ? (1555082609) : (-1555082634)))), (((var_11) ? (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (4081339914U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4294967295U)) / (-302123559501997607LL)))) / (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))))));
            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) -1555082635)), (1592135536233986804ULL)))))) ? ((-(var_3))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 + 1] [i_1])), (2090553638)))) ? (((-1555082613) / (1555082634))) : (331527659)))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_12 [i_0] [i_2] [i_3] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((unsigned int) 1555082633))))));
                        var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(1858845501)))), (((((/* implicit */_Bool) (+(6216369746045296581LL)))) ? (((long long int) -1555082635)) : (((/* implicit */long long int) (+(1555082607))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        arr_20 [i_5] [i_2] [i_0] [i_6] [(short)2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((2091218818), (((-6) / (2091218813)))))) * (((-2195208619933023466LL) * (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) 1555082612);
                            var_22 -= ((/* implicit */unsigned short) ((long long int) ((((2091218800) != (-1555082634))) ? (((/* implicit */int) ((unsigned short) 2091218818))) : (((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_5] [(short)3])) + (((/* implicit */int) (unsigned short)65504)))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_22 [i_5 + 2] [i_5] [i_5 + 3] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 2]))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)2194)), (1555082610)))) : (((((/* implicit */_Bool) arr_22 [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_2] [i_7] [i_0] [4U])) ? (((/* implicit */unsigned int) 251658240)) : (1263851895U)))));
                        }
                        /* vectorizable */
                        for (short i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) (short)-512);
                            var_25 += ((long long int) (short)2937);
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1555082609))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            arr_28 [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                            var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1555082608))));
                        }
                    }
                } 
            } 
            var_28 -= ((/* implicit */unsigned int) -1555082626);
        }
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            arr_31 [(signed char)0] = ((/* implicit */signed char) 1048575);
            arr_32 [(unsigned char)12] [(unsigned char)12] [i_10] &= ((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_0] [i_0 + 1] [0] [i_0] [i_0 - 1] [i_0] [8LL]))) ? (2234207627640832ULL) : (((/* implicit */unsigned long long int) min((((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)13669)) + (((/* implicit */int) var_5)))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                arr_37 [(signed char)3] [(signed char)3] = ((/* implicit */unsigned char) arr_18 [7] [6ULL] [6ULL] [i_0] [7] [i_0]);
                arr_38 [i_0] [i_0] [i_0 + 1] [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3090915451492713808LL)) ? (2091218814) : (((/* implicit */int) arr_25 [i_11] [(_Bool)1] [i_12] [i_12]))))), (((((/* implicit */_Bool) -1555082627)) ? (16116912711025752056ULL) : (((/* implicit */unsigned long long int) var_15))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1555082626)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_11] [(signed char)1] [(signed char)1] [i_12]))))) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) (+((~(-1555082612)))));
                        arr_43 [i_0] [i_0] [i_0] [i_11] [i_13] [i_13] [i_0] = ((/* implicit */_Bool) var_16);
                        arr_44 [i_0] [i_11] [i_13] = ((((/* implicit */_Bool) (-(var_10)))) ? (1555082590) : (((((/* implicit */int) arr_34 [(unsigned char)9])) * (((/* implicit */int) (signed char)103)))));
                        var_30 = ((/* implicit */int) min((var_30), ((+(var_8)))));
                        arr_45 [i_13] [i_13] [i_13] [i_13] [(_Bool)1] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1705468609U)) ? (((/* implicit */int) arr_5 [10LL] [i_11] [i_11])) : (((/* implicit */int) arr_5 [i_12] [i_11] [i_12]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 3; i_15 < 12; i_15 += 1) 
                    {
                        arr_48 [i_0 + 1] [i_0 + 1] [i_13] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_12])) != (-1199644481)));
                        var_31 = ((/* implicit */int) (~(var_15)));
                    }
                    var_32 = ((((/* implicit */int) (short)-17068)) / (-1555082626));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_52 [i_0 - 1] [i_11] [i_12] [i_11] = ((/* implicit */int) (unsigned short)19634);
                    var_33 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65530))))) != (((arr_24 [12] [i_0 - 1] [(short)12] [i_0] [i_0 - 1] [10] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18134995051412107619ULL)))));
                }
                for (int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_18 = 2; i_18 < 10; i_18 += 3) 
                    {
                        arr_58 [i_0] [i_0] [i_0] [i_17] [i_17] = ((/* implicit */signed char) ((short) (signed char)4));
                        arr_59 [i_17] [i_11] = ((/* implicit */_Bool) (signed char)127);
                    }
                    for (long long int i_19 = 3; i_19 < 11; i_19 += 3) 
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_1)) / (1555082609)))))) != (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-88)) * (((/* implicit */int) var_1))))), ((-(5069363902672913266LL)))))));
                        arr_62 [i_0] [(signed char)6] [i_0] [i_17] [(signed char)6] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (1555082604) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) -1555082609)) : (5792529781286546988ULL)))))));
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)21)), ((unsigned short)7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -22LL)))))))) ? (((var_13) ? (((/* implicit */long long int) arr_26 [i_0 - 1] [i_0 - 1] [i_0 - 1] [6] [(short)8])) : (-5279696712304980794LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1582960914410122644ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (4825262456773627036LL)))) ? (((((/* implicit */int) var_1)) / (var_14))) : (((/* implicit */int) arr_56 [i_0] [i_11] [i_17]))))) != (min((((/* implicit */unsigned long long int) -1555082631)), (3597650846530854657ULL)))));
                    }
                    arr_63 [i_0 + 1] [7] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1555082607)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_12] [i_12]))))) : (((((((/* implicit */long long int) -1555082630)) - (2542546592614342999LL))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15686)))))));
                }
            }
            var_37 = 3045393961U;
        }
    }
    for (unsigned char i_20 = 4; i_20 < 10; i_20 += 1) /* same iter space */
    {
        arr_67 [i_20 - 2] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_10)) * ((~(18446744073709551615ULL)))));
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
        arr_68 [i_20] = ((/* implicit */unsigned short) -1555082650);
    }
    for (unsigned char i_21 = 4; i_21 < 10; i_21 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_22 = 2; i_22 < 10; i_22 += 1) 
        {
            for (short i_23 = 2; i_23 < 11; i_23 += 3) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_76 [i_21] [(short)8])) ? (max((-1555082626), (2091218802))) : (((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (unsigned long long int i_25 = 1; i_25 < 11; i_25 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) ((((15744278227833604442ULL) * (((/* implicit */unsigned long long int) 268435456)))) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 311749022297443976ULL)) ? (((/* implicit */int) (signed char)121)) : (67076096))))))));
                                arr_84 [i_21] [i_21 - 3] [i_21 - 3] [i_22] = var_5;
                            }
                        } 
                    } 
                    arr_85 [i_21 - 1] [i_22] [i_23 - 2] = ((/* implicit */long long int) (+(2147483648U)));
                }
            } 
        } 
        arr_86 [i_21 - 2] = ((/* implicit */short) 615060526);
    }
    var_41 = ((/* implicit */unsigned int) ((var_6) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126)))))));
    var_42 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) ((67076082) != (-1555082639)))))));
    var_43 = ((/* implicit */unsigned long long int) (_Bool)1);
}
