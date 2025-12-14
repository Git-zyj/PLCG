/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180927
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
    var_14 = ((/* implicit */unsigned short) ((_Bool) 4294967283U));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (4294967281U)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)170)))))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_4]);
                                var_17 = ((/* implicit */unsigned short) max((var_17), ((unsigned short)65535)));
                                var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8162355276070506415LL)) ? (2190433320960LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51243))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] = ((/* implicit */unsigned char) (~(4294967274U)));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-12606), (((/* implicit */short) (unsigned char)28)))))) : (var_9)));
        arr_18 [i_0] = ((/* implicit */unsigned long long int) var_8);
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_13)) - (arr_2 [i_0]))), (((/* implicit */unsigned long long int) 4294967283U))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)88))))))) : (8162355276070506402LL)));
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) (-(8162355276070506405LL)));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (unsigned int i_7 = 2; i_7 < 20; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 3; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-(((/* implicit */int) (unsigned char)169)))) : (arr_10 [i_5] [i_6] [i_7 - 2] [i_9 - 3])));
                                var_22 += ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((signed char) ((long long int) arr_26 [i_5] [(_Bool)1])))), ((+(var_7)))));
                                var_23 = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-9804)) : (((/* implicit */int) (unsigned short)24175)))))), (((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [i_8] [i_9 - 1]))));
                                arr_30 [i_5] [i_7] [10] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) min(((unsigned short)224), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 4294967283U))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_7] = ((/* implicit */short) var_12);
                    arr_32 [i_5] [i_6] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 262144)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8162355276070506402LL)));
                    var_24 = ((/* implicit */unsigned char) max((max((arr_6 [i_7 - 1] [i_7 - 2] [i_7 - 2]), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))))))), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        arr_36 [i_10] [i_10] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)41))))) ? (arr_21 [i_10]) : ((+(24ULL))));
        arr_37 [i_10] = ((/* implicit */unsigned int) (_Bool)0);
        /* LoopSeq 4 */
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        arr_47 [i_10] [i_11] [i_12] [i_13] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        var_25 = ((unsigned char) arr_26 [i_13] [i_14]);
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)7))))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_28 [i_10] [i_10] [i_11] [i_12] [i_13] [(unsigned short)7] [i_14]) / (((/* implicit */long long int) -806086938))))) ? (arr_6 [i_10] [i_13] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_12] [i_14])))));
                    }
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        arr_51 [i_11] [i_11] [i_13] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41349)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_13] [i_15])) || (((/* implicit */_Bool) arr_20 [i_10] [i_13])))))) : (((18446744073709551605ULL) % (15588695671402797042ULL)))));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                    }
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_3))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned int) ((int) (signed char)38))))));
                }
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    arr_54 [i_10] [i_11] [i_11] [i_10] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_25 [i_11] [i_12]))));
                    arr_55 [i_10] [i_10] [i_10] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (9223372036854775783LL) : (((/* implicit */long long int) -262144))))));
                }
                for (int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    arr_59 [i_10] [i_12] [i_17] = ((/* implicit */unsigned short) arr_0 [i_10] [i_17]);
                    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (short)4095)))));
                }
                arr_60 [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) arr_41 [i_10] [i_11] [i_12]);
            }
            for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                arr_65 [i_10] [i_11] [i_11] [i_11] &= ((/* implicit */long long int) arr_6 [i_10] [i_10] [i_18]);
                var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
            }
            arr_66 [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (short i_20 = 1; i_20 < 20; i_20 += 1) 
            {
                for (unsigned short i_21 = 4; i_21 < 20; i_21 += 3) 
                {
                    {
                        arr_74 [i_10] [i_10] [i_19] [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) ((signed char) (unsigned short)16384));
                        var_33 = ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
            var_34 -= ((/* implicit */unsigned int) (-(arr_14 [i_19])));
            arr_75 [i_10] [i_19] [i_19] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)49133)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (8162355276070506407LL)));
        }
        for (unsigned char i_22 = 0; i_22 < 21; i_22 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 21; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 21; i_25 += 4) 
                    {
                        {
                            arr_87 [i_10] [i_22] [i_23] [i_22] [i_24] = ((/* implicit */long long int) arr_7 [i_10] [i_24]);
                            var_35 = (-(((/* implicit */int) arr_34 [i_10])));
                            arr_88 [i_10] [i_10] [i_24] [i_24] [(unsigned short)10] [(unsigned char)6] [i_25] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)57344)) ? (((/* implicit */long long int) -1092033991)) : (((long long int) var_5))));
        }
        for (unsigned char i_26 = 0; i_26 < 21; i_26 += 2) /* same iter space */
        {
            arr_92 [i_10] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_83 [i_10] [i_10] [i_26] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_83 [i_10] [i_26] [i_26] [i_10])));
            /* LoopNest 2 */
            for (long long int i_27 = 2; i_27 < 19; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) -9223372036854775797LL);
                            var_38 ^= ((/* implicit */_Bool) arr_46 [i_27 - 2] [i_27 - 1] [i_27 + 2] [i_27 + 1] [i_27 + 2] [i_27 - 2] [i_27 - 2]);
                            arr_101 [i_10] [i_29] [i_10] [i_10] [i_29] = ((/* implicit */long long int) (signed char)-12);
                        }
                        for (unsigned int i_30 = 0; i_30 < 21; i_30 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) min((var_39), (var_1)));
                            arr_105 [i_10] [i_10] [i_10] [i_10] [i_10] [i_30] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_34 [i_30])))));
                            arr_106 [(signed char)10] [i_26] [(unsigned short)9] [i_28] [i_30] = ((/* implicit */unsigned char) ((1260638512U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_27 - 2] [i_27 + 2])))));
                        }
                        for (unsigned int i_31 = 0; i_31 < 21; i_31 += 1) /* same iter space */
                        {
                            arr_109 [i_10] [i_26] [i_31] [i_28] [5LL] = (!(arr_33 [i_27 - 2]));
                            arr_110 [i_31] [i_26] [i_26] [i_26] [i_27 - 1] [i_28] [10ULL] = ((/* implicit */signed char) var_2);
                            arr_111 [i_31] [i_28] [i_31] = ((/* implicit */long long int) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_10] [i_31] [i_26] [i_27 + 2] [i_28] [i_31])))));
                            arr_112 [(short)2] [i_10] [18U] [i_31] [i_28] [i_31] = ((/* implicit */int) ((unsigned long long int) (~(var_8))));
                        }
                        var_40 = ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
        }
        var_41 &= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)85))))));
    }
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_2)))));
}
