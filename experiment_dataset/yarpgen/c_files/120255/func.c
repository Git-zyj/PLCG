/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120255
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
    var_20 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_2 [i_4 - 1] [i_3 + 2] [i_2])) >= (16122396093570694030ULL)));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)149)) && (((/* implicit */_Bool) (unsigned short)10966))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3119966509U)))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 1) 
                        {
                            arr_20 [i_1] [i_6] = ((/* implicit */_Bool) (-(var_4)));
                            var_25 ^= ((/* implicit */unsigned int) var_15);
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (1175000786U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_7 + 2]))))))));
                            var_27 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_16)))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_24 [i_6] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (var_0)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(unsigned char)11] [i_0] [i_0] [i_8]))))) : (arr_2 [i_0] [i_1] [i_6])));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_3 [i_0]))));
                            var_30 += ((/* implicit */_Bool) 8381469080884258071ULL);
                            arr_25 [2] [i_1] [i_2] [i_6] [i_6] [i_8] = ((/* implicit */signed char) 3119966509U);
                            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_6] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_6])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_2] [i_1] [i_6] [i_6])));
                        var_32 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_6] [i_2] [i_0] [i_0])) ? (4714160911415458633ULL) : (((/* implicit */unsigned long long int) 125598101)))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_29 [i_6] [i_6] [12ULL] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (-995913327) : (((/* implicit */int) (_Bool)1))));
                            var_33 -= ((/* implicit */short) arr_19 [i_0] [i_1] [i_2] [i_2] [i_9] [i_1]);
                            arr_30 [i_6] = ((/* implicit */unsigned char) ((arr_27 [i_6] [i_6] [i_2] [i_1] [i_0] [i_6]) ? (((/* implicit */int) arr_27 [9ULL] [i_2] [i_2] [i_2] [i_2] [i_6])) : (((/* implicit */int) (signed char)-102))));
                            var_34 = ((/* implicit */unsigned char) (unsigned short)47999);
                        }
                    }
                    for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) (~(arr_12 [i_1] [i_1] [i_10 + 1] [i_10])));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_21 [i_10 - 2] [i_1] [i_2] [i_10] [i_11]))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)23028)) << (((3577574875444296048LL) - (3577574875444296038LL)))));
                        }
                    }
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1ULL)) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) -367253033236931984LL))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)31)))))));
                        arr_39 [(unsigned char)10] [(unsigned char)10] [i_0] [i_2] [i_0] [(signed char)4] &= ((/* implicit */unsigned short) (~(13732583162294092980ULL)));
                        var_39 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-6446038882187942458LL)))) ? (((/* implicit */unsigned long long int) var_1)) : (527842087677773099ULL)));
                    }
                    var_40 += ((/* implicit */signed char) (~(arr_13 [i_2] [2ULL] [i_0] [i_0])));
                    var_41 += ((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_42 = ((/* implicit */int) 3254440809990623013ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            {
                                arr_50 [i_15] [i_15] [i_14] [i_13] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_1] [i_13] [i_14] [i_15])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? ((+(1928419175042094568ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_15] [i_0] [i_15])))))))));
                                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) min((14918237604267132192ULL), ((+(max((((/* implicit */unsigned long long int) (_Bool)1)), (16836115410426435705ULL))))))))));
                                arr_51 [i_0] [i_1] [i_13] [i_13] [i_14] [(unsigned char)10] |= ((/* implicit */unsigned short) (+(max((16518324898667457061ULL), (((/* implicit */unsigned long long int) 365698538))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 2; i_17 < 12; i_17 += 1) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (8108320152958679657LL)))) ? (((/* implicit */unsigned long long int) (-(arr_32 [i_0] [i_1] [i_13] [i_16] [i_0] [13ULL])))) : (arr_45 [i_17] [i_13] [(_Bool)0] [i_0])))));
                                var_45 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)45590)) || (((/* implicit */_Bool) 1725835625U))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_18 = 1; i_18 < 12; i_18 += 2) 
                    {
                        var_46 = ((/* implicit */short) arr_11 [(unsigned short)6] [i_1] [(unsigned char)13] [i_1] [i_18] [(unsigned char)13] [(unsigned char)13]);
                        var_47 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((11184758493980418265ULL) - (11184758493980418256ULL)))))), (min((((/* implicit */long long int) (unsigned short)48999)), (3625031678546663009LL))))) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1600539658U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)102)))) == (((((/* implicit */int) (unsigned char)37)) * (((/* implicit */int) (unsigned short)2729))))))))));
                        arr_58 [i_18] [i_1] = arr_54 [9ULL] [9ULL] [i_18] [i_18] [9ULL] [i_1] [i_1];
                    }
                    var_48 -= ((/* implicit */_Bool) (short)18176);
                }
                /* LoopNest 3 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        for (unsigned long long int i_21 = 3; i_21 < 11; i_21 += 2) 
                        {
                            {
                                var_49 &= ((/* implicit */unsigned int) arr_61 [i_19] [i_21] [i_21 - 1] [i_21 - 1] [i_21]);
                                var_50 += ((/* implicit */unsigned short) min((min((arr_19 [i_21 - 1] [i_21] [i_21] [i_21 - 2] [i_21] [i_21 + 1]), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (signed char)101))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 17; i_22 += 3) 
    {
        for (unsigned short i_23 = 2; i_23 < 16; i_23 += 3) 
        {
            {
                var_51 ^= ((/* implicit */unsigned char) min((max((var_18), (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */int) (unsigned char)196)))))), ((((_Bool)0) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (_Bool)1))))));
                var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)164)))) << (((min((((/* implicit */long long int) arr_67 [i_22] [i_23 - 1])), (var_7))) - (31330LL)))))) ? (((/* implicit */unsigned int) ((((-415843241) + (2147483647))) >> (((var_6) + (1788566564)))))) : (var_8)));
                /* LoopNest 3 */
                for (unsigned short i_24 = 3; i_24 < 14; i_24 += 4) 
                {
                    for (signed char i_25 = 3; i_25 < 16; i_25 += 2) 
                    {
                        for (long long int i_26 = 1; i_26 < 14; i_26 += 3) 
                        {
                            {
                                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_75 [(unsigned char)2] [i_26 + 3] [i_25 - 1] [i_23 - 1])))), (((/* implicit */int) (_Bool)0)))))));
                                var_54 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_19)), (arr_69 [i_22] [(signed char)13] [i_22])));
                                var_55 = ((/* implicit */_Bool) (unsigned short)31180);
                                var_56 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (max((4443403051195599049LL), (((/* implicit */long long int) (unsigned short)60185)))))))) > (((((/* implicit */_Bool) var_15)) ? (arr_73 [i_22]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) << (((var_18) + (58434690))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) var_10))));
}
