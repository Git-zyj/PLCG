/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106267
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
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((var_12) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))) : (var_7)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] &= (+(max(((~(var_1))), (max((arr_3 [i_0]), (((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) min((8141562294134292146LL), (8141562294134292146LL)));
            var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_13))))) ? (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))) : ((~(max((8141562294134292146LL), (((/* implicit */long long int) (unsigned char)85))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                arr_11 [i_2 + 2] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_3))));
                var_20 = ((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2 - 1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((/* implicit */int) var_12))));
            }
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                arr_14 [i_0] [i_3] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_3] [(unsigned short)6])) ? (((/* implicit */int) arr_6 [i_3 + 2] [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3 + 2] [i_3] [i_3])))));
                var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_1])) ? (arr_12 [i_0] [i_1] [i_3 - 1] [i_1]) : (arr_12 [i_3] [i_0] [i_3 + 2] [i_0]))) & (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_12 [i_0] [i_1] [i_3 + 1] [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_3] [i_3 + 1] [15LL] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 - 1]))))), (arr_12 [i_0] [i_1] [i_4] [i_5])));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((991232017) << (((((-8141562294134292141LL) + (8141562294134292152LL))) - (11LL)))))))) <= ((+(((((/* implicit */_Bool) var_13)) ? (arr_8 [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_7 + 3] [i_7 + 3] [14U])) ? (arr_12 [i_1] [i_7 - 1] [i_7 + 2] [i_7]) : (arr_12 [i_1] [i_7 - 1] [i_7] [i_7]))) : (((/* implicit */unsigned int) arr_15 [i_0] [1U] [i_1] [i_0 - 1] [i_7] [i_7 - 1]))));
                    var_24 = var_9;
                    arr_25 [i_1] [4U] = ((/* implicit */short) (~(((unsigned int) arr_17 [i_0 - 1] [i_7] [i_7] [i_7 + 2] [i_1]))));
                    var_25 |= ((/* implicit */_Bool) ((7069915203823659648LL) * (((/* implicit */long long int) -1))));
                    arr_26 [i_0] [i_1] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_0 [i_0 - 1]))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 + 1])) > (max((arr_15 [i_0] [i_1] [i_1] [i_7] [i_0 - 1] [i_1]), (((/* implicit */int) arr_17 [12U] [i_1] [i_6] [i_7] [i_7]))))))) : (((/* implicit */int) min((arr_17 [i_7 + 2] [i_7 + 2] [i_1] [i_7 + 3] [i_7]), (((/* implicit */unsigned short) arr_23 [i_0 + 1] [i_0 - 1] [i_7 - 1] [i_7] [i_7])))))));
                }
                var_26 = ((/* implicit */unsigned short) (~((+(((long long int) arr_9 [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_27 [i_0] [i_1] [i_6] [i_8] [i_9]), (((/* implicit */unsigned char) arr_18 [i_0 - 1] [i_1] [i_6] [i_8] [i_9]))))) < (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_3))))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (9223372036854775807LL))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (-13)))))))))));
                        var_28 &= ((/* implicit */int) (((+(2668934278U))) >> (((((/* implicit */_Bool) ((arr_9 [i_1]) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) & (9223372036854775807LL)))))));
                        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_6] [i_8] [13ULL]))))) ^ (((((/* implicit */_Bool) 1626033035U)) ? (1126451383) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)15] [i_0 + 1])) || (((/* implicit */_Bool) var_6)))))))) : ((~(var_6)))));
                        arr_31 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8141562294134292141LL)))) != (8141562294134292146LL))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_36 [i_6] [i_1] [i_6] [i_8] [i_10] [i_10] [i_8] = ((/* implicit */signed char) arr_0 [i_0 + 1]);
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_4))));
                        arr_37 [i_10] [i_1] = ((/* implicit */int) var_2);
                    }
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_8 [8U] [8U]))));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_11] [i_8] [i_11] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned char)43))) ? (((/* implicit */long long int) 4026531840U)) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)21))) ^ (6261377873958720451LL)))))) : (var_14));
                        var_32 = ((((/* implicit */int) arr_23 [i_0] [12U] [i_11 + 1] [i_8] [i_11 + 1])) < (((arr_23 [i_8] [i_1] [i_11 + 1] [i_6] [i_6]) ? (((/* implicit */int) arr_23 [i_1] [(signed char)10] [i_11 + 1] [10LL] [i_11])) : (((/* implicit */int) arr_23 [i_8] [i_1] [i_11 + 1] [i_8] [i_11 + 1])))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_8] [i_11 + 1] [i_11]))) ? (arr_34 [i_0] [i_11] [i_11 + 1] [i_8] [i_11] [i_0 - 1]) : (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)227)))) ^ (((/* implicit */int) min((arr_19 [i_0] [i_1] [i_6] [i_8] [i_11]), (var_15)))))))));
                        var_34 = ((_Bool) (~(((/* implicit */int) (unsigned char)227))));
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        arr_45 [i_0 + 1] [i_1] [i_6] [i_8] = (-(((((/* implicit */int) var_16)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 505640871)) < (10925181076849639792ULL)))))));
                        var_35 = ((/* implicit */int) (~(arr_38 [i_12])));
                        var_36 += ((/* implicit */unsigned long long int) var_15);
                        var_37 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)21657)) << (((/* implicit */int) var_12))))));
                    }
                    var_38 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1635554523)) ? (3469854U) : (18U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3955838766U)))) : (((/* implicit */int) (unsigned short)57383)))));
                }
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 19; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((arr_13 [(short)14]) ? (((/* implicit */long long int) ((arr_47 [i_0 + 1] [i_0 + 1]) - (((/* implicit */int) arr_32 [16ULL] [16ULL]))))) : (max((((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [11U])), ((~(arr_5 [i_15] [i_13]))))))))));
                        arr_57 [i_14] [11U] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? ((((~(17732923532771328ULL))) << (((var_14) - (267073338290882259ULL))))) : (((/* implicit */unsigned long long int) ((arr_9 [i_14 - 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)252)))))));
                    }
                } 
            } 
            var_40 |= ((/* implicit */unsigned char) ((((arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [0] [i_0 - 1]) + (2147483647))) >> (((((/* implicit */int) var_17)) - (54427)))));
        }
        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_7))));
        var_42 = ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_6)))), (((((/* implicit */_Bool) var_17)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0] [i_0] [13ULL]))) : (((((/* implicit */_Bool) var_10)) ? (arr_38 [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
        var_43 = ((/* implicit */unsigned int) arr_50 [i_0 + 1] [i_0] [i_0] [i_0 + 1]);
    }
    var_44 = ((/* implicit */int) min((((/* implicit */long long int) (signed char)-76)), (-4184474306127234102LL)));
    /* LoopNest 2 */
    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        for (unsigned long long int i_17 = 4; i_17 < 20; i_17 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1635554539)) == (31U)));
                    var_46 = ((/* implicit */unsigned long long int) max((((max((4808047862488845680ULL), (((/* implicit */unsigned long long int) var_4)))) == (((/* implicit */unsigned long long int) arr_63 [i_18] [14U] [i_16])))), (((((/* implicit */_Bool) arr_61 [i_18] [i_17] [i_16])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_59 [i_16])) | (((/* implicit */int) var_12)))))))));
                    arr_66 [i_16] [i_18] [i_17 - 4] [i_18] = (~((~(((/* implicit */int) arr_59 [i_16])))));
                }
                for (unsigned char i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (-505640872))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) (signed char)-39))))) : (((/* implicit */int) min((arr_65 [i_17] [(signed char)0]), (((/* implicit */unsigned short) (signed char)88)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned int) 505640871))));
                    var_48 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_63 [i_16] [i_17] [i_17 + 1])) ? (arr_63 [i_16] [i_16] [i_17 + 1]) : (arr_63 [i_19] [i_17 - 1] [i_17 + 1])))));
                    var_49 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_9))))), (min((arr_58 [i_17]), (((/* implicit */unsigned long long int) var_1))))))));
                    arr_70 [i_19] [i_17 + 3] [i_16] [i_17 + 2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)217)) - (((/* implicit */int) (unsigned short)46112))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_20 = 4; i_20 < 22; i_20 += 1) 
                {
                    arr_73 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (17732923532771320ULL)))) ? (((/* implicit */int) arr_67 [i_16])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24171)) && (((/* implicit */_Bool) 2147483639)))))));
                    var_50 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_60 [(signed char)6] [(unsigned char)1])) : (arr_58 [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((unsigned int) 9205357638345293824LL))));
                    var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */int) arr_65 [i_17] [i_17])) * (((((/* implicit */_Bool) arr_65 [i_17] [i_17])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))));
                    arr_74 [i_16] [i_16] [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)21657))));
                    arr_75 [i_16] = ((/* implicit */long long int) ((arr_68 [i_20 - 1]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(signed char)2]))))))));
                }
                for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    arr_79 [i_16] [(_Bool)1] [i_17] [i_21] = ((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)-1)) * (((int) (signed char)16)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-17)) < (((/* implicit */int) (signed char)-35)))))));
                    arr_80 [7LL] [i_17] [i_17 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_17] [i_17])) ? (((/* implicit */int) ((signed char) arr_65 [i_17] [i_17]))) : ((-(((/* implicit */int) arr_65 [i_17] [i_17 + 3]))))));
                }
                for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    var_52 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_63 [i_17] [i_17 - 2] [i_17])))) ? (((((/* implicit */_Bool) arr_63 [i_16] [i_17 - 2] [i_17 - 2])) ? (arr_63 [i_17] [i_17 - 2] [i_22]) : (arr_63 [i_17] [i_17 - 2] [i_17 - 2]))) : (((/* implicit */unsigned int) var_10))));
                    var_53 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3062684495U)) ? (5259561950223258675ULL) : (18278107210930870451ULL)))));
                }
            }
        } 
    } 
}
