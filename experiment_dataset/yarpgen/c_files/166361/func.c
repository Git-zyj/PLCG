/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166361
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
    var_16 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 *= min((((/* implicit */int) (unsigned short)56891)), (((((/* implicit */int) (short)-1828)) + ((~(-1265171502))))));
                var_18 = ((/* implicit */int) arr_0 [(_Bool)1]);
                arr_5 [i_0] [(_Bool)1] [i_1 - 1] = ((/* implicit */_Bool) arr_1 [4LL]);
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) (unsigned short)13861);
    /* LoopSeq 2 */
    for (long long int i_2 = 4; i_2 < 11; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((-923782290) + ((-(((/* implicit */int) var_2)))))) * (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_2 - 2]))))) <= ((~(arr_1 [i_2 - 4])))));
            arr_13 [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_11)) | (((((/* implicit */_Bool) arr_7 [(signed char)6])) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) arr_11 [i_2] [6])))))) <= (((/* implicit */int) (unsigned short)4))));
            arr_14 [(_Bool)1] [i_2] [i_3] = ((/* implicit */long long int) (short)-1817);
            var_21 += ((/* implicit */_Bool) ((unsigned char) arr_4 [i_3]));
        }
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 10; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65532))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned short)10))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)1821)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23511))) : (var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1265171501)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) arr_19 [i_4] [i_6] [i_5 - 2] [i_6 - 1]))))));
                            arr_28 [i_2 - 4] [i_2 - 4] [i_2] [10U] [i_7] [i_2 - 2] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))));
                            var_24 &= ((/* implicit */long long int) max((var_5), (((/* implicit */int) ((((/* implicit */int) min((arr_2 [i_4]), (((/* implicit */unsigned short) var_14))))) <= (((int) 1655049315)))))));
                        }
                    }
                } 
            } 
            arr_29 [i_4] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) (((~((+(((/* implicit */int) (unsigned short)65528)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            var_25 = ((/* implicit */unsigned char) (~((-((-(((/* implicit */int) (unsigned short)56704))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 - 4])))))));
                arr_35 [i_2] [i_8] [i_9] = ((/* implicit */unsigned int) var_15);
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned short i_11 = 2; i_11 < 8; i_11 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_2 - 2] [i_10 + 1] [11] [i_10 + 1]))));
                            var_28 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((8922481829112129363LL) << (((((/* implicit */int) arr_20 [i_2] [9LL] [i_10 + 2])) - (83))))))));
                            arr_42 [i_2 - 1] [1LL] [i_2] [i_10] [4ULL] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_10 + 2])) ? (((/* implicit */long long int) (-(arr_6 [i_11 + 1])))) : ((+(arr_32 [i_2])))));
                            var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-103))));
                            var_30 |= ((/* implicit */unsigned char) (signed char)-18);
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 4; i_13 < 8; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_2 - 4] [i_2 - 3] [i_2])) ? (((/* implicit */int) arr_40 [i_2] [i_2 - 3] [i_2])) : (((/* implicit */int) var_4))));
                        var_32 = ((/* implicit */long long int) arr_20 [i_2 + 1] [i_8] [i_12]);
                        var_33 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_4 [i_2])))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_15 = 3; i_15 < 11; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_2 - 1] [i_15 - 1] [i_12] [i_13 - 1] [i_2 - 4]))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_39 [i_15] [i_15 - 2] [i_15] [i_13 + 4] [i_2 - 4]))));
                        var_35 = ((/* implicit */unsigned char) max((((arr_36 [i_2]) | (((/* implicit */unsigned long long int) -1265171502)))), (((/* implicit */unsigned long long int) (-(arr_22 [i_2]))))));
                    }
                }
                for (int i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_36 ^= ((/* implicit */unsigned long long int) var_11);
                    arr_57 [(signed char)5] [i_8] [i_2] [1ULL] [i_16] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23436)) == (((/* implicit */int) ((short) (signed char)28)))));
                }
                arr_58 [i_2] = ((/* implicit */signed char) var_5);
                var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) arr_56 [i_2 - 4] [8ULL] [8ULL] [i_2 + 1] [i_12])) ? (((((/* implicit */_Bool) 2147483647)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_6)) ? (-1123724750) : (var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_8])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_17 = 1; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_2 - 2] [i_8] [11LL] [(signed char)5] [i_2])) / (((/* implicit */int) arr_34 [i_2] [i_2] [5ULL] [i_17 - 1]))))) ? (((arr_9 [(unsigned short)8]) ? (arr_19 [i_2 - 2] [i_2] [10ULL] [10ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) var_0))));
                    arr_61 [i_2] [i_12] [i_12] [(unsigned short)7] [i_2] = (i_2 % 2 == zero) ? (((((/* implicit */int) var_11)) << (((arr_36 [i_2]) - (12696755153018849332ULL))))) : (((((/* implicit */int) var_11)) << (((((arr_36 [i_2]) - (12696755153018849332ULL))) - (9079599043651136407ULL)))));
                    arr_62 [(signed char)6] [i_8] [(signed char)0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_15 [i_2] [(signed char)3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_8] [11ULL])))))) - (((/* implicit */int) (_Bool)1))));
                    arr_63 [i_2] [i_8] [i_2] [i_17] = ((/* implicit */long long int) arr_25 [i_17 + 1] [i_17] [(signed char)10] [i_17] [i_17 + 1]);
                }
                for (unsigned short i_18 = 1; i_18 < 10; i_18 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_40 [i_2] [1U] [i_2])))) >> (((((/* implicit */int) (unsigned char)152)) - (136)))))) : (var_12)));
                    var_40 &= var_10;
                }
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (((~(arr_33 [i_2] [i_2 + 1] [9] [9ULL]))) >= (((/* implicit */unsigned long long int) (~(1511901082U)))))))));
            }
            /* vectorizable */
            for (unsigned char i_19 = 1; i_19 < 10; i_19 += 3) 
            {
                var_42 = ((/* implicit */unsigned char) ((((1511901063U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8818))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)65256)) : (((/* implicit */int) (signed char)112)))))));
                arr_70 [i_2] [i_19 + 1] [i_8] [i_2] = ((/* implicit */_Bool) 9223372036854775807LL);
                var_43 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_10)) + (2147483647))) >> (((var_5) - (844858176)))))));
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 12; i_20 += 4) 
            {
                for (signed char i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    {
                        var_44 = ((/* implicit */unsigned short) min(((~(arr_18 [i_2 - 3] [(signed char)1] [(signed char)1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31333))) >= (arr_65 [i_2] [i_2] [i_2 - 2] [i_21]))))));
                        arr_77 [11LL] [i_2] = ((/* implicit */signed char) ((int) (!((!(((/* implicit */_Bool) -2763701714087561480LL)))))));
                    }
                } 
            } 
        }
        arr_78 [i_2] = ((/* implicit */_Bool) ((unsigned char) var_1));
    }
    for (long long int i_22 = 4; i_22 < 11; i_22 += 1) /* same iter space */
    {
        var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) arr_12 [(unsigned char)8] [(signed char)10] [(unsigned char)8])) ? (var_0) : (((/* implicit */int) arr_12 [10U] [(_Bool)1] [i_22 - 4])))) : (((((/* implicit */_Bool) (unsigned short)56717)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-124))))));
        /* LoopNest 2 */
        for (signed char i_23 = 0; i_23 < 12; i_23 += 3) 
        {
            for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
            {
                {
                    var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) max((min((((long long int) (signed char)121)), (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_2))))))))))));
                    arr_88 [i_22] [i_23] [i_24] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((17985018712648272429ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_23] [i_22 - 4]))))))));
                    arr_89 [i_22 + 1] [i_22] [i_22 + 1] [i_24] = ((/* implicit */unsigned short) min((arr_71 [i_22] [i_22 - 3] [(unsigned short)9] [i_22]), (min((min((var_4), (((/* implicit */unsigned char) (_Bool)1)))), (var_7)))));
                }
            } 
        } 
        arr_90 [4LL] [i_22 - 3] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_74 [i_22 - 3] [i_22 - 3] [i_22 - 3] [i_22 + 1])), (min((((/* implicit */int) var_11)), (-1783130074)))));
        var_47 = ((/* implicit */unsigned char) (unsigned short)56731);
    }
}
