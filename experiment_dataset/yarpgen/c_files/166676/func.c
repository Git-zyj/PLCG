/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166676
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) var_4)) : (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [(unsigned short)5]), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57443))) : (min((((/* implicit */long long int) arr_0 [(unsigned short)9] [(unsigned short)9])), (arr_1 [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (unsigned short)65535)))))))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63864))) - (arr_1 [i_0])))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0] [i_1] [i_2])), (var_3)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)114)))))) - (((/* implicit */int) (unsigned char)80)))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~(min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), ((-(var_2)))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min(((unsigned char)106), ((unsigned char)176)))), (((((/* implicit */_Bool) (unsigned short)46958)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_0] [i_2]))))) ^ (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_1]) ? (((/* implicit */int) var_5)) : ((~(-1047173150))))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */short) max((max((1182514468), (((/* implicit */int) (short)-14972)))), (((/* implicit */int) max(((unsigned short)46977), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max(((unsigned short)65524), (((/* implicit */unsigned short) (unsigned char)176)))))));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (signed char)119)) % (((/* implicit */int) (signed char)7)))) : ((+(((/* implicit */int) arr_11 [i_0] [i_3]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (14234109742615186911ULL)))) ? ((-(((/* implicit */int) (unsigned short)64766)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))) : (min(((-(((/* implicit */int) (unsigned char)82)))), (((/* implicit */int) ((((/* implicit */int) var_5)) != (1047173149)))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((-2830527294563699995LL), (((/* implicit */long long int) (unsigned short)511))))) ? (((arr_3 [i_2] [i_1] [i_1]) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1047173150)))))))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_4] |= min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)163));
                        var_19 = ((/* implicit */unsigned long long int) var_5);
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)156)) || (((/* implicit */_Bool) (unsigned char)31)))), (((((/* implicit */_Bool) (short)24440)) && (arr_17 [i_1] [(unsigned char)0] [i_2] [i_4] [i_0]))))))));
                    }
                    for (short i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_1] = ((/* implicit */short) var_7);
                        var_21 |= ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)46958)) : (((/* implicit */int) var_5))))))));
                    }
                    var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_1]))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_6]))) == (arr_5 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-3)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) (unsigned short)18578))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58067)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)156))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [i_1] [i_0] [i_6] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-56)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)99)), ((short)-29033)))))) : (((/* implicit */int) var_8))));
                        arr_26 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))) : (5859113262888134540ULL))) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (-21))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))) / ((-(((/* implicit */int) (unsigned short)31777))))))));
                    }
                    for (signed char i_7 = 4; i_7 < 13; i_7 += 4) 
                    {
                        var_25 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_5)), ((unsigned char)185)))) ? (((((/* implicit */_Bool) (unsigned short)46958)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_1))))))));
                        arr_30 [8ULL] [i_1] [i_1] [i_7 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_7 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)76))))))));
                    }
                    for (signed char i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        arr_33 [i_0] [i_0] [i_2] [i_8 + 1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_1] [i_8 - 2] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (var_7)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (7878507527068732873ULL)))) ? (max(((~(((/* implicit */int) (unsigned char)211)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15688492344656374031ULL))))));
                            var_28 |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)35290))));
                            var_29 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))), (((((/* implicit */int) arr_20 [i_0] [i_0] [i_8 - 2] [i_1])) % (((/* implicit */int) (unsigned char)108))))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_38 [i_1] [i_1] [i_2] [(unsigned char)10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3473578596U)) ? (((/* implicit */int) max(((!(((/* implicit */_Bool) 2758251729053177606ULL)))), (((_Bool) var_1))))) : ((+((((_Bool)1) ? (((/* implicit */int) (short)896)) : (((/* implicit */int) (unsigned char)97))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_2] [i_10] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_10), (arr_14 [i_0] [i_0] [i_2] [i_0]))))) / (((((/* implicit */_Bool) var_3)) ? (arr_15 [i_0] [i_1]) : (((/* implicit */long long int) 1510296474))))))));
                        }
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_5 [i_8] [i_1] [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_41 [i_2] |= (!(((/* implicit */_Bool) (short)-18802)));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */short) (signed char)0))))) ? (((/* implicit */int) max(((short)-12826), ((short)-18802)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_1] [i_1] [i_2] [i_1])), ((unsigned char)156))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11240604856587716403ULL)) ? (2758251729053177606ULL) : (((/* implicit */unsigned long long int) -571852997))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : ((~(18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (191707082) : (((/* implicit */int) arr_39 [i_1] [i_2]))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18778))) : (3224368621251696658LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned short) var_5)))))))))));
                        var_33 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0] [i_1]);
                        arr_42 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0] = (_Bool)0;
                    }
                }
            } 
        } 
        arr_43 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)4330)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)4330))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3724867813U)))))))));
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18802)) ? (min(((+(15688492344656374019ULL))), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_40 [i_0] [i_0] [(short)10] [i_0] [i_0])) <= (((/* implicit */int) var_9))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_46 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_15 [i_12] [i_12]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_7))))))) ? (((((/* implicit */_Bool) (unsigned short)58954)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) / (2758251729053177606ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))))))));
        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) -1398770922))) : ((~(((/* implicit */int) (unsigned char)171)))))), (((/* implicit */int) var_6)))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        arr_50 [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)71)) * (((/* implicit */int) (short)-4347))));
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (unsigned char i_16 = 3; i_16 < 11; i_16 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_32 [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) (unsigned char)203)))) + (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), (arr_51 [i_13] [i_14])))))))) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)41))))) ? (((((/* implicit */_Bool) (unsigned char)56)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)13498), (((/* implicit */unsigned short) arr_37 [i_14] [i_14]))))))))))))));
                        arr_58 [i_13] [i_13] [i_13] [12ULL] [12ULL] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)41)))) ? ((((!(((/* implicit */_Bool) 9739733542189260870ULL)))) ? (arr_2 [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        var_37 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(-571852997)))))))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
        var_39 = ((/* implicit */unsigned long long int) (+(min(((-(((/* implicit */int) arr_11 [i_13] [i_13])))), (((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    var_40 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_60 [i_17] [i_18]))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_36 [i_13] [i_13] [i_13] [i_13] [i_18]))))) : ((+(8771443360627542549LL)))))) ? (((/* implicit */int) max(((short)4332), ((short)-19327)))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned char)1))))), (((((/* implicit */int) (unsigned char)188)) / (((/* implicit */int) arr_61 [i_17] [i_17]))))))));
                    var_41 |= ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) (short)-18807))))), ((+(-2618180624036781533LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_17] [i_17] [i_17] [i_17] [i_17])) / (((((/* implicit */_Bool) 1000726076)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)-512)))))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_17] [i_18]), (arr_14 [i_13] [i_17] [i_18] [i_20])))) ? (((((/* implicit */_Bool) 2618180624036781532LL)) ? (((-2618180624036781533LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-12927))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_31 [i_13] [i_17] [i_18] [i_19]), (((/* implicit */short) var_9))))) : (((((/* implicit */int) arr_9 [i_19] [i_18])) ^ (((/* implicit */int) arr_11 [i_13] [(unsigned char)2])))))))));
                                var_43 = ((/* implicit */unsigned short) max(((((~(((/* implicit */int) (short)19335)))) % (((((/* implicit */_Bool) arr_47 [i_18])) ? (((/* implicit */int) (unsigned short)42444)) : (((/* implicit */int) (unsigned char)52)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_13] [(_Bool)1] [i_13] [i_20]))))) ? (((((/* implicit */_Bool) 2618180624036781532LL)) ? (((/* implicit */int) (unsigned short)60705)) : (((/* implicit */int) (short)4316)))) : ((-(((/* implicit */int) (unsigned char)96))))))));
                                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) arr_22 [i_19]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_0)))))) / (((/* implicit */int) (short)4330)))))));
                                var_45 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) 4459283328648661631LL))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_48 [i_13])) : (((/* implicit */int) arr_48 [i_20]))))));
                                var_46 = ((/* implicit */unsigned char) max(((!(var_5))), (((((/* implicit */int) arr_40 [i_13] [i_17] [i_17] [i_19] [i_13])) >= (((/* implicit */int) max(((short)18822), (((/* implicit */short) var_5)))))))));
                            }
                        } 
                    } 
                    var_47 |= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) (short)18802)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_5 [i_18] [i_17] [i_13]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)33009))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18822)))));
                }
            } 
        } 
    }
    var_48 = ((/* implicit */int) max((((var_2) & (((1ULL) ^ (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))))))));
    var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) (_Bool)1))));
}
