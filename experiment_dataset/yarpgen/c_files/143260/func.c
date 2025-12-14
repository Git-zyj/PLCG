/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143260
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((long long int) arr_4 [i_3 - 1] [(_Bool)1])) >> (((((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 1])) - (14405)))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_5 [i_1]))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
                            {
                                var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((_Bool) 12233807694683175590ULL))))));
                                arr_15 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) 3529205310U))))) ? (((/* implicit */int) ((unsigned char) arr_0 [(short)19] [(unsigned short)7]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((~(3529205313U))) % (((((/* implicit */_Bool) 4294967295U)) ? (3529205312U) : (3529205310U)))))) ? (min((((/* implicit */int) (unsigned short)5268)), (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (unsigned char)124)))))) : (((/* implicit */int) (short)-8227))));
                                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 2249989619U)) : (((long long int) 213701290))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                arr_19 [(short)7] [(short)10] [i_0] [i_2] [i_3] [(unsigned char)4] = ((/* implicit */long long int) ((int) ((((unsigned int) var_14)) + ((+(var_4))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_10 [i_0] [i_3 + 3] [i_2 - 2] [i_1] [i_1] [i_0])))) == (((((/* implicit */_Bool) ((int) (short)8196))) ? (var_4) : (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (var_9))))))));
                            }
                            var_22 = ((long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) < (2952273537U))) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)2)), (arr_18 [(short)7] [i_2] [(short)7])))) : ((-(arr_1 [6LL] [i_2])))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-8227)) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_17 [i_2] [i_2] [i_1] [i_3 + 3] [i_3 + 3])))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((1342693775U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                /* LoopSeq 1 */
                for (short i_6 = 4; i_6 < 17; i_6 += 4) 
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max(((~(((/* implicit */int) arr_16 [i_1] [8] [i_6 - 4])))), (((/* implicit */int) (short)-6552)))))));
                    var_26 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((unsigned short) -1LL))) << (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) (short)8226))))))), ((+((~(((/* implicit */int) var_0))))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 1; i_7 < 11; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) arr_13 [i_8] [i_8] [i_8] [9] [i_8] [i_7] [i_7 - 1]);
            var_28 = ((max((arr_17 [i_8] [i_8] [i_7 + 1] [i_8] [i_8]), (arr_17 [i_8] [i_7 + 1] [i_8] [i_8] [i_8]))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_17 [i_8] [6LL] [i_8] [i_7] [i_8])))));
            arr_26 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_8])) ? (((/* implicit */int) arr_8 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_8] [i_7 + 1])) : (((/* implicit */int) ((unsigned short) arr_17 [i_8] [i_7] [(unsigned short)6] [13LL] [i_8])))))) <= (((((/* implicit */_Bool) arr_25 [i_7] [i_8])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8197)))))));
            arr_27 [i_8] [i_8] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [(short)9]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-24437), ((short)-6552))))) : (((((/* implicit */_Bool) arr_22 [i_7])) ? (-4764645476686673617LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))))));
        }
        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_8)) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (1514505110)))))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_11))));
                    var_31 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) var_7))), (min((((/* implicit */unsigned long long int) ((long long int) arr_14 [i_7 + 1] [i_11] [12LL] [i_11]))), (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_9] [i_10] [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_10 [i_7 - 1] [i_9] [i_9] [i_11] [i_10] [i_9]))))))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_37 [i_12] [i_10 + 2] [i_10] [i_9 + 2] [1LL] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_10 - 1] [i_10] [i_10] [i_10 + 3] [i_9] [i_10 + 2])) == (arr_22 [i_10 - 1])));
                    /* LoopSeq 4 */
                    for (unsigned int i_13 = 2; i_13 < 11; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((int) ((short) var_4))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_12] [i_10 + 3] [i_9])))))));
                    }
                    for (short i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        var_34 = ((((/* implicit */long long int) ((arr_28 [i_14 - 1] [i_14 - 1] [i_9 + 1]) << (((((/* implicit */int) var_13)) - (161)))))) >= (arr_17 [i_14] [i_10 + 2] [i_10] [i_7 + 1] [i_14 - 1]));
                        var_35 = ((/* implicit */unsigned int) (short)8196);
                    }
                    for (short i_15 = 3; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) arr_14 [i_9] [i_9] [i_9] [i_9]);
                        arr_44 [i_7] [9ULL] [i_7] [i_15 - 3] = ((/* implicit */short) arr_0 [i_7] [i_7]);
                        var_37 = ((/* implicit */long long int) (~(arr_43 [i_15] [i_15 + 1] [i_15] [i_15] [i_15] [i_15])));
                    }
                    for (short i_16 = 3; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) arr_23 [i_7 - 1]);
                        arr_47 [i_7 - 1] [(short)6] [i_7] [i_7] [i_7 - 1] = ((/* implicit */short) arr_39 [i_9 + 2]);
                        var_39 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_14 [(short)7] [i_16 - 3] [i_16 - 3] [i_16 - 3])) >= (((/* implicit */int) arr_14 [17ULL] [i_16] [i_16 - 1] [i_16 - 1]))));
                    }
                    arr_48 [i_7] [i_7] = ((/* implicit */short) (unsigned char)192);
                    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(-4540260864624509090LL))))));
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_7 - 1])) ? (((/* implicit */int) arr_46 [i_9] [i_10] [i_10] [i_10 + 1] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_46 [i_7] [i_9] [5LL] [i_10 + 3] [i_12] [i_9] [i_10 + 3]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 2; i_17 < 9; i_17 += 4) 
                {
                    for (long long int i_18 = 3; i_18 < 11; i_18 += 4) 
                    {
                        {
                            arr_53 [i_18] [i_18] [i_18] [i_18] [4] = ((/* implicit */unsigned long long int) (-(arr_43 [i_18] [i_18 - 2] [i_18] [i_18 - 3] [i_18 - 3] [i_18])));
                            arr_54 [i_7 - 1] [i_18] [i_10 + 1] [i_17] [i_10 + 1] [(signed char)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)30031)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_7] [i_9 + 1] [i_10] [i_17 - 1])))), (((/* implicit */int) ((short) arr_18 [i_7 + 1] [(short)13] [i_17]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_19 = 2; i_19 < 10; i_19 += 4) 
                {
                    arr_58 [i_9] [i_9] [i_10 + 2] [i_9] = ((/* implicit */unsigned int) arr_21 [i_9] [i_19]);
                    var_42 = arr_52 [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_9];
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)192)) - (170)))));
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 1080490557167234123LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (3120871130951719385ULL))))))));
                }
            }
            var_45 = ((/* implicit */short) ((long long int) min((((((/* implicit */_Bool) -7992968538685982755LL)) ? (((/* implicit */int) (unsigned short)61321)) : (((/* implicit */int) (short)-16384)))), ((-(var_1))))));
            var_46 *= ((/* implicit */_Bool) (~(((unsigned long long int) ((long long int) (short)24379)))));
        }
        for (unsigned char i_20 = 2; i_20 < 9; i_20 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */short) (+((-(((/* implicit */int) min((var_6), (var_6))))))));
            /* LoopSeq 4 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_48 = ((/* implicit */long long int) ((((/* implicit */int) (short)511)) <= (((/* implicit */int) (unsigned char)108))));
                var_49 = ((/* implicit */int) ((signed char) (signed char)-126));
            }
            for (long long int i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
            {
                var_50 ^= ((/* implicit */long long int) ((arr_35 [i_22] [i_20 + 2] [4LL] [4LL] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_51 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_7] [i_20 - 1] [i_20 + 2] [i_7 - 1] [i_22])) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) arr_51 [(signed char)9] [(unsigned short)10] [i_20 + 3] [i_7 + 1] [i_7]))))) ? (((long long int) 3450529734U)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) arr_51 [i_7] [i_20 - 1] [i_20 - 1] [i_7 + 1] [i_20 - 1])))))));
                /* LoopNest 2 */
                for (short i_23 = 3; i_23 < 8; i_23 += 4) 
                {
                    for (unsigned int i_24 = 2; i_24 < 11; i_24 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) arr_49 [(_Bool)1] [i_7 + 1] [i_23 + 3] [6ULL]))));
                            arr_73 [i_24] [i_23] [i_22] [i_23] [i_7 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 854754186))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned short)58805), (((/* implicit */unsigned short) var_3))))), (arr_43 [i_24 - 1] [i_22] [i_22] [(unsigned short)9] [i_7] [i_7])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_7] [(unsigned short)7] [i_7]))))))) + (4410238111200574791ULL)))));
                            var_53 = (unsigned char)64;
                            arr_74 [i_23] [i_20 - 2] [i_20 - 1] [i_20] [i_20] [3LL] [i_20 - 1] = min((2046563134U), (((/* implicit */unsigned int) max((-2144805020), (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
            }
            for (long long int i_25 = 0; i_25 < 12; i_25 += 2) /* same iter space */
            {
                arr_79 [i_7] [i_25] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -687758872)))) ? (((((/* implicit */int) (unsigned char)192)) / (((((/* implicit */int) (short)16368)) + (((/* implicit */int) var_11)))))) : (var_14)));
                var_54 ^= ((/* implicit */unsigned long long int) 4294967295U);
            }
            for (long long int i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    for (short i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned short) arr_66 [i_20] [i_26] [i_26]);
                            var_56 = ((/* implicit */short) max((171423472545610003LL), (((((/* implicit */_Bool) ((arr_11 [i_7] [i_20 - 2] [i_20] [i_20]) << (((arr_1 [i_7] [(_Bool)1]) + (355866028951626565LL)))))) ? (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) 2147483647)) : (2713149517351518737LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)66)))))))));
                        }
                    } 
                } 
                var_57 = (!(((/* implicit */_Bool) ((int) 0U))));
            }
            /* LoopNest 3 */
            for (signed char i_29 = 1; i_29 < 9; i_29 += 2) 
            {
                for (unsigned char i_30 = 1; i_30 < 10; i_30 += 4) 
                {
                    for (unsigned int i_31 = 0; i_31 < 12; i_31 += 4) 
                    {
                        {
                            var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (274490294589344756LL))))));
                            arr_94 [i_7] [i_7] [i_20] [i_29] [2] [2] &= ((/* implicit */long long int) arr_46 [i_7] [i_7] [(_Bool)1] [i_20 + 3] [i_29] [i_30] [i_30]);
                        }
                    } 
                } 
            } 
            arr_95 [i_7] [11LL] [i_20] = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) & (((long long int) arr_18 [i_7 + 1] [i_7 - 1] [i_7]))));
        }
        arr_96 [i_7] = ((short) min(((!(((/* implicit */_Bool) arr_85 [i_7 + 1] [(signed char)0] [i_7 + 1] [i_7])))), (((((/* implicit */_Bool) -4)) && (((/* implicit */_Bool) 1509721000U))))));
    }
    for (unsigned int i_32 = 0; i_32 < 23; i_32 += 4) 
    {
        var_59 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_97 [i_32] [i_32]), (arr_97 [i_32] [i_32]))))));
        arr_101 [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_32])) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_100 [(_Bool)1] [(signed char)1])) ? (((/* implicit */int) arr_98 [10U])) : (((/* implicit */int) arr_98 [i_32]))))))) : (4294959104U)));
    }
}
