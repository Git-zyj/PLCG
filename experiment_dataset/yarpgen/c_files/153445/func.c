/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153445
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_9)), (13318701309992448780ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))), (max((var_6), (((/* implicit */unsigned long long int) var_15)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_0);
                        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_16 [i_0] [i_4] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36471))) | (11927892869773441081ULL))));
                    arr_17 [i_0] [i_4] [i_0] = ((signed char) arr_2 [i_4 - 1] [i_4]);
                    arr_18 [i_0] [i_4 + 1] = ((/* implicit */signed char) ((int) (~(var_0))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 4; i_7 < 8; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        arr_26 [i_0] [(unsigned short)6] [(signed char)10] [8ULL] [i_6] = ((/* implicit */_Bool) (~(6518851203936110544ULL)));
                        arr_27 [i_0] [i_0] [i_0] = ((signed char) arr_1 [i_0]);
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) > (((/* implicit */int) var_2)))))) / (6518851203936110536ULL)));
                    }
                } 
            } 
            var_21 ^= arr_3 [(signed char)4];
            arr_28 [i_0] = ((/* implicit */int) ((unsigned int) arr_15 [i_0 - 1] [i_0]));
            arr_29 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)41))));
        }
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) > (var_13))) ? (((/* implicit */int) ((6518851203936110521ULL) <= (11927892869773441095ULL)))) : (((/* implicit */int) ((var_13) <= (-1367136881))))));
    }
    for (long long int i_9 = 3; i_9 < 13; i_9 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9])) ? (var_14) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) != (11927892869773441110ULL))))))) ^ (((((/* implicit */_Bool) (short)16384)) ? (10544217388267825731ULL) : (min((13749790986598453370ULL), (575334852396580864ULL)))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */int) (short)8192)) : (268435440)))) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_4)), (var_6))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_10 + 3] [i_11] [i_12] [i_9 - 2] [i_11])) ? (var_0) : (((/* implicit */long long int) var_13)))))))) ? (((arr_39 [i_9 - 1] [i_9] [i_11]) / (((/* implicit */int) var_4)))) : (((/* implicit */int) var_10))));
                        var_25 -= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_32 [0U])) || (((/* implicit */_Bool) ((arr_35 [(unsigned short)14]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [10ULL]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        arr_44 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_10 + 2])) & (((/* implicit */int) arr_34 [i_10 - 1]))));
                        arr_45 [i_9] [i_13] [i_9] [i_9] [i_9] = ((/* implicit */signed char) var_9);
                        arr_46 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((short) 4696953087111098229ULL));
                    }
                    var_26 -= ((/* implicit */_Bool) ((2943562157433102443ULL) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_42 [i_9] [i_10] [(unsigned short)6] [i_9] [i_11])) <= (((/* implicit */int) var_15)))) ? ((~(-8364848009421070009LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11] [i_10] [(unsigned short)4] [i_11] [i_11]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_27 *= ((/* implicit */short) ((unsigned short) var_2));
                                arr_52 [(_Bool)1] [i_9] [i_9] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4503599090499584ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 6518851203936110549ULL)))) : (max((((/* implicit */unsigned long long int) (signed char)-27)), (((16378706334203042855ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8184)))))))));
                                arr_53 [i_9] [i_10] [i_10 + 1] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((~(var_7))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))), (((((arr_35 [i_9]) >> (((arr_33 [14ULL] [i_15 + 3]) - (2050245061))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)26315))))))));
                            }
                        } 
                    } 
                    arr_54 [i_9] [i_10] [1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 6518851203936110526ULL))) ? (6518851203936110542ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28741)) && ((_Bool)1)))))))) || (((arr_38 [12LL] [i_9] [i_11]) && (arr_38 [i_11] [i_9] [i_11])))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 2) /* same iter space */
                    {
                        arr_65 [i_16] [i_16] [i_18 - 1] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) 117440512)) ? (2068037739506508749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2591)))));
                        var_28 = arr_62 [17LL] [i_16] [17LL] [i_19];
                        var_29 = ((/* implicit */unsigned short) 2469674658U);
                    }
                    for (unsigned long long int i_20 = 2; i_20 < 16; i_20 += 2) /* same iter space */
                    {
                        arr_69 [i_18] [(_Bool)0] [i_17] [i_16] [(_Bool)0] [i_18] = ((/* implicit */unsigned char) ((_Bool) 10294575617774569902ULL));
                        arr_70 [i_18] [i_18 - 1] [i_18] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */long long int) var_13)) % (((((/* implicit */long long int) ((/* implicit */int) (short)1017))) + (var_7)))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_4))))) & (((unsigned int) var_2)))))));
                        arr_73 [i_21] [i_18] [i_18] [i_18 - 1] [i_18] [14ULL] = ((/* implicit */short) ((((/* implicit */int) var_2)) / (arr_63 [i_16] [(unsigned char)4] [i_18])));
                    }
                    arr_74 [i_16] &= ((unsigned long long int) arr_68 [i_18 - 1] [i_17] [16U] [i_18 - 1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_22 = 1; i_22 < 18; i_22 += 3) 
        {
            for (long long int i_23 = 0; i_23 < 20; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_24 = 0; i_24 < 20; i_24 += 2) 
                    {
                        for (short i_25 = 0; i_25 < 20; i_25 += 3) 
                        {
                            {
                                arr_87 [i_22] = ((/* implicit */long long int) ((6518851203936110521ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40959)))));
                                arr_88 [(signed char)9] [i_22] [i_22] [i_24] [i_24] = (-(((/* implicit */int) arr_56 [i_25])));
                                var_31 = ((/* implicit */long long int) 512ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 20; i_26 += 4) 
                    {
                        for (unsigned short i_27 = 0; i_27 < 20; i_27 += 3) 
                        {
                            {
                                arr_94 [i_22] [i_22] = ((/* implicit */unsigned short) var_8);
                                arr_95 [i_22] [(signed char)16] [i_22] [(unsigned short)13] [i_27] [i_16] = ((/* implicit */signed char) 512ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 20; i_28 += 4) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_72 [i_28] [i_28] [18LL] [i_28])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)63488))))));
        arr_98 [i_28] = ((/* implicit */int) ((((((/* implicit */_Bool) 140640655)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) & (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_28])))));
    }
}
