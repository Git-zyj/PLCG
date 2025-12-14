/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185795
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((signed char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) (~(var_3)));
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)38))))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12882)))), (max((-7423677353914298508LL), (((/* implicit */long long int) var_1))))))));
    }
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)68)))), (((/* implicit */int) ((((/* implicit */int) (signed char)80)) >= (((/* implicit */int) var_8)))))))), (var_0)));
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((min((((/* implicit */long long int) var_7)), ((-(704766426960839878LL))))), (((/* implicit */long long int) (unsigned char)217))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)14446))))) ? ((-(((/* implicit */int) (short)-4777)))) : (((var_6) | (((/* implicit */int) arr_10 [i_2]))))));
        var_13 = ((/* implicit */long long int) var_3);
        arr_12 [i_2 + 2] [i_2 + 1] = ((/* implicit */int) 7051670928900085592LL);
    }
    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) != (3597653446U)))), (((((/* implicit */_Bool) (unsigned char)192)) ? (min((2669840071U), (((/* implicit */unsigned int) (short)-4787)))) : (((/* implicit */unsigned int) var_6))))));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    {
                        arr_24 [i_5] = ((/* implicit */int) max((min((761522915U), (((/* implicit */unsigned int) 724523451)))), (((/* implicit */unsigned int) (short)-4800))));
                        arr_25 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((~(var_0))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28681)) / (((/* implicit */int) (unsigned short)63742))))))))));
                        var_15 = ((/* implicit */_Bool) max((((long long int) ((((/* implicit */int) (unsigned short)47041)) & (((/* implicit */int) (short)-2159))))), (((/* implicit */long long int) max(((unsigned short)1792), (((/* implicit */unsigned short) arr_1 [i_3 + 1])))))));
                        arr_26 [i_3] [i_3] [i_6] [i_6] [i_3] &= ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_29 [i_3] [i_3] = ((/* implicit */_Bool) -1687318582836029495LL);
            var_16 = ((/* implicit */signed char) min((var_16), (((signed char) max((4775104340446282704LL), (1687318582836029494LL))))));
        }
        for (long long int i_8 = 1; i_8 < 20; i_8 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                arr_34 [i_9] |= ((/* implicit */unsigned char) min((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_1)) / (9223372036854775807LL))), (((/* implicit */long long int) min((3533444381U), (((/* implicit */unsigned int) (unsigned short)42286))))))))));
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_40 [i_10] [8] [i_9] [i_9] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3841618762444586723LL)) ? (-7118171427421768340LL) : (-3358705107338547438LL)));
                            var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)98)) >> (((((/* implicit */int) arr_32 [i_3 - 1] [i_8 + 3] [i_8 + 2] [i_8 + 3])) - (27))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63)))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-19)) ? (max((((18183472854813358343ULL) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max(((_Bool)1), (arr_10 [i_8 + 3])))))) : (((/* implicit */unsigned long long int) max((((long long int) 1383303884507227596LL)), (((/* implicit */long long int) min((((/* implicit */int) (signed char)80)), (var_6)))))))));
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 1687318582836029482LL))))), (((((/* implicit */int) arr_30 [i_10] [i_3 - 2] [i_3 - 2])) ^ (((/* implicit */int) (unsigned short)1796))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_20 = ((/* implicit */_Bool) ((unsigned int) ((((long long int) (unsigned char)106)) != (-3358705107338547438LL))));
                var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + ((~(((/* implicit */int) (unsigned short)18482))))))) - (12589106123611098215ULL));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((unsigned char) ((-9004546798727094061LL) != (-5916337926555315339LL))));
                            var_23 ^= ((/* implicit */signed char) ((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (((5933074586486666068LL) << (((((/* implicit */int) (unsigned short)42499)) - (42499)))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                arr_52 [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */long long int) (unsigned short)42499);
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (unsigned char)36);
                            arr_59 [i_17] [i_16] [i_16] [i_3 - 1] [i_8] [i_3 - 1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -437234159322895313LL)) ? (((/* implicit */int) ((short) 128692232U))) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_5))) != (-9004546798727094052LL))), (((-437234159322895310LL) >= (((/* implicit */long long int) var_6)))))))) : (((((1720035466U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)23257)))))))));
                            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((arr_28 [i_16] [(signed char)22] [i_3]), (((/* implicit */unsigned char) (signed char)103)))))) ? (max((5933074586486666073LL), (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (short)10198))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)10198)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    arr_66 [i_3] [i_8] = ((/* implicit */_Bool) ((long long int) 4190208));
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_50 [i_8])))));
                    arr_67 [i_3 + 1] [(unsigned short)3] [(unsigned short)17] [(_Bool)1] = var_7;
                    var_27 = (_Bool)1;
                    arr_68 [i_19] [i_18] [i_8] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42511)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (298639422U))))));
                }
                var_28 = ((/* implicit */long long int) arr_50 [i_3]);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_8 + 4] [i_8 + 3] [i_18] [(_Bool)1])) ? (((/* implicit */long long int) 4190220)) : (-1383303884507227578LL)));
            }
            var_30 = ((/* implicit */short) (_Bool)1);
        }
        for (long long int i_20 = 1; i_20 < 20; i_20 += 4) /* same iter space */
        {
            arr_72 [i_3] [i_20] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) != (-4452973621117586094LL))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-111)) != (((/* implicit */int) (signed char)-104)))))) - (((((/* implicit */_Bool) 4452973621117586117LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49932))) : (6335545715900126988ULL))))));
            var_31 = max((((long long int) max((((/* implicit */int) var_9)), (-4190202)))), (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)88)), (var_9)))), (((((/* implicit */_Bool) 4452973621117586107LL)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (signed char)-104))))))));
        }
        var_32 = ((/* implicit */int) min((max((1383303884507227578LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-88)))))));
    }
    for (signed char i_21 = 2; i_21 < 22; i_21 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */int) 24LL);
        var_34 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_9))))), (((((/* implicit */int) (unsigned char)64)) >> (((-920192459) + (920192479)))))))) | (562949953421311LL)));
    }
    for (signed char i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
        {
            for (unsigned char i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                {
                    var_35 = ((/* implicit */short) min((var_8), (((unsigned short) -890199609))));
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)933)) ? (64335017422272479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29504)))));
                                arr_89 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) -7787588952221038405LL)) ? (((long long int) 555211440732234243ULL)) : (((((/* implicit */_Bool) -1733712533)) ? (8501357007856418435LL) : (1383303884507227580LL)))))));
                                arr_90 [i_22] [i_23] [i_24] [i_25 + 1] [i_26] = ((/* implicit */short) (_Bool)1);
                                var_37 = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        for (short i_28 = 0; i_28 < 24; i_28 += 4) 
                        {
                            {
                                var_38 ^= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1143168161391799994LL) | (3820719566420559767LL)))) ? (((((/* implicit */_Bool) 3976368076U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)2031)))) : (((/* implicit */int) (signed char)91))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1333423774)) ? (((/* implicit */int) var_4)) : (-1333423802)))), (((((/* implicit */_Bool) var_0)) ? (15895391025925821638ULL) : (((/* implicit */unsigned long long int) -1446910604894565963LL)))))));
                                var_39 = ((((/* implicit */long long int) 4294967295U)) != (-1446910604894565978LL));
                                var_40 *= ((signed char) max(((signed char)119), (((/* implicit */signed char) arr_21 [i_28] [i_23]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_29 = 1; i_29 < 22; i_29 += 4) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 2) 
                        {
                            {
                                arr_102 [i_22] [i_23] [i_24] [i_29] [i_29] [i_30] = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) (signed char)119))), (-1143168161391799994LL)));
                                var_41 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-126)) ? (((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_5)))) : (var_6)))), (((((/* implicit */_Bool) 262143U)) ? (119152385U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))))));
                                var_42 = ((/* implicit */long long int) min((var_42), (min((max((min((867587678907312739LL), (((/* implicit */long long int) var_8)))), (((long long int) 3898613623283729942LL)))), (((/* implicit */long long int) var_5))))));
                                var_43 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (short)-934))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-12549)))) : (arr_74 [i_29 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_31 = 0; i_31 < 24; i_31 += 4) 
                    {
                        for (unsigned short i_32 = 0; i_32 < 24; i_32 += 2) 
                        {
                            {
                                var_44 = (-(((/* implicit */int) max((var_8), (var_8)))));
                                var_45 = var_5;
                                var_46 ^= (((~(((((/* implicit */_Bool) (short)927)) ? (1383303884507227598LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14100))))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-86)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_111 [i_22] &= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)-62))) == (-1333423817)));
    }
}
