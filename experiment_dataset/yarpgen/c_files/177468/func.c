/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177468
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
    var_19 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_1]) / (arr_7 [i_0] [i_1]))) > (((((/* implicit */_Bool) (short)-2048)) ? (5525837816935872287LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_21 = ((/* implicit */long long int) 14077540310651861092ULL);
                                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)51)), ((unsigned char)255)))), (9051971071922597126ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2])))));
                                var_23 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1792827969838551274LL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)24698)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (var_14)))) % (((((/* implicit */_Bool) arr_7 [i_0] [10ULL])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [15] [i_1] [15])))))))));
                                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)53032)))) == (((/* implicit */int) min((((unsigned char) (signed char)61)), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-6274))) > (arr_7 [i_0] [i_0])))))))));
                            }
                        }
                    } 
                } 
                arr_12 [i_0] [13ULL] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1953741038U)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)10] [i_0] [i_1] [i_0])))), (-337256406)));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 10; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */long long int) ((arr_19 [i_5] [i_5] [i_7 + 1]) ^ (arr_19 [i_5] [i_6] [i_7 + 1])));
                                var_26 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-9497)) ? (((/* implicit */int) (unsigned short)40836)) : (((/* implicit */int) (short)-5694))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) 1644806344140612285LL)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) (short)9496);
                    arr_28 [i_5] [i_10] [i_10] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)40840)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11 - 1] [i_11 - 1] [i_11] [i_11] [i_11 + 1] [i_11 - 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (signed char i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                {
                    var_29 = ((/* implicit */int) max((var_29), ((-(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            {
                                arr_38 [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65518))));
                                var_30 = ((/* implicit */signed char) arr_14 [i_5]);
                                arr_39 [5U] [i_5] [5U] [i_14] [(signed char)1] = (-(-2008121333849274983LL));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
    }
    for (long long int i_16 = 3; i_16 < 18; i_16 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (arr_6 [i_16 + 1] [(signed char)7] [i_16 + 1] [21U]) : (arr_6 [i_16 + 1] [i_16] [i_16 + 1] [i_16])))));
        var_32 -= ((/* implicit */signed char) var_1);
        arr_43 [i_16 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-16)), (655179641)))) ? (min((max((14077540310651861092ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_7 [i_16 + 1] [i_16 - 1]))))));
    }
    for (long long int i_17 = 3; i_17 < 18; i_17 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) arr_45 [i_17]);
        /* LoopNest 2 */
        for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            for (int i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        var_34 -= ((/* implicit */unsigned long long int) (unsigned short)57343);
                        var_35 = ((/* implicit */unsigned char) arr_52 [i_17 + 1]);
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31256)))))));
                        /* LoopSeq 4 */
                        for (short i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            var_37 = ((/* implicit */int) (unsigned char)192);
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)40837)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_18])) || (((/* implicit */_Bool) var_17)))))));
                            var_39 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) % (2347739264U)))) ? (((arr_50 [i_17] [i_17] [i_19]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))))) : (((/* implicit */long long int) 4294967284U)));
                        }
                        for (int i_22 = 0; i_22 < 19; i_22 += 4) /* same iter space */
                        {
                            arr_60 [i_18] [i_18] [i_18] = ((/* implicit */long long int) var_16);
                            arr_61 [i_17] [i_22] [i_17] [i_20] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 655179641)) <= (((((/* implicit */_Bool) var_1)) ? (13800641592098426966ULL) : (((/* implicit */unsigned long long int) 655179641))))));
                            arr_62 [i_22] [i_18] [i_18] [i_18] [i_18] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_18])) - (((/* implicit */int) arr_46 [i_18]))));
                        }
                        for (int i_23 = 0; i_23 < 19; i_23 += 4) /* same iter space */
                        {
                            var_40 = ((unsigned char) arr_56 [i_17] [i_17 - 3] [(signed char)11] [i_18]);
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned short)40399))));
                        }
                        for (int i_24 = 0; i_24 < 19; i_24 += 4) /* same iter space */
                        {
                            var_42 = ((/* implicit */short) var_9);
                            var_43 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-109)) + (2147483647))) << (((arr_69 [i_17 - 1]) - (5461443321370889326ULL)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_25 = 4; i_25 < 16; i_25 += 3) 
                    {
                        arr_73 [i_18] = (-(0LL));
                        arr_74 [i_17] [i_17] [i_18] [i_17] [i_17] [i_17] = ((/* implicit */int) ((long long int) arr_63 [i_17] [i_17] [i_17 + 1] [i_17] [i_17 - 2] [i_25 - 2]));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_26 = 0; i_26 < 19; i_26 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_27 = 0; i_27 < 19; i_27 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned int) (unsigned char)175);
                            arr_81 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_3)))));
                        }
                        arr_82 [i_17] [i_17] [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_17])) ? (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_56 [i_18] [(unsigned char)16] [(unsigned char)16] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))));
                        var_45 = ((/* implicit */int) 4179364182U);
                    }
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_52 [(unsigned char)7])), (min((12768857160550466302ULL), (((/* implicit */unsigned long long int) arr_0 [i_17] [i_17]))))))) ? (((/* implicit */unsigned long long int) arr_44 [i_17 - 3])) : ((~(arr_55 [i_17] [2] [i_17 + 1] [i_17] [i_17] [2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (long long int i_29 = 4; i_29 < 18; i_29 += 4) 
                        {
                            {
                                arr_88 [(unsigned char)6] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3136854564U)) ? (115603113U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_17 - 2]))) : (arr_44 [i_17 - 1])));
                                var_47 = ((/* implicit */long long int) (+(((/* implicit */int) arr_53 [i_19]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_30 = 0; i_30 < 19; i_30 += 3) 
        {
            for (long long int i_31 = 0; i_31 < 19; i_31 += 2) 
            {
                for (int i_32 = 0; i_32 < 19; i_32 += 1) 
                {
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_17 - 3] [i_17 - 2])) ? (-2008121333849274983LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */int) var_10)))))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (337256397)))) < (var_7)))))));
                        var_49 ^= ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_3 [i_17 - 1] [i_17 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((long long int) (+(((/* implicit */int) (unsigned short)27997))))));
                    }
                } 
            } 
        } 
    }
    var_50 = ((/* implicit */short) var_7);
}
