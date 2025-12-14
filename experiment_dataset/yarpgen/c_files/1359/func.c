/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1359
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
    var_11 += ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14009))) | (1463664278736495143ULL))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) (_Bool)0))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0])))));
        var_14 = ((/* implicit */signed char) max((2135478092U), (2135478092U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (short)-13172)) * (((/* implicit */int) ((((/* implicit */int) (short)-15340)) == (((/* implicit */int) (_Bool)1))))))))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_3 [i_1]), (arr_4 [i_1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 2; i_3 < 19; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((arr_10 [10U] [i_3 + 2] [i_3 - 2] [11ULL]) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)19)) ? (2627865791U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15340))))) - (2627865774U)))));
                    arr_15 [(_Bool)1] [i_3] [i_1] [14ULL] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))));
                    arr_16 [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) ((short) (~(((/* implicit */int) var_6)))));
                        var_19 = ((/* implicit */short) arr_6 [i_1] [i_5]);
                    }
                    var_20 = ((/* implicit */unsigned int) (-(arr_13 [i_2] [8] [i_3] [17] [i_3 + 1] [i_3 - 2])));
                }
                for (unsigned int i_6 = 4; i_6 < 20; i_6 += 2) 
                {
                    var_21 &= ((/* implicit */signed char) (+(arr_10 [i_3] [(short)0] [i_3 + 1] [i_1])));
                    var_22 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)21295))));
                    var_23 *= ((/* implicit */unsigned int) (short)-11910);
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) ((signed char) arr_8 [i_3 - 1] [i_2]));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)19))) ? ((+(((/* implicit */int) arr_11 [i_1] [i_2] [(short)1] [i_1])))) : (((/* implicit */int) var_5)))))));
                        var_26 = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-21)))))));
                        var_28 = ((/* implicit */short) ((long long int) 2565208232U));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) -735842626)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (18446744073709551615ULL)));
                        var_30 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
                        var_31 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_10 [i_2] [i_2] [(_Bool)1] [i_8])) ? (((/* implicit */int) var_1)) : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    }
                }
                for (unsigned short i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_3 + 1] [i_9 + 1])) ? (380390004) : (((/* implicit */int) var_4))));
                    var_33 = (-(((/* implicit */int) (_Bool)1)));
                    arr_33 [i_1] = ((/* implicit */signed char) (_Bool)1);
                    var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_2] [i_3 - 2] [i_9] [i_9 + 1] [i_9])) ? (arr_13 [(unsigned char)9] [i_9 - 1] [i_9] [i_9] [(unsigned char)0] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9])))));
                }
                for (short i_10 = 4; i_10 < 19; i_10 += 2) 
                {
                    var_35 |= ((/* implicit */unsigned char) arr_12 [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 2] [i_10 - 1] [i_10]);
                    var_36 = (-(2565208230U));
                    arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_19 [i_10] [i_3] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11909)))));
                }
                var_37 *= ((/* implicit */unsigned char) ((short) arr_28 [i_3 + 2] [(short)0] [2LL] [i_2] [i_3 - 1]));
                var_38 = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_8)))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                var_39 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1555023083)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) : (3829626815U)))) : (17560200084062555297ULL)));
                    var_41 = ((/* implicit */unsigned long long int) (-(0U)));
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_11] [(_Bool)0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_0)))) : (380389982)));
                }
                for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_11] [i_13]))));
                    var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)6))));
                    var_45 = ((/* implicit */signed char) (-(arr_18 [14] [i_1] [i_1] [14] [i_1])));
                    var_46 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_25 [i_1] [i_1] [i_1] [i_2] [i_1] [i_11] [i_13])) / (8718377239725815036LL)));
                }
            }
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                arr_49 [9ULL] [i_1] [i_14] [i_2] = ((/* implicit */signed char) ((int) (short)-14193));
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15])) ? (arr_44 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15]) : (arr_44 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15])));
                            arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
                            var_48 = ((/* implicit */unsigned char) ((int) 15762598695796736ULL));
                        }
                    } 
                } 
            }
            for (int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                var_49 = ((((/* implicit */_Bool) 2135478092U)) ? (15762598695796736ULL) : (((/* implicit */unsigned long long int) 4294967273U)));
                /* LoopSeq 3 */
                for (signed char i_18 = 3; i_18 < 18; i_18 += 3) 
                {
                    var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_18 + 3]))));
                    /* LoopSeq 4 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((arr_10 [i_1] [i_2] [(signed char)13] [i_18]) > (((/* implicit */int) arr_28 [5LL] [i_2] [i_17] [i_1] [i_19])))) ? (((/* implicit */int) arr_3 [i_18 - 3])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_18] [i_1])) : (((/* implicit */int) (short)-14983))))));
                        var_52 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)64275)) < (((/* implicit */int) (signed char)60))));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7942486405612616255ULL)) ? (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_17] [i_18])) : (((unsigned int) var_2)))))));
                        var_54 = ((((/* implicit */long long int) ((/* implicit */int) (short)31522))) & (2681431565863064370LL));
                    }
                    for (long long int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        var_55 = (~(((/* implicit */int) var_8)));
                        var_56 = ((/* implicit */signed char) (~((-(586094181U)))));
                        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1634812977)))) ? (3708873111U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 380390001)) ? (-2234826224239119451LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? (arr_62 [i_1] [i_2] [i_17] [i_18] [14LL]) : ((+(((/* implicit */int) var_0))))));
                    }
                    for (short i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        arr_74 [i_1] [5ULL] [i_17] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_18 - 3] [i_18 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7870)) ? (-380390002) : (((/* implicit */int) (unsigned short)51865))))) : (((long long int) arr_27 [i_1] [i_1] [i_1] [i_1]))));
                        var_59 *= ((/* implicit */unsigned int) var_1);
                    }
                }
                for (unsigned char i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    var_60 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_1]))))) < (((/* implicit */int) arr_41 [i_1] [i_1] [i_23] [i_23] [i_1])));
                    var_61 = ((/* implicit */short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_1))));
                    /* LoopSeq 2 */
                    for (short i_24 = 1; i_24 < 18; i_24 += 3) 
                    {
                        var_62 += (~(((/* implicit */int) (signed char)34)));
                        var_63 = ((/* implicit */unsigned long long int) ((signed char) arr_73 [i_1] [i_1] [i_17] [i_23] [i_17] [i_1]));
                        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) 18430981475013754873ULL))));
                        var_65 = (-(((/* implicit */int) var_0)));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_66 = arr_8 [i_1] [i_1];
                        var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-7719)) ? ((-(12426933898649826659ULL))) : (((/* implicit */unsigned long long int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_68 = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_17] [(short)11]);
                        arr_85 [i_1] [i_25] [i_17] [i_25] [i_1] [9U] [i_17] = ((/* implicit */short) ((long long int) 6210841906835137829ULL));
                        var_69 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_17] [i_2] [i_17])) || (((/* implicit */_Bool) (+(arr_26 [i_25] [i_1]))))));
                    }
                    arr_86 [i_1] = (~(((/* implicit */int) (short)11474)));
                }
                for (short i_26 = 0; i_26 < 21; i_26 += 1) 
                {
                    var_70 -= ((/* implicit */signed char) (((_Bool)1) ? (15762598695796742ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_71 = ((/* implicit */int) ((((_Bool) 2024723663U)) ? (arr_84 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
                    var_72 *= ((/* implicit */unsigned char) arr_69 [i_1] [i_1] [i_17] [i_1] [i_26] [i_26]);
                }
                var_73 = ((/* implicit */signed char) var_4);
            }
        }
        var_74 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_77 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_18 [i_1] [i_1] [i_1] [13LL] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_1] [(short)2] [i_1])) ? (((/* implicit */int) arr_12 [17] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_7))))))) ? ((-(((/* implicit */int) ((short) (_Bool)1))))) : (var_7)));
        var_75 = ((/* implicit */signed char) -380390002);
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_28 = 0; i_28 < 21; i_28 += 2) 
        {
            var_76 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((380390002), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (arr_68 [i_27] [i_27] [i_27] [i_27] [(short)10] [i_28] [i_28])));
            var_77 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 2270243632U)) == (2234826224239119452LL))))) | ((-(arr_44 [i_27] [i_27] [i_27] [i_27])))));
        }
        for (unsigned int i_29 = 0; i_29 < 21; i_29 += 4) 
        {
            arr_97 [i_27] = ((((/* implicit */_Bool) ((short) 2024723646U))) ? (max((((2234826224239119451LL) - (((/* implicit */long long int) 1857737208)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2024723646U)) ? (((/* implicit */int) var_3)) : (arr_95 [i_27] [(_Bool)0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))));
            arr_98 [i_27] = ((/* implicit */signed char) var_0);
        }
        var_78 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 15762598695796739ULL)) ? (6615686131104854727ULL) : (((/* implicit */unsigned long long int) -2234826224239119451LL)))) : (((((/* implicit */_Bool) var_5)) ? (max((15657617927850417373ULL), (6222534349312068936ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_27] [i_27] [(short)12])))))))));
    }
    var_79 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)22254))));
}
