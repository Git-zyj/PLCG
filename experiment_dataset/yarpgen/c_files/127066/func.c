/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127066
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
    var_17 = ((/* implicit */signed char) (+(((var_0) + (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-25))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) (unsigned char)221);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) != (var_0)));
                            var_21 |= (-((-(((/* implicit */int) (unsigned short)59568)))));
                            var_22 += ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)5967)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((int) var_14));
                            var_24 = ((/* implicit */int) var_8);
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (unsigned short)5967);
                            var_26 += ((/* implicit */int) ((long long int) (unsigned short)5965));
                        }
                        var_27 = ((/* implicit */int) (unsigned short)59571);
                        var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) -7816037997881702666LL))));
                    }
                } 
            } 
        }
    }
    for (signed char i_7 = 1; i_7 < 23; i_7 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) var_1);
            /* LoopSeq 1 */
            for (int i_9 = 4; i_9 < 23; i_9 += 2) 
            {
                var_31 += ((/* implicit */signed char) var_9);
                var_32 = ((/* implicit */unsigned char) min((var_32), (((unsigned char) var_12))));
                var_33 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)34));
            }
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_34 |= ((/* implicit */unsigned int) (unsigned char)221);
            var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)49311))));
        }
        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
        {
            var_36 -= ((/* implicit */unsigned char) (_Bool)0);
            arr_34 [i_11] [i_7 + 1] [i_11] = ((/* implicit */unsigned int) var_6);
            var_37 = ((unsigned int) ((((/* implicit */_Bool) min((var_11), ((unsigned short)5965)))) && (((/* implicit */_Bool) (+(1304240997))))));
            var_38 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((long long int) (unsigned char)156))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)165)))))));
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            var_39 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)34)), (min((((long long int) var_5)), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)201)), (var_12))))))));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)250))))), (max((((/* implicit */long long int) var_1)), (var_4)))));
                arr_39 [i_12] [i_12] = (+(min((((/* implicit */long long int) var_7)), (9223372036854775807LL))));
                arr_40 [16LL] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) + (((/* implicit */int) (unsigned short)45160)))) << (((((min(((+(((/* implicit */int) (unsigned char)195)))), (((/* implicit */int) (signed char)-19)))) + (45))) - (18)))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        {
                            var_41 = min((((unsigned int) ((((/* implicit */unsigned int) var_13)) >= (1366916187U)))), (((/* implicit */unsigned int) (unsigned char)216)));
                            var_42 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            }
            for (signed char i_16 = 2; i_16 < 22; i_16 += 3) 
            {
                arr_50 [i_12] = var_10;
                var_43 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_4)) * (((966349326991483200ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188)))))));
                var_44 = (~(((max((288230376151711744LL), (((/* implicit */long long int) var_5)))) & (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_45 += ((/* implicit */int) ((signed char) (unsigned short)20389));
                    var_46 = ((/* implicit */_Bool) ((long long int) var_13));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                    {
                        var_47 &= ((/* implicit */unsigned char) ((7609563060589781115LL) / (((/* implicit */long long int) ((4095) * (248))))));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6166901675715527223LL)) && (((/* implicit */_Bool) 790806400))));
                        var_49 = ((/* implicit */short) ((unsigned long long int) var_10));
                        var_50 = ((/* implicit */unsigned char) ((int) var_0));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                    {
                        var_51 &= ((/* implicit */unsigned short) var_1);
                        var_52 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_4)));
                        var_53 = ((/* implicit */int) ((long long int) var_4));
                    }
                    for (int i_20 = 1; i_20 < 22; i_20 += 2) /* same iter space */
                    {
                        var_54 = ((/* implicit */signed char) var_15);
                        var_55 += ((/* implicit */unsigned short) (signed char)-22);
                        var_56 = (unsigned short)43549;
                    }
                    for (int i_21 = 1; i_21 < 22; i_21 += 2) /* same iter space */
                    {
                        var_57 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) & (var_0)));
                        var_58 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)8479))));
                        var_59 = ((/* implicit */int) (unsigned char)216);
                        var_60 = ((/* implicit */signed char) var_11);
                    }
                }
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned long long int) max((var_61), (((/* implicit */unsigned long long int) var_14))));
                    var_62 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned short)37820)), (max((288230376151711733LL), (((/* implicit */long long int) var_13))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_23 = 1; i_23 < 23; i_23 += 1) 
                {
                    var_63 = ((/* implicit */unsigned int) (unsigned short)17566);
                    var_64 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)6))))) / (966349326991483200ULL))), (((/* implicit */unsigned long long int) (unsigned short)5965))));
                }
            }
        }
        var_65 = ((/* implicit */unsigned char) var_6);
        var_66 = ((/* implicit */unsigned short) var_9);
        var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) max((1023), (-242))))));
    }
    for (unsigned short i_24 = 2; i_24 < 21; i_24 += 3) 
    {
        var_68 = ((/* implicit */long long int) var_5);
        /* LoopNest 3 */
        for (long long int i_25 = 3; i_25 < 23; i_25 += 2) 
        {
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_69 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) || (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned int) (unsigned short)52138)))))));
                        var_70 = ((/* implicit */long long int) ((unsigned char) max((((((/* implicit */long long int) 1023)) & (9223372036854775807LL))), (((/* implicit */long long int) 248)))));
                        var_71 = ((/* implicit */int) ((unsigned short) (unsigned char)192));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_28 = 0; i_28 < 25; i_28 += 1) 
                        {
                            var_72 &= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_5)))));
                            var_73 = ((/* implicit */short) ((unsigned char) (unsigned short)65210));
                        }
                        for (unsigned char i_29 = 0; i_29 < 25; i_29 += 2) 
                        {
                            var_74 = ((/* implicit */unsigned short) (+(-288230376151711734LL)));
                            var_75 = ((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) min(((unsigned char)65), ((unsigned char)192))))));
                        }
                    }
                } 
            } 
        } 
        var_76 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (unsigned char)202)), (var_7))) << (((((/* implicit */int) ((unsigned short) var_5))) - (10661)))));
    }
}
