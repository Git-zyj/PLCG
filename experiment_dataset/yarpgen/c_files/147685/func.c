/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147685
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] |= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (5184993313805854577LL)))), (((((/* implicit */_Bool) 16LL)) ? (arr_1 [i_1] [i_1]) : (var_1)))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((_Bool) min((((28) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65531)))))));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)119)) == (((/* implicit */int) ((arr_1 [i_2] [i_1]) < (arr_1 [i_3] [i_3])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                            var_17 = ((/* implicit */signed char) ((arr_2 [i_0]) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(signed char)8]))));
                            arr_18 [(unsigned short)15] [i_1] [(unsigned char)19] [i_0] [i_5] [i_0] [(unsigned char)11] = ((/* implicit */unsigned long long int) (!(arr_8 [i_0] [i_1])));
                            var_18 *= ((/* implicit */unsigned short) ((arr_16 [i_0] [i_4 - 4] [i_5 + 1] [i_5] [i_5] [i_5] [i_5]) & (((/* implicit */unsigned long long int) -1035445457))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_0] [3LL] [i_0])) : (arr_2 [i_4 + 2])))));
                        var_19 = ((/* implicit */signed char) (-(-27LL)));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((25LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)5148)))))))))));
                            var_21 *= ((/* implicit */unsigned char) ((int) var_11));
                            var_22 = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
                            arr_22 [i_6] [i_6] [(signed char)15] [i_0] [i_6] = ((unsigned long long int) (-(var_13)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_25 [i_0] [i_1] [i_1] [5LL] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_4] [i_4 + 2]) - (((/* implicit */long long int) 135763915U))));
                            arr_26 [i_0] [i_1] [(signed char)13] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((-(var_3))) << (((16LL) - (16LL)))));
                            arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_7] [i_4 - 2]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_23 += ((/* implicit */unsigned short) ((unsigned char) arr_14 [i_0] [i_8] [8U] [i_4] [(unsigned char)20]));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6357))) : (var_4)))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) -8012559293651312780LL);
                            var_26 += ((arr_13 [i_1] [i_1] [i_4 + 2] [(unsigned short)0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_29 [i_0] [i_9]))))) : (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_2] [i_2] [i_1] [i_9]))))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (((-(arr_33 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))))))));
                        }
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_33 [i_10 - 2])) - (0ULL)))) || (((/* implicit */_Bool) max((-17LL), (((/* implicit */long long int) arr_21 [i_10] [i_10] [i_10 - 3])))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), ((~(((((/* implicit */_Bool) ((long long int) arr_15 [i_0] [i_0] [i_1]))) ? (((17683964646725849400ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))) ^ (135763915U))))))))));
                        }
                        for (short i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                        {
                            arr_41 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                            var_30 &= ((/* implicit */long long int) ((((((/* implicit */int) var_5)) != (((/* implicit */int) (short)4089)))) ? (((((/* implicit */int) arr_15 [i_10 - 3] [i_10 - 3] [i_2])) % (((/* implicit */int) arr_37 [i_12] [i_10 + 1] [i_10] [6ULL])))) : (((((/* implicit */int) (_Bool)1)) << (((((-2740805990756052716LL) + (2740805990756052747LL))) - (25LL)))))));
                            arr_42 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3012804630U)) || (((/* implicit */_Bool) var_5)))))) - (((min((((/* implicit */unsigned long long int) -351944446)), (var_4))) >> (((((((/* implicit */long long int) 3012804630U)) ^ (-2740805990756052726LL))) + (2740805987829362455LL)))))));
                        }
                        arr_43 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_10 + 1] [20ULL] [10LL] [i_10] [i_10 + 1] [i_0] [i_10 - 2])) && (((var_11) == (var_1))))) ? (((/* implicit */int) ((short) ((arr_23 [i_10] [i_2] [i_1] [i_1] [i_0] [i_0]) >= (arr_11 [i_2] [i_10]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) -1701186994760206630LL)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)162)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            arr_47 [i_0] [i_1] [14LL] [i_10] [i_13] [i_10] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5184993313805854577LL) & (-2740805990756052723LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-123)) < (-1))))) : (4294967272U)))) && (((/* implicit */_Bool) var_7))));
                            var_31 = ((/* implicit */unsigned short) (~((-(5265295214597264459LL)))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(arr_9 [i_1] [i_14] [i_14]))))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) & (17297746485608562026ULL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 3; i_16 < 21; i_16 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_16] [i_16] [i_16] [i_0] [i_16] [i_16 - 1])) ? (((/* implicit */long long int) arr_36 [i_16] [i_16] [i_16] [i_0] [(unsigned char)10] [i_16 + 1])) : (0LL)))) < (var_11)));
                                var_35 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9039))))) ^ (((12765892223542880199ULL) | (((/* implicit */unsigned long long int) 1223114786345886881LL)))))), (min((((/* implicit */unsigned long long int) arr_39 [i_15] [i_15] [i_16] [i_16] [i_16 - 1] [i_16])), (var_1)))));
                                var_36 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) && (((((/* implicit */int) var_8)) == (((/* implicit */int) var_7)))))) ? (((((17683964646725849399ULL) << (((/* implicit */int) var_6)))) * (((unsigned long long int) 16934978502321164719ULL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((3138580674185234419ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_1] [i_2] [i_15] [(unsigned char)10])))))), (((4964394810364669880LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_1]))))))))));
                                var_37 ^= ((/* implicit */unsigned char) 16LL);
                            }
                        } 
                    } 
                    arr_57 [20ULL] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_2])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))))), (((((_Bool) arr_34 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_8), (arr_49 [i_0] [i_1] [(unsigned short)13] [(unsigned char)15]))))) : (((((/* implicit */_Bool) 2409989276U)) ? (-1491958959644116985LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_17 = 4; i_17 < 20; i_17 += 2) 
        {
            var_38 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) (short)-10)) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))));
            var_39 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((3012804630U) >= (3012804630U))))));
        }
        for (unsigned short i_18 = 2; i_18 < 18; i_18 += 2) 
        {
            arr_62 [(short)0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (signed char)0))))) / ((+(8909046862018371814LL)))));
            /* LoopSeq 1 */
            for (short i_19 = 2; i_19 < 20; i_19 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_20 = 1; i_20 < 19; i_20 += 2) /* same iter space */
                {
                    var_40 += ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_18 + 4] [i_18 - 1] [i_19 - 1])) && ((!(((/* implicit */_Bool) arr_45 [(signed char)0] [i_18] [i_18] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_21 = 2; i_21 < 18; i_21 += 4) 
                    {
                        var_41 ^= ((((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)50915), (((/* implicit */unsigned short) (unsigned char)0)))))) + ((~(-6619736244841533140LL))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -8786528167620215893LL))) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)255)), (296974839)))))))));
                        var_42 = ((/* implicit */signed char) ((unsigned long long int) var_10));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_43 += ((/* implicit */unsigned short) ((15308163399524317197ULL) != (max((6271911747861145288ULL), (((/* implicit */unsigned long long int) ((4879938283843633969LL) == (((/* implicit */long long int) 127369286U)))))))));
                        var_44 = ((/* implicit */long long int) (short)13372);
                        arr_75 [i_0] [i_0] [i_0] = ((/* implicit */short) var_8);
                        var_45 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-13396)), (9812274502276356447ULL)));
                        var_46 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (signed char)-109))));
                    }
                    var_47 += ((/* implicit */unsigned short) arr_60 [i_18] [i_19 - 1]);
                }
                for (signed char i_23 = 1; i_23 < 19; i_23 += 2) /* same iter space */
                {
                    arr_80 [i_0] [i_0] [(_Bool)1] [i_23 - 1] [(short)2] [i_19] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_5))))));
                    var_48 &= ((/* implicit */signed char) ((((((251763123622273628LL) << (((((arr_74 [i_18]) + (3247652895536374664LL))) - (44LL))))) ^ (((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)208)) - (208))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1674157492088946719ULL)) && (var_8))) || (((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) -1273523512))))))))));
                    var_49 = ((/* implicit */signed char) (+(min((2285667737730702680LL), (2467862004319486199LL)))));
                }
                for (signed char i_24 = 1; i_24 < 19; i_24 += 2) /* same iter space */
                {
                    arr_85 [i_0] [i_24] = ((unsigned int) (unsigned char)47);
                    arr_86 [i_0] [i_0] = ((/* implicit */_Bool) (-(((long long int) (~(((/* implicit */int) (unsigned char)255)))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_25 = 1; i_25 < 20; i_25 += 2) /* same iter space */
                {
                    var_50 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((((_Bool)1) ? (697892237850190076LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_21 [(unsigned char)12] [(unsigned char)12] [9ULL]))))))))));
                    /* LoopSeq 1 */
                    for (short i_26 = 1; i_26 < 20; i_26 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) ((short) (short)-23873))))));
                        var_52 &= ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */unsigned long long int) 8717628536377145520LL)) * (6102773885505095686ULL)))), (17484732891546869287ULL)));
                        var_53 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (((5265295214597264459LL) / (((/* implicit */long long int) 1557471640U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)129))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-20076))))))) : (((((/* implicit */_Bool) ((int) 17484732891546869287ULL))) ? (((((/* implicit */_Bool) (unsigned char)117)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_13))))))))));
                    }
                }
                for (unsigned long long int i_27 = 1; i_27 < 20; i_27 += 2) /* same iter space */
                {
                    var_54 -= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_19 - 1] [i_18 + 4] [i_18])) && (((/* implicit */_Bool) arr_59 [i_19 + 2] [i_18 + 2] [i_18])))))));
                    var_55 = ((/* implicit */unsigned char) (+(max((min((((/* implicit */unsigned long long int) arr_69 [i_0] [i_18] [i_19] [i_0] [i_19] [i_27] [i_18])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(_Bool)1] [i_19 + 2] [9ULL] [9ULL]))) != (arr_53 [(_Bool)1] [i_0] [5ULL] [(signed char)10]))))))));
                }
                /* vectorizable */
                for (short i_28 = 0; i_28 < 22; i_28 += 3) 
                {
                    var_56 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)23873)) ? (var_0) : (arr_82 [(_Bool)1] [(signed char)8] [i_0])))));
                    var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)0)))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_29 = 0; i_29 < 22; i_29 += 2) 
                {
                    for (unsigned int i_30 = 0; i_30 < 22; i_30 += 2) 
                    {
                        {
                            var_58 *= ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -2345733924739822043LL)))) && (((var_6) && (((/* implicit */_Bool) (short)23873)))))))));
                            var_59 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(var_13)))) <= (((unsigned long long int) arr_92 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */int) (unsigned char)235);
                var_61 = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_50 [i_18 - 1] [i_19] [i_19 + 1])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114)))));
            }
            var_62 += 390514129U;
        }
        var_63 = ((/* implicit */unsigned char) min((var_63), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 312349328956696159LL))) ? (((/* implicit */unsigned long long int) min((arr_60 [12] [i_0]), (((/* implicit */unsigned int) arr_71 [i_0]))))) : (((4081375351142877261ULL) / (((/* implicit */unsigned long long int) var_3)))))))));
    }
    for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 3) /* same iter space */
    {
        var_64 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_28 [i_31] [i_31] [(short)18] [i_31] [i_31])) + (3122014031765840794ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))))), (((unsigned int) arr_53 [i_31] [(short)10] [i_31] [i_31]))));
        var_65 = ((/* implicit */short) ((((unsigned long long int) arr_24 [i_31] [12ULL] [i_31])) != (((((/* implicit */unsigned long long int) (+(arr_36 [0ULL] [i_31] [12] [12] [i_31] [i_31])))) - (((0ULL) + (0ULL)))))));
    }
    var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) var_8))));
}
