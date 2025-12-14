/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108693
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
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 4] [i_1 + 4]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29862)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (unsigned short)30961))))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)4]))) >= (arr_10 [i_0] [i_0] [i_2] [(unsigned short)0])))), (min((((/* implicit */unsigned long long int) (short)-29862)), (arr_0 [(signed char)12] [i_2 + 2]))))))))));
                                arr_13 [i_0] [(unsigned short)3] [i_4] = ((/* implicit */signed char) ((arr_9 [i_4] [i_2] [i_1 + 3] [i_0 - 1]) * (((/* implicit */int) ((arr_10 [i_0] [i_4] [i_2 + 1] [i_0]) < (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2 - 1] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_15 [i_1] [i_5] [(signed char)6])) % (arr_9 [i_0 + 1] [i_1 - 2] [i_5] [i_6]))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (arr_18 [i_0] [11ULL] [i_2] [i_0] [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6159))) != (arr_11 [i_6] [i_5] [i_2] [i_1] [12]))))))) && (((/* implicit */_Bool) (unsigned short)30961))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        arr_23 [i_1] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */int) ((min((min((((/* implicit */unsigned long long int) -1)), (99571899959932044ULL))), (((/* implicit */unsigned long long int) ((arr_20 [i_0] [16ULL] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13366)))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_7] [(signed char)6] [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) ((_Bool) (short)22083))))))));
                        arr_24 [i_0] [i_1] [(unsigned short)3] [i_1] [(unsigned short)3] [(short)14] = ((/* implicit */unsigned short) (short)-22083);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        arr_27 [i_0] [i_0] [2ULL] [10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 2] [i_1 + 4] [i_2 - 2]))) > (arr_10 [13ULL] [i_0 - 1] [13ULL] [i_0])))) <= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_15 [i_0 + 2] [i_1 + 1] [i_2 + 2]))))));
                        arr_28 [i_0] [i_1 + 2] [i_0] [i_1 - 1] = ((/* implicit */signed char) arr_17 [(signed char)11] [i_0 - 2] [i_1 + 1] [i_2 - 1]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_20 = ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 2] [i_1 + 2] [i_2 - 1] [i_2 - 1])) ? (((((/* implicit */int) (unsigned short)34574)) - (((/* implicit */int) (unsigned short)34574)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)7862))))));
                        var_21 = ((/* implicit */signed char) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6175))) % (arr_20 [i_0 - 2] [(unsigned short)15] [i_0]))))) == (arr_11 [i_1] [i_9] [i_2] [i_1] [i_0])));
                        arr_32 [i_0] = ((/* implicit */_Bool) min(((short)-29862), ((short)(-32767 - 1))));
                        var_22 = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
                    }
                    for (int i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((long long int) (short)-22061));
                        arr_35 [i_0] [i_0 - 1] [i_1 + 1] [(_Bool)1] [i_0] [(_Bool)1] = 4662708571784028259LL;
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_15 [i_10 - 1] [i_2 + 1] [i_1 + 3]), (arr_15 [i_10 - 2] [(unsigned char)11] [i_1 + 2])))) ? (arr_22 [i_10] [i_10 - 1] [i_10 - 1] [i_1] [i_1 - 2]) : (arr_22 [i_10 - 2] [i_10 + 1] [i_10 - 2] [(signed char)6] [i_1 + 1])));
                        var_25 = ((/* implicit */short) arr_5 [i_0 + 2] [i_0] [7] [i_1]);
                    }
                    var_26 = ((/* implicit */short) max((min((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) arr_4 [i_0] [i_2])), ((unsigned short)57673))))), (((/* implicit */unsigned short) min((arr_3 [i_1 - 1] [i_2 - 2]), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_27 = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_0 - 2] [i_0] [(unsigned char)3] [i_0 + 1] [(_Bool)1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) ((4662708571784028259LL) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 2147483647))))))));
                arr_41 [i_0] = ((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_12 + 2] [i_12 + 1] [i_12] [i_12]);
            }
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_29 = ((/* implicit */short) arr_36 [i_0 - 2] [i_0 - 1] [i_0 - 2]);
                arr_44 [i_0] [i_11] [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_13] [i_13] [(signed char)14] [i_13])) ? (arr_12 [i_0] [i_11] [12ULL]) : (4662708571784028246LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [8ULL])))))));
            }
        }
        var_31 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((((/* implicit */int) arr_16 [i_0 - 2])) >> (((((/* implicit */int) arr_1 [i_0])) - (10851))))), (((/* implicit */int) (unsigned char)123))))) : (((/* implicit */unsigned short) min((((((/* implicit */int) arr_16 [i_0 - 2])) >> (((((((/* implicit */int) arr_1 [i_0])) - (10851))) - (4133))))), (((/* implicit */int) (unsigned char)123)))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((arr_19 [i_14]) & (((/* implicit */unsigned long long int) 4662708571784028259LL))))));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            arr_52 [i_14] = ((/* implicit */int) (unsigned short)7862);
            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_15] [i_15]))));
        }
        for (short i_16 = 1; i_16 < 11; i_16 += 3) 
        {
            arr_57 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 549755813887LL)) ? (-197434240) : (arr_31 [i_14] [(unsigned char)0]))))));
            /* LoopSeq 1 */
            for (signed char i_17 = 4; i_17 < 12; i_17 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29865)) && (((/* implicit */_Bool) arr_56 [i_17 - 4] [i_17 - 2] [(_Bool)1]))));
                arr_61 [i_14] [i_16] [i_17 - 1] = ((/* implicit */signed char) ((unsigned long long int) arr_15 [i_17] [i_17] [i_17 - 3]));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 3) 
                {
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_17] [i_16 + 1] [i_18] [i_16 + 1] [(unsigned char)2])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_18] [(unsigned char)5] [i_16] [i_14]))) : (757902435093743494ULL))) : (((4576806207302209917ULL) << (((((/* implicit */int) arr_8 [17LL] [12ULL] [(signed char)8] [i_16 - 1] [i_14])) + (65))))))))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_64 [i_17] [(unsigned char)7] [i_17] [i_17 - 3])) ? (arr_64 [i_16] [i_16] [i_16 + 1] [i_17 - 2]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    var_37 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [(signed char)9] [(signed char)9])) - (((/* implicit */int) (unsigned short)25269))))) ? (((((/* implicit */_Bool) arr_10 [i_14] [i_16] [i_16 - 1] [16])) ? (15258634034478574583ULL) : (1099511627775ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_16 + 1] [i_16 + 1] [i_17 + 1] [(unsigned short)10]))));
                }
                arr_65 [i_14] [i_16 + 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13806))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (arr_19 [i_16])))));
            }
        }
    }
    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
    {
        arr_69 [i_19] [i_19] = ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_38 [i_19] [(short)9] [i_19])), (arr_4 [i_19] [4LL]))))) > (max((-8992570693754468010LL), (((/* implicit */long long int) arr_30 [(unsigned short)14])))))) ? (max((((/* implicit */int) arr_21 [i_19] [i_19] [i_19] [(unsigned short)16] [i_19])), (min((arr_31 [(unsigned char)9] [i_19]), (((/* implicit */int) (unsigned char)247)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [(signed char)9] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (short)-29857)) : (((/* implicit */int) arr_47 [i_19]))))) == ((-9223372036854775807LL - 1LL))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 1) 
        {
            var_38 = ((/* implicit */int) max((arr_1 [8U]), (((/* implicit */short) max((((((/* implicit */int) arr_42 [(_Bool)1] [i_20])) >= (((/* implicit */int) arr_26 [(_Bool)1])))), (((_Bool) arr_9 [(unsigned char)3] [(short)1] [i_19] [i_19])))))));
            var_39 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)48381)) == (((/* implicit */int) arr_70 [(unsigned short)11] [(unsigned short)11]))))) | (((/* implicit */int) arr_40 [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20 - 1])))) - (((/* implicit */int) (short)-6159))));
        }
        arr_73 [i_19] = (~(min((arr_31 [i_19] [i_19]), (((/* implicit */int) (short)32379)))));
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) /* same iter space */
    {
        var_40 |= ((/* implicit */long long int) arr_58 [i_21]);
        var_41 = ((/* implicit */int) ((signed char) arr_36 [i_21] [i_21] [i_21]));
    }
    var_42 = ((/* implicit */unsigned char) var_10);
}
