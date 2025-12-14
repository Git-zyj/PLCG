/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164085
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) (+(241928263)));
        arr_2 [(unsigned char)14] [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((14010898352521221080ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 4]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (18446744073709551615ULL) : (13910439052807655925ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)251)) * (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */int) arr_1 [19])) / (((/* implicit */int) (unsigned short)23936))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) (short)-18606);
            var_18 *= ((/* implicit */unsigned long long int) 66977792);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) -233041106))));
                arr_8 [i_1] = ((/* implicit */signed char) 14010898352521221080ULL);
            }
            for (short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((5450639581477428594ULL) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12)))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    arr_13 [i_0] [i_1] [11LL] [i_4] [i_4 - 1] [(unsigned short)13] = (((!(((((/* implicit */_Bool) 3252256812U)) && (((/* implicit */_Bool) 3252256799U)))))) ? (arr_6 [i_4] [i_3] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_4] [i_3] [i_0])))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 2]))) - (arr_6 [i_0] [i_0] [i_0] [i_4 - 1]))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 4]))))))))));
                    var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 + 1])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_5 - 3] [i_5 - 1] [i_4] [i_4 + 1] [i_4] [i_0 + 2]))));
                        arr_17 [i_5] [(unsigned char)0] [i_3] = ((/* implicit */short) ((unsigned short) arr_5 [i_0 - 2] [i_1]));
                        arr_18 [(unsigned short)20] [0ULL] = ((/* implicit */_Bool) -1);
                        arr_19 [14ULL] [14ULL] = ((/* implicit */unsigned char) ((_Bool) (short)31939));
                        arr_20 [i_1] [i_1] [(signed char)9] [i_4] [i_5] [(unsigned short)9] &= ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_3] [i_4] [i_5] [i_1]);
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_6] [i_4 - 1] [0ULL] [7] = ((/* implicit */int) min(((unsigned short)5829), (((/* implicit */unsigned short) (signed char)-117))));
                        var_24 = ((/* implicit */_Bool) 14345138202752325451ULL);
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) (((-(-24))) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        arr_26 [i_7] [i_1] [i_7] [i_4] [i_4] [i_1] [i_7] = ((/* implicit */short) arr_0 [(_Bool)1] [i_1]);
                        arr_27 [i_1] [i_7] [i_3] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) ((arr_21 [i_4 - 1] [i_1] [i_0 + 2] [i_0] [(unsigned char)9]) * (((/* implicit */unsigned int) (-(((/* implicit */int) (short)942)))))));
                        arr_28 [i_0] [i_0] [i_3] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_10 [i_7] [16ULL] [i_3])) ? (((/* implicit */unsigned long long int) 753154839U)) : (9733320381059551250ULL))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_3])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_5 [i_0 - 2] [(unsigned char)0]))))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_25 [i_0] [i_7] [i_7])))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3252256804U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) : (18446744073709551615ULL)))) ? (((var_3) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [(unsigned short)16] [(unsigned char)20] [i_4] [i_7] [i_7])))));
                    }
                }
            }
            for (short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
            {
                arr_31 [i_1] [i_1] [i_8] [11U] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)9286)) >> (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_28 *= ((/* implicit */unsigned short) ((4536305020901895691ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43963)))));
                            var_29 -= ((/* implicit */long long int) arr_30 [(unsigned short)13] [(short)4] [i_9] [i_10]);
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)245))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 1; i_11 < 21; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_10))));
                /* LoopSeq 2 */
                for (unsigned short i_13 = 4; i_13 < 21; i_13 += 3) 
                {
                    var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                    var_33 = ((/* implicit */_Bool) (signed char)-40);
                    var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [10LL] [i_0] [10LL] [18LL] [0ULL] [8LL] [(signed char)14])) ? (((/* implicit */unsigned long long int) (+(arr_6 [(unsigned short)8] [i_12] [i_11] [(short)15])))) : (((arr_25 [i_13 - 1] [(_Bool)1] [(unsigned char)14]) - (((/* implicit */unsigned long long int) arr_3 [i_12] [8ULL]))))));
                    var_35 = ((unsigned char) arr_44 [i_13 - 1] [i_11] [i_12] [i_11] [i_0 - 4] [i_11 + 1]);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_42 [i_14] [(_Bool)1] [(_Bool)1] [(unsigned short)14])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) var_11))))))))));
                    var_37 = ((/* implicit */_Bool) ((arr_15 [i_11 - 1] [i_11 - 1] [i_0 + 2] [i_14] [i_14]) / (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
            }
            arr_50 [i_11] [i_11] = ((/* implicit */unsigned short) 7140690111914925429ULL);
            arr_51 [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
        }
        for (signed char i_15 = 1; i_15 < 21; i_15 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                arr_56 [i_16] [i_15] [i_15] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1))));
                var_38 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                arr_57 [i_16] [(unsigned short)6] [i_15] [i_0 + 2] = var_3;
                var_39 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_16] [(unsigned char)10]))));
            }
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
            {
                var_40 &= ((/* implicit */unsigned short) ((arr_52 [(unsigned char)16] [i_17]) == (13910439052807655925ULL)));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10153))))) ? (((((/* implicit */_Bool) -6007458676794897233LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [4LL] [i_15] [(unsigned char)11]))) : (var_0))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_17] [i_15 - 1] [i_0 - 2])))))));
                arr_62 [i_15 + 1] [1ULL] [i_15] [9LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2859705791092024030LL)) ? (((/* implicit */int) (unsigned short)55400)) : (-1504409964)));
                var_42 = ((/* implicit */signed char) ((((/* implicit */int) (short)15898)) == (((/* implicit */int) (!((_Bool)1))))));
            }
            arr_63 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_15] [i_15] [i_15] [i_0 + 3])) ? (((/* implicit */int) arr_49 [i_15] [(unsigned short)21] [i_0])) : (((/* implicit */int) (unsigned short)10142))))) ? (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) -4301379869245747831LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55409)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_33 [i_0 - 1] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_15] [(unsigned char)18] [(unsigned short)7]))) : (min((18446744073709551614ULL), (15798489964432410646ULL)))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_18 = 4; i_18 < 19; i_18 += 2) 
        {
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1097658746)) ? (378254975) : (378254975))))));
            var_44 ^= ((/* implicit */signed char) max((13910439052807655924ULL), (((/* implicit */unsigned long long int) min((arr_61 [i_0 - 2] [i_0 - 4] [7ULL]), (arr_61 [i_18 + 1] [i_18] [i_0 + 1]))))));
            var_45 = ((/* implicit */long long int) ((max((arr_52 [i_18] [(signed char)0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)12] [(unsigned char)18] [(unsigned char)1] [i_0] [i_0 - 3] [2]))))))) << (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                var_46 = ((/* implicit */unsigned long long int) arr_48 [i_0] [i_18 - 1] [i_18] [i_18]);
                arr_68 [4ULL] [i_18 - 1] [i_19] = (unsigned char)9;
            }
            for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) (_Bool)1);
                            var_48 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) - (8841391526534910774ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((arr_47 [i_0] [i_18] [i_21] [i_22]) ? (2899309344779769769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)1] [i_18 - 1] [i_0 + 1]))))) - (max((((/* implicit */unsigned long long int) arr_14 [7LL])), (arr_74 [i_0] [i_18 - 2] [i_20] [(unsigned char)12] [i_22]))))));
                        }
                    } 
                } 
                var_49 += ((/* implicit */unsigned long long int) arr_7 [i_18 - 2] [i_0 + 1] [i_0 + 2]);
                var_50 = ((/* implicit */_Bool) ((unsigned char) (((!(((/* implicit */_Bool) 1210738872038694148ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_21 [i_0] [i_18] [(unsigned short)20] [(_Bool)1] [i_0])))) : ((-(arr_70 [i_20] [i_18 - 1] [i_18] [21LL]))))));
            }
            var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
        }
    }
    var_52 &= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) (signed char)99)))) | (((/* implicit */int) (unsigned char)255)))) % (((/* implicit */int) var_15))));
    var_53 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((+(((/* implicit */int) var_9)))) & (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_12))))))), (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (13910439052807655924ULL))))) : ((~(var_11)))))));
}
