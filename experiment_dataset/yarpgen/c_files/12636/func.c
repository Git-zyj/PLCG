/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12636
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_18 += (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))) % (arr_0 [i_0 - 1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) (unsigned short)65535);
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_5);
                            var_21 = ((/* implicit */short) var_1);
                            arr_13 [i_0] [i_1] [i_1] [i_3 + 1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [15U])) ? (arr_2 [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_4])))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 1] [i_3 + 2])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) arr_5 [i_0 - 1]);
            var_23 -= ((/* implicit */long long int) ((unsigned int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1]));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((arr_22 [9] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0]) | (((/* implicit */long long int) var_10)))))));
                        arr_23 [i_0 + 1] [i_0 - 2] [i_5] [i_0 - 2] = ((/* implicit */unsigned long long int) ((arr_9 [i_0 + 2] [i_5] [(_Bool)1] [i_0 + 2] [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_25 = (unsigned char)69;
                arr_27 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32748))));
                var_26 ^= ((/* implicit */unsigned long long int) (~(arr_10 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((arr_16 [i_0] [i_0 - 2] [i_0 - 2]) < (((/* implicit */long long int) var_14))));
            }
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_0 + 2] [i_5])) ? (arr_29 [i_0 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)1367)) == (((/* implicit */int) var_9)))))));
                var_28 = ((/* implicit */_Bool) (unsigned short)64173);
            }
        }
        var_29 = ((/* implicit */unsigned short) min(((+(arr_10 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 2])))))));
    }
    for (unsigned short i_10 = 4; i_10 < 16; i_10 += 2) 
    {
        arr_34 [i_10 + 1] [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2285202786U))))), (min((arr_33 [i_10 - 2]), ((unsigned short)1362)))));
        var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1362))))) % (arr_32 [i_10])));
        /* LoopSeq 3 */
        for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 2) 
        {
            arr_37 [i_10] = (!(((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 - 1] [i_10 - 3]))))));
            arr_38 [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_35 [i_11 + 1] [i_11 - 3] [i_11 - 3]), (arr_35 [i_11 + 1] [i_11 + 1] [i_11 - 1])))) ^ (((/* implicit */int) arr_35 [i_11 - 3] [i_11 - 1] [i_11 - 2]))));
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_13 = 3; i_13 < 16; i_13 += 3) 
                {
                    arr_45 [i_10] [i_10] [i_12] = ((/* implicit */signed char) var_2);
                    arr_46 [i_10] [(signed char)11] [i_12] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_13 + 1] [i_13 + 1] [i_13 - 3] [i_13 - 3])) ? (arr_41 [i_13 - 3] [i_13 + 1] [i_13 - 3] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) (unsigned short)1362)) : (((/* implicit */int) (unsigned short)64176)));
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1369))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    var_32 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_42 [i_14 + 1] [i_14 + 1] [i_10 - 1] [i_10]))));
                    arr_50 [i_10 - 2] [i_11] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) arr_40 [i_10 - 4] [i_11 - 3] [i_14 - 2] [i_14 - 2]);
                }
                for (signed char i_15 = 2; i_15 < 16; i_15 += 1) 
                {
                    arr_53 [(signed char)16] [i_11] [i_11 + 1] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1359)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)64173))))) ? (((((/* implicit */int) (unsigned short)1367)) >> (((4294967288U) - (4294967260U))))) : (((/* implicit */int) var_11)))) ^ ((+(((/* implicit */int) ((short) (unsigned short)1363)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        arr_57 [i_10 - 4] [i_10 - 2] [i_10] = ((/* implicit */unsigned char) ((max((arr_52 [i_10 - 4] [i_11] [i_11 + 1] [i_16] [i_16]), (((/* implicit */int) arr_48 [i_10] [i_10] [i_10] [i_10 - 2] [i_10] [i_11 - 3])))) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [(signed char)15] [i_12] [i_15] [i_16]))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)64173))) : (((((/* implicit */int) arr_51 [i_16])) % (((/* implicit */int) arr_35 [i_10 - 3] [i_10 - 3] [i_12]))))))));
                        var_33 = ((/* implicit */_Bool) (unsigned char)83);
                        var_34 = ((/* implicit */int) max((((short) (unsigned short)1363)), (((/* implicit */short) var_1))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        arr_62 [i_10] [i_10] [i_10 - 4] [i_10] [i_17] = ((/* implicit */int) var_6);
                        var_35 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_42 [i_15 - 2] [i_11 - 1] [i_12] [i_11 - 2])), (arr_54 [i_10 - 4] [i_11 - 1] [i_15 + 1] [i_15] [i_15 - 2])))) && ((!(((/* implicit */_Bool) arr_47 [i_15 - 2] [i_15 - 2] [i_11 - 2] [i_10 + 1]))))));
                        arr_63 [i_10] [i_10] [i_10 + 1] [i_17] [i_10] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_10 - 4] [i_12] [i_15 - 1]))))) >= (((int) arr_58 [i_11 - 1] [i_11 - 2] [i_12] [(unsigned char)0]))));
                    }
                }
                arr_64 [i_12] [i_11 + 1] [i_10 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_12] [0LL] [i_12] [i_11 - 1] [i_10 + 1])) - (((((/* implicit */int) arr_42 [i_12] [(short)14] [i_12] [i_11 - 1])) | (((/* implicit */int) (unsigned char)26))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_10]))))) % (((/* implicit */int) (unsigned char)186)))))));
            }
            for (short i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 2] [i_11 - 3]))))) ? ((+(((/* implicit */int) (unsigned char)245)))) : (((((/* implicit */int) arr_56 [i_10] [i_10] [i_10 - 4] [11] [i_10 + 1] [i_11 + 1])) & (((/* implicit */int) (unsigned char)255))))));
                arr_67 [i_10 + 1] [i_11] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_11 - 3] [i_11 - 3] [i_10 + 1] [i_10] [i_10] [i_10 - 4] [i_10])) ^ (((/* implicit */int) (unsigned short)64185))))) ? (((((/* implicit */_Bool) ((signed char) arr_36 [(unsigned char)9] [i_10 - 4]))) ? (((((/* implicit */_Bool) (unsigned short)1362)) ? (var_0) : (arr_32 [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30385)) | (-8388608)))) ? (((((/* implicit */_Bool) (unsigned short)1348)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)15166)))) : (((/* implicit */int) var_1)))))));
                var_37 = ((/* implicit */unsigned long long int) ((1199782257U) - (((/* implicit */unsigned int) (+(((/* implicit */int) var_17)))))));
            }
            for (short i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */signed char) (((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10]))) | (arr_32 [i_10]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)128)) != (((/* implicit */int) arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 4] [14]))))))));
                var_39 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)64151))))) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) <= (((/* implicit */int) (short)-30386)))) && (((/* implicit */_Bool) 289129703U))))) : (((/* implicit */int) var_13))));
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_11] [i_11] [i_11]))) : (var_7)))) ? (((/* implicit */int) arr_55 [i_10] [i_11] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 3] [i_11])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9645)))))))))))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_20 = 3; i_20 < 16; i_20 += 2) 
            {
                arr_73 [i_20] [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((arr_66 [i_10 + 1] [(unsigned char)1] [i_10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_10 - 2] [i_11 - 3] [i_10 - 3] [i_11 - 2] [(unsigned short)14] [i_11 - 3] [i_11 - 1])))))) : (((/* implicit */int) arr_42 [i_10] [i_11] [i_11] [i_20])))))));
                arr_74 [i_10] [i_11 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30379)) ? (((/* implicit */int) arr_58 [i_11] [i_11] [i_20 - 1] [i_20])) : (((/* implicit */int) (short)27195)))))))) >= (((/* implicit */int) (_Bool)1))));
                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((arr_61 [i_10 + 1] [i_11] [i_20 - 2] [i_11 - 2] [(unsigned char)10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63474)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1351)) <= (((/* implicit */int) (unsigned char)195)))))))))));
            }
            for (unsigned int i_21 = 1; i_21 < 14; i_21 += 2) 
            {
                var_42 = ((/* implicit */int) (unsigned char)0);
                var_43 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_10] [i_11 + 1] [i_11] [1] [i_21 + 1] [i_21 + 3])) || (((/* implicit */_Bool) arr_48 [i_10] [i_11 - 1] [i_21] [i_11 - 1] [i_21 + 2] [i_21 + 2]))))) == (((/* implicit */int) ((((/* implicit */int) arr_48 [i_10] [i_11 - 2] [(unsigned char)8] [i_10] [i_21 + 2] [i_21 + 3])) != (((/* implicit */int) arr_48 [i_11 - 3] [i_11 - 1] [i_21] [i_21] [i_21 + 3] [i_21])))))));
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_65 [i_21 + 2]) >= (arr_65 [i_21 + 2])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_21 + 3])))))));
            }
            for (unsigned char i_22 = 2; i_22 < 14; i_22 += 1) 
            {
                arr_80 [5LL] [5LL] [i_22 + 2] [i_22 + 1] = ((/* implicit */unsigned short) min((arr_49 [i_10] [i_11] [i_10]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_32 [i_22]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_10] [i_10] [i_10] [i_10 - 2] [i_10])))))))))));
                arr_81 [i_10] [i_10] [i_22 - 1] = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
            }
        }
        for (unsigned char i_23 = 2; i_23 < 14; i_23 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_24 = 2; i_24 < 15; i_24 += 2) 
            {
                for (unsigned char i_25 = 2; i_25 < 15; i_25 += 1) 
                {
                    {
                        arr_90 [i_10 - 3] [i_10 - 3] [(signed char)12] [i_25 + 1] [i_10 - 3] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_55 [i_10] [i_10 - 4] [i_10] [i_23 + 1] [i_24] [i_25] [i_25])) ? (((/* implicit */int) (unsigned short)33070)) : (((/* implicit */int) (unsigned short)0)))) >> (((var_7) - (2175476933U))))), ((~(((/* implicit */int) (short)9645))))));
                        arr_91 [i_23] [i_23] [i_25] [i_25] = ((/* implicit */unsigned int) ((((unsigned long long int) var_11)) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_92 [3U] [i_23 + 2] [i_10] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_86 [2ULL] [i_25] [2ULL] [i_25 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_86 [i_24] [i_25] [(unsigned char)16] [i_25 - 1]))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */short) min((((((/* implicit */int) (signed char)-59)) * (((/* implicit */int) (unsigned short)1374)))), (((/* implicit */int) arr_44 [i_10] [i_10 - 3] [i_23 + 2]))));
        }
        for (unsigned char i_26 = 2; i_26 < 14; i_26 += 3) /* same iter space */
        {
            arr_97 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned char) var_17)), (var_8)))), (((((/* implicit */_Bool) -2140291033)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_93 [i_10 - 1] [i_26])))))))));
            arr_98 [i_26 + 2] [i_26 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (2540540203U))))));
        }
    }
    var_46 = ((/* implicit */unsigned int) var_4);
}
