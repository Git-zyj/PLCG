/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14387
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
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (unsigned short)64749)) ? (((((/* implicit */_Bool) (unsigned short)60804)) ? (((/* implicit */int) (unsigned short)786)) : (((/* implicit */int) (unsigned short)17829)))) : (((/* implicit */int) (unsigned short)17829)));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64749)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20616))) + (arr_0 [i_0 - 3]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) 1614475721))))));
        arr_3 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(var_9))) : (((((/* implicit */_Bool) (unsigned short)8948)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17829))) : (var_3))))) : (arr_0 [i_0])));
    }
    for (long long int i_1 = 4; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_0))));
        var_20 += ((/* implicit */long long int) (unsigned short)37436);
    }
    for (long long int i_2 = 4; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 4) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63682))) : (((arr_7 [i_3]) + (var_12)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_1 [i_2 + 1] [i_2]) <= (((((/* implicit */_Bool) 1508434212)) ? (var_3) : (-6610705327354807561LL))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_18 [i_2] [i_6] [i_3] [i_4] [i_5] [i_6] [i_6] = 4890593853719798676LL;
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1]))));
                            arr_19 [i_2] [i_6] [i_4] [i_5] [i_6] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6 + 4])) ? (arr_6 [i_3 - 2]) : (-2049736157)));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37126)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54615))) : (arr_1 [i_2] [i_3])));
                arr_20 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1508434212)) && (((/* implicit */_Bool) ((var_2) | (var_2))))));
            }
            for (long long int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                arr_25 [i_2] [i_3] [i_7] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5358425189483190896LL)) ? (arr_14 [i_3 - 2] [i_3 + 1]) : (var_16)))) && (((/* implicit */_Bool) 0))));
                var_23 = ((/* implicit */long long int) min((var_23), (min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_7] [i_7])) : (1614475721)))), (var_3))), (((((/* implicit */_Bool) arr_4 [i_7 - 1] [i_7])) ? (var_13) : (((/* implicit */long long int) 1614475721))))))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17829)) ? (1837614662) : (arr_4 [i_2 - 2] [i_3 - 2])));
                    arr_34 [i_2] [i_3] [i_8] = ((/* implicit */int) (unsigned short)43427);
                }
                for (int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    arr_38 [i_2] [i_3] [i_3] [i_3] [i_8] [i_10] = arr_32 [i_10] [i_10] [i_10 + 1] [i_3 + 1] [i_2 - 1] [i_2];
                    var_25 &= ((/* implicit */unsigned short) -1837614663);
                    var_26 = ((/* implicit */unsigned short) 3099157907548867695LL);
                    arr_39 [i_2] [i_3] [i_8] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) + (arr_24 [i_3 - 1] [i_3])));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    var_27 &= ((/* implicit */unsigned short) -8368296437347709338LL);
                    var_28 = ((/* implicit */unsigned short) 15);
                }
                arr_44 [i_2] [i_3] = var_16;
            }
            var_29 = min((((/* implicit */long long int) arr_9 [i_2 - 2])), (min((-8335758187715713577LL), (3275446473106148074LL))));
            arr_45 [i_2] = ((((/* implicit */_Bool) -1837614659)) ? ((((!(((/* implicit */_Bool) -7058158153970088361LL)))) ? (15) : (((/* implicit */int) (unsigned short)37409)))) : (((/* implicit */int) (unsigned short)1867)));
        }
        /* vectorizable */
        for (long long int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
        {
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_12] [i_2] [i_2]))) : (8368296437347709338LL)))) ? (-1837614662) : (((((/* implicit */_Bool) (unsigned short)37409)) ? (((/* implicit */int) (unsigned short)65535)) : (33554431))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_2 - 4] [i_2] [i_2 - 2])) / (((((/* implicit */_Bool) arr_1 [i_2] [i_12])) ? (arr_31 [i_2] [i_2] [i_2]) : (((/* implicit */int) (unsigned short)54176))))));
            arr_49 [i_2] [i_12] = ((/* implicit */unsigned short) (-(arr_1 [i_2 + 1] [i_12 + 2])));
            var_32 |= ((((((/* implicit */_Bool) arr_42 [i_2] [i_2] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_2] [i_12] [i_12]))) : (var_13))) | (((8335758187715713577LL) + (((/* implicit */long long int) ((/* implicit */int) var_8))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_13 = 1; i_13 < 17; i_13 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_14 = 0; i_14 < 18; i_14 += 2) 
            {
                var_33 = ((/* implicit */unsigned short) ((((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (48435))))) == (((/* implicit */long long int) arr_50 [i_2 - 2] [i_13 - 1] [i_14]))));
                var_34 = ((((/* implicit */_Bool) (unsigned short)17315)) ? (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17316))))) : (((/* implicit */long long int) 1837614662)));
            }
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                var_35 = ((((((/* implicit */_Bool) arr_26 [i_2] [i_13 + 1] [i_15])) ? (var_17) : (0))) * (((1643095803) / (1975087150))));
                var_36 = ((/* implicit */unsigned short) -3295220246695895312LL);
                arr_58 [i_13] [i_13] [i_15] = ((/* implicit */unsigned short) var_13);
                var_37 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_5), ((unsigned short)511)))) ? (((/* implicit */long long int) arr_40 [i_2 + 1] [i_13] [i_13] [i_15])) : (((((/* implicit */_Bool) arr_51 [i_2] [i_13] [i_15])) ? (var_1) : (((/* implicit */long long int) arr_41 [i_13])))))), (((/* implicit */long long int) ((arr_21 [i_2 - 3] [i_13 - 1] [i_15]) & (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_4)))))))));
                /* LoopNest 2 */
                for (long long int i_16 = 3; i_16 < 17; i_16 += 3) 
                {
                    for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        {
                            arr_65 [i_2] [i_13] [i_15] [i_13] = ((/* implicit */int) arr_37 [i_2] [i_16]);
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) 8621936060391695113LL))));
                            arr_66 [i_2] [i_13] [i_15] [i_13] = ((/* implicit */unsigned short) 8335758187715713576LL);
                            var_39 &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48220)) ? (((/* implicit */long long int) 32767)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4009095232130292535LL)) ? (arr_1 [i_17] [i_13]) : (((/* implicit */long long int) -1321059700))))) ? (((((/* implicit */_Bool) var_13)) ? (var_1) : (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2])) ? (var_10) : (var_17))))))));
                        }
                    } 
                } 
            }
            var_40 = ((((/* implicit */int) var_6)) - (((/* implicit */int) ((4194303) != (((/* implicit */int) ((-1643095804) >= (2147483647))))))));
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) min((8368296437347709338LL), (0LL)))) ? (((((/* implicit */_Bool) ((4009095232130292511LL) - (-291505592856015293LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7667))) : (arr_22 [i_2] [i_2 - 2] [i_2] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45365)))));
            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) 978322165))));
        }
        /* vectorizable */
        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            var_43 = ((/* implicit */long long int) ((1837614662) / (arr_50 [i_2 - 2] [i_18] [i_18])));
            /* LoopSeq 1 */
            for (int i_19 = 2; i_19 < 16; i_19 += 4) 
            {
                arr_71 [i_19] [i_18] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (3387015587931888931LL) : (var_1)))) ? (arr_63 [i_19] [i_19] [i_19 + 2] [i_18] [i_2] [i_2] [i_2]) : (var_1));
                var_44 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)21072)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))) == (((/* implicit */int) arr_10 [i_2] [i_2 - 1]))));
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (unsigned short)19324))));
                /* LoopSeq 2 */
                for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                {
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (arr_29 [i_2] [i_18] [i_19])))) ? (((((/* implicit */_Bool) 8335758187715713576LL)) ? (4454744736275392897LL) : (var_1))) : (((/* implicit */long long int) arr_32 [i_19 - 2] [i_19] [i_19 - 2] [i_19] [i_2 + 1] [i_2 + 1]))));
                    var_47 = var_2;
                }
                for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
                {
                    arr_77 [i_2] [i_18] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_56 [i_21] [i_19] [i_18] [i_2])) | (arr_7 [i_19 - 1])));
                    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_2 - 3])) ? (((/* implicit */int) (unsigned short)7667)) : (var_17)));
                    var_49 = ((/* implicit */int) ((((/* implicit */_Bool) 6228074567697149289LL)) ? (((/* implicit */long long int) var_10)) : (var_2)));
                }
            }
            var_50 = (i_18 % 2 == zero) ? (((/* implicit */long long int) ((((arr_17 [i_2] [i_2 - 2] [i_18] [i_2] [i_2]) + (2147483647))) << (((((arr_17 [i_18] [i_2 - 2] [i_18] [i_2] [i_2]) + (126681156))) - (14)))))) : (((/* implicit */long long int) ((((arr_17 [i_2] [i_2 - 2] [i_18] [i_2] [i_2]) + (2147483647))) << (((((((arr_17 [i_18] [i_2 - 2] [i_18] [i_2] [i_2]) + (126681156))) - (14))) - (30863902))))));
        }
        for (unsigned short i_22 = 2; i_22 < 16; i_22 += 1) 
        {
            var_51 = ((/* implicit */long long int) 1481446521);
            var_52 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287)) ? (-1227194122) : (((/* implicit */int) (unsigned short)31262))))) ? (((arr_27 [i_22 - 1] [i_2] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((arr_27 [i_22 - 1] [i_22] [i_22]) | (arr_27 [i_22 - 1] [i_22] [i_22]))));
        }
        var_53 &= ((/* implicit */int) (~(((((/* implicit */long long int) arr_35 [i_2 - 2])) - (-6228074567697149274LL)))));
    }
    /* vectorizable */
    for (long long int i_23 = 4; i_23 < 17; i_23 += 4) /* same iter space */
    {
        var_54 = ((/* implicit */long long int) ((arr_74 [i_23] [i_23 - 1] [i_23] [i_23]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46211)))));
        var_55 = ((arr_73 [i_23 - 3]) + (((/* implicit */long long int) ((/* implicit */int) var_6))));
    }
    var_56 = ((/* implicit */int) 8368296437347709337LL);
}
