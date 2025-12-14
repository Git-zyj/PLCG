/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17045
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
    var_16 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 3766211137U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-15819))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_17 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23525))) <= (3901005250U)))), (11364847423665735897ULL))) & (min((var_3), (((7081896650043815720ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-88)))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((7081896650043815745ULL), (11364847423665735871ULL)));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)21042))))) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) : ((~(7081896650043815706ULL))))))));
    }
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (~(arr_3 [i_1])))), (11364847423665735870ULL)))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12717530386495725838ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((25ULL) / (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (11364847423665735870ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (short)-27192)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) || (((/* implicit */_Bool) var_0)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) && (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)208), (((/* implicit */unsigned char) (_Bool)1)))))) : (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 1]))))))));
                        arr_16 [i_2] = ((/* implicit */short) max((min((arr_3 [i_3]), (arr_3 [i_3]))), (min((((/* implicit */long long int) var_7)), (arr_3 [i_4])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_15)))) ? (max((((arr_8 [i_5] [i_5]) << (((((/* implicit */int) (signed char)(-127 - 1))) + (141))))), (((((/* implicit */_Bool) 11364847423665735897ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2799285224U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_5] [i_1] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)21048)) ? (arr_10 [i_1] [i_1] [i_1 - 3]) : (((/* implicit */int) var_8))))))))))));
            var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)21039)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3840))) : (arr_11 [i_5] [i_1] [i_5]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
        }
    }
    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                {
                    arr_26 [i_6] [i_8] [i_8] = ((/* implicit */unsigned char) ((((-2801255837377541305LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? ((~(((((/* implicit */_Bool) 1167766977U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (1495682072U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))));
            var_25 = ((/* implicit */unsigned short) (((((+(7820666397979238663ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) / (arr_28 [i_6] [i_9])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_6] [i_9]), (((/* implicit */unsigned short) arr_9 [i_6] [i_6]))))) ? (((/* implicit */int) min((arr_4 [i_9] [i_6]), (((/* implicit */unsigned short) (unsigned char)97))))) : (((/* implicit */int) (signed char)-77)))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (10626077675730312953ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_21 [i_6] [i_6] [i_9 + 2]))))) : ((~(((/* implicit */int) (unsigned char)82))))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 2) 
        {
            var_27 = (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11364847423665735897ULL)) ? (((/* implicit */int) var_5)) : (arr_32 [i_10 - 1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_6])), (var_6)))) : (max((arr_18 [i_10] [i_6] [i_6]), (((/* implicit */unsigned long long int) arr_4 [i_6] [i_10])))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 2; i_12 < 18; i_12 += 3) 
                {
                    {
                        arr_38 [i_12 - 2] [i_11] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-10391), ((short)21036)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (25U)))) ? (-712756019) : (((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */int) (short)21048)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)21036))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            var_28 += max((((((/* implicit */_Bool) 9497126764299164211ULL)) ? (45ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((arr_10 [5ULL] [i_12 - 2] [i_10 - 1]), (arr_10 [i_13 + 1] [i_12 - 2] [i_6])))));
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_10 [i_10 + 1] [i_12] [i_10]))))));
                        }
                        arr_41 [i_11] [i_10] [i_6] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_10] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? ((-(18240437460197185523ULL))) : (((18240437460197185528ULL) >> (((((/* implicit */int) (signed char)68)) - (50))))))) <= (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)205)))) << ((((~(var_15))) - (1742239087U))))))));
                    }
                } 
            } 
            arr_42 [i_10] = ((/* implicit */short) min(((~(865022885U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_10 - 1] [i_10])))))));
            var_30 = ((/* implicit */unsigned int) min((var_30), ((-(min((arr_8 [i_10] [i_10 - 1]), (3429944410U)))))));
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_10 + 1]), (((/* implicit */unsigned long long int) -825903836))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-108)), (var_11)))) : (min((((/* implicit */unsigned long long int) arr_28 [i_10 + 1] [i_10 - 1])), (var_9)))));
                var_32 += ((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551585ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423488ULL))))))))) ? ((+(var_13))) : (((((/* implicit */_Bool) (unsigned short)59451)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)20866))))) : (min((((/* implicit */unsigned long long int) (unsigned short)58662)), (7081896650043815745ULL)))))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_33 = (~(18446744073709551590ULL));
                /* LoopSeq 2 */
                for (signed char i_16 = 1; i_16 < 20; i_16 += 1) 
                {
                    var_34 *= (-(((((/* implicit */_Bool) 9009012818311017221LL)) ? (3429944410U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6874))))));
                    arr_49 [i_16] [i_15] [(unsigned short)18] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 600586073U))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) arr_21 [i_6] [i_6] [i_6])))) : (((((/* implicit */int) arr_4 [i_6] [i_16])) & (((/* implicit */int) arr_34 [i_16] [i_6] [i_6] [i_6]))))))));
                }
                for (signed char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        arr_55 [i_6] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-21049)), (max((((/* implicit */unsigned int) (unsigned short)58662)), (arr_8 [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) arr_48 [i_10] [i_15])) : (((/* implicit */int) arr_5 [i_6]))))) : (((((arr_0 [i_10 - 1]) << (((865022885U) - (865022832U))))) | (arr_43 [i_18] [i_10 + 1] [i_6])))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1492130376U)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_22 [i_15] [i_17] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 17870283321406128120ULL)) || (((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_50 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])), (arr_10 [i_10 + 1] [i_10] [i_10 - 1])))) : (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) 8064LL)) : (arr_45 [i_6] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_6] [i_6] [i_15] [i_6])) ? (8064LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                        var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3429944411U)) ? (((/* implicit */unsigned long long int) arr_22 [i_10 - 1] [i_15] [i_17])) : (var_9))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_10 - 1] [i_17] [i_17])) ? (2127229542U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))))));
                    }
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_56 [i_17] [i_17] [(unsigned short)0] [i_17] [i_6] &= (~(((arr_31 [i_10 + 1] [i_10 + 1]) ? (var_2) : (var_2))));
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_6] [i_6] [i_10 - 1] [i_15] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8039LL)))) ? ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_10 - 1] [i_10] [i_10] [i_10 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (var_10)))) & ((~(((/* implicit */int) arr_5 [i_17])))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        arr_61 [i_6] [i_15] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_6]))) >= (1492130379U)))), (((((/* implicit */_Bool) arr_22 [i_6] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_28 [i_10 + 1] [i_17]))))))));
                        arr_62 [i_15] [17LL] [i_15] [i_15] [i_19] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (max((((/* implicit */int) arr_57 [i_6] [(unsigned char)20] [i_15] [i_17] [i_15] [i_10])), (arr_44 [i_10]))) : (((((/* implicit */_Bool) arr_51 [i_10] [(_Bool)1])) ? (((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6])) : (arr_51 [i_10] [i_10])))))), (max((6ULL), (((/* implicit */unsigned long long int) (unsigned char)149))))));
                    }
                }
                var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) >> (((2313033144U) - (2313033134U)))))) ? (((((/* implicit */_Bool) arr_29 [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10 + 1] [i_10 - 1]))) : (var_9))) : (((/* implicit */unsigned long long int) ((((arr_29 [i_6]) + (9223372036854775807LL))) >> (((arr_29 [i_6]) + (4275218131932454168LL))))))));
                /* LoopSeq 2 */
                for (unsigned char i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) % ((~(((arr_34 [i_6] [i_10] [i_15] [i_20]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551591ULL))))))))));
                    var_41 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1026181535)) ? (((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (max((5259336597550326355ULL), (max((((/* implicit */unsigned long long int) -4158935636547285584LL)), (arr_45 [i_10 - 1] [i_6])))))));
                }
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    arr_69 [i_15] [i_10 + 1] [i_15] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_43 [i_21] [i_10 - 1] [i_10]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_15] [i_10 + 1] [i_10 - 1] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (7658606464956790641LL))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_8 [i_10] [i_21]))))))))));
                    arr_70 [i_6] [i_15] [i_10] [i_21] [i_15] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10 - 1])))))));
                    arr_71 [i_21] [i_15] [i_15] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 3433820157U)) != (arr_18 [i_6] [i_10 + 1] [i_15]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [18U] [i_10] [i_15]))) : (var_11)))))) ? (((((/* implicit */_Bool) arr_35 [i_10] [i_10 - 1] [i_10] [i_10 + 1])) ? (((/* implicit */long long int) min((13), (((/* implicit */int) var_8))))) : (-8070LL))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_66 [i_6] [i_10] [i_15] [i_21] [i_21])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_15] [i_21] [i_15] [i_6])) : (551635221))) : (((/* implicit */int) var_0)))))));
                    var_42 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_36 [i_21] [i_10] [i_6])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63886))) != (var_6)))) : ((~(((/* implicit */int) arr_12 [i_15] [i_10] [i_15] [i_10]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [i_10 - 1] [i_10 + 1] [i_15] [i_6])) * (((/* implicit */int) ((16383U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_10] [i_15] [i_21]))))))))) : ((-(2801749413U))));
                    var_43 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_25 [i_10] [i_21])), (((((/* implicit */_Bool) 18145325183762279449ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_21]))) : (var_6)))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_21 [i_21] [i_15] [i_10 - 1])), (var_12)))) ? (((349574852425290600ULL) + (((/* implicit */unsigned long long int) 865022886U)))) : (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_6])))))))));
                }
            }
        }
    }
}
