/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121211
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) var_17))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_16))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (4430634191065607676ULL)))));
            var_22 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) > (18446744073709551615ULL)))));
            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1]))) : (18446744073709551593ULL)));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0] [i_2]))));
            var_25 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) var_15))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((signed char) var_1)))));
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((unsigned long long int) (-(17ULL))))));
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_17);
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)15))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_5])))))));
                        }
                    } 
                } 
                var_29 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)251))))) && (((/* implicit */_Bool) (~(arr_12 [i_0] [i_2]))))));
            }
        }
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
        {
            var_30 ^= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_7] [(unsigned char)0] [i_7])) : (((/* implicit */int) (short)-32765))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 4) 
            {
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    for (unsigned int i_10 = 3; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((arr_27 [i_8 - 4] [i_10 + 2] [6] [i_10] [i_10 - 2]) && (((/* implicit */_Bool) var_0))));
                            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_18 [i_8] [i_10])))))));
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((arr_21 [i_0] [i_7]) && (((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        }
                    } 
                } 
                arr_28 [i_0] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8 + 1] [i_8] [i_7] [i_7] [i_8 - 4] [i_8 - 2]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (7493102985541715280ULL)))));
                var_35 ^= ((/* implicit */_Bool) ((6544863133661976229ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                arr_31 [i_7] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)233))));
                var_36 = ((/* implicit */_Bool) var_17);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_37 = ((/* implicit */short) ((unsigned long long int) ((((var_13) + (2147483647))) << (((((/* implicit */int) (unsigned char)10)) - (10))))));
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) arr_35 [i_13 - 1] [i_12] [i_7] [i_0]))));
                        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((int) arr_9 [i_13] [i_13 + 1] [i_13 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 3; i_14 < 14; i_14 += 4) /* same iter space */
                        {
                            var_40 -= ((/* implicit */unsigned long long int) ((_Bool) var_3));
                            var_41 = ((((/* implicit */int) arr_13 [i_13 + 2] [i_7])) << (((var_9) - (5402838468195852818ULL))));
                        }
                        for (unsigned int i_15 = 3; i_15 < 14; i_15 += 4) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((unsigned long long int) ((arr_27 [i_0] [(unsigned char)2] [i_12] [3] [(short)9]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-15156))))))));
                            var_43 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_15 - 2] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)208)) ? (-553428486) : (((/* implicit */int) arr_11 [10U] [(unsigned char)7]))))) : (((19U) << (((10953641088167836342ULL) - (10953641088167836326ULL)))))));
                            var_44 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7]))) : (4294967279U))));
                        }
                    }
                } 
            } 
            var_45 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) >= (arr_1 [i_0]));
        }
        for (unsigned int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned short) arr_14 [i_0]);
            var_47 ^= ((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0]);
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            var_48 ^= ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) arr_43 [i_17]))))) && (((/* implicit */_Bool) min((arr_42 [i_18]), (((/* implicit */short) (_Bool)1)))))))));
            arr_49 [i_17] [i_18] = ((/* implicit */signed char) (_Bool)1);
            var_49 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 4095U))))) >> (((min((8938201248379085636ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_39 [i_17] [i_17] [i_18] [i_18] [i_17])), (var_18)))))) - (24551ULL)))));
        }
        var_50 = ((/* implicit */unsigned char) (-(max((var_7), (min((((/* implicit */unsigned long long int) var_0)), (var_7)))))));
        var_51 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((536869888) / (var_0)))), (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7493102985541715284ULL)))));
    }
    var_52 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + ((~(min((6291563347412195696ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((1397964246U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))))))));
        var_54 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (_Bool)1))) / (min((((unsigned int) var_7)), (((/* implicit */unsigned int) (short)-32765))))));
        var_55 = ((/* implicit */unsigned short) ((4294967277U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_19] [i_19])) ? (((/* implicit */int) ((((/* implicit */int) arr_51 [i_19])) > (((/* implicit */int) var_11))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)46857)) < (((/* implicit */int) arr_51 [i_19]))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 2) 
        {
            var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) var_14))));
            var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) var_18))));
            arr_56 [i_19] [0ULL] = ((/* implicit */unsigned char) ((min((arr_53 [i_19] [i_20] [i_19]), (((((/* implicit */unsigned long long int) arr_50 [i_20] [(short)2])) - (var_2))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_15))))));
            var_58 = ((/* implicit */_Bool) (+(272969193U)));
            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) (!(((_Bool) ((var_0) ^ (((/* implicit */int) arr_52 [8U]))))))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_21 = 0; i_21 < 22; i_21 += 4) 
    {
        for (int i_22 = 0; i_22 < 22; i_22 += 4) 
        {
            {
                var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1158222372U)) || ((_Bool)1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_23 = 3; i_23 < 21; i_23 += 1) 
                {
                    arr_64 [(unsigned char)18] [i_23] [i_22] [i_21] = ((unsigned char) arr_57 [i_23 - 3]);
                    var_61 = ((/* implicit */unsigned long long int) ((var_1) >= (arr_59 [i_21] [i_22])));
                    var_62 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 63)))) == (((2ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                }
                for (int i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_25 = 2; i_25 < 19; i_25 += 3) 
                    {
                        var_63 -= ((/* implicit */unsigned char) var_11);
                        var_64 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32764)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) arr_68 [i_21] [i_21] [(unsigned char)0] [(unsigned short)20] [i_24] [i_25])) ? (((/* implicit */unsigned int) arr_58 [i_21] [i_24])) : (var_6)))));
                    }
                    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 3) 
                    {
                        arr_72 [i_26] = ((/* implicit */unsigned char) min((((18241141827072959241ULL) + (((/* implicit */unsigned long long int) -2147483645)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_59 [i_24] [i_26])))))));
                        var_65 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 2147483616)) ? (((/* implicit */unsigned long long int) var_8)) : (13350400224127959617ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_21])))))))))) ^ (max((((/* implicit */unsigned int) (+(var_13)))), ((+(var_8)))))));
                    }
                    for (int i_27 = 0; i_27 < 22; i_27 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_66 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((var_18) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))))))));
                            var_67 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)122)) >= (((/* implicit */int) (_Bool)1))));
                            var_68 = ((/* implicit */unsigned char) max((var_68), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)115)) - (((/* implicit */int) max((arr_75 [18ULL] [i_27] [16ULL] [i_24] [i_24] [i_22] [i_21]), (arr_75 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])))))))));
                        }
                        for (unsigned int i_29 = 0; i_29 < 22; i_29 += 1) 
                        {
                            var_69 ^= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1)) && ((_Bool)1))))))));
                            var_70 = ((/* implicit */short) var_15);
                        }
                        var_71 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_13), (arr_63 [15U] [i_24] [i_21])))) || (((/* implicit */_Bool) arr_76 [i_21] [i_21] [i_21] [i_22] [2ULL] [13] [i_27]))))) * (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42344))))), (((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (unsigned short)7517)) : (((/* implicit */int) (unsigned short)36674))))))));
                    }
                    var_72 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))))) & (min((((/* implicit */unsigned long long int) (signed char)-82)), (var_3)))))) ? ((~(arr_74 [i_24] [i_24] [i_24] [i_22] [i_21] [i_21]))) : (((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) arr_77 [(unsigned char)7] [i_22] [i_22] [i_21]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (arr_74 [i_21] [i_22] [i_21] [i_21] [12ULL] [i_21])))));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_73 = ((/* implicit */unsigned int) max((var_73), (var_18)));
                    var_74 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_21] [i_22] [(_Bool)1] [i_21] [i_22])) && (((/* implicit */_Bool) (-(1726971473))))))), (((int) (!(((/* implicit */_Bool) arr_68 [i_30] [i_22] [i_22] [i_22] [i_21] [i_21])))))));
                    var_75 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) var_14)) ? (465695169U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31)))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_31 = 0; i_31 < 22; i_31 += 4) 
                {
                    for (unsigned long long int i_32 = 0; i_32 < 22; i_32 += 3) 
                    {
                        {
                            arr_86 [(_Bool)1] [i_22] [(_Bool)1] [i_32] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) - (3229239101U)))));
                            var_76 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_65 [i_31])) && (((/* implicit */_Bool) (-(11961466190936876013ULL)))))), ((!(((/* implicit */_Bool) var_3))))));
                            var_77 = ((/* implicit */signed char) max((var_77), (((/* implicit */signed char) max((var_0), (max((((((/* implicit */_Bool) arr_76 [i_21] [i_22] [i_31] [21ULL] [i_32] [i_22] [i_22])) ? (arr_80 [i_21] [(_Bool)1] [i_31]) : (var_13))), (((((-1354444174) + (2147483647))) >> (((/* implicit */int) var_15)))))))))));
                            /* LoopSeq 1 */
                            for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
                            {
                                var_78 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (arr_59 [i_21] [i_21])))) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_76 [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1] [i_33 + 1])))), (((((/* implicit */_Bool) arr_70 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) min(((unsigned short)56878), (((/* implicit */unsigned short) (unsigned char)63))))) : (((/* implicit */int) var_10))))));
                                var_79 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233)))))) && (((((/* implicit */_Bool) 18446744073709551593ULL)) && (((/* implicit */_Bool) (signed char)13))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_21] [i_22] [i_33]))) - (var_7))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
