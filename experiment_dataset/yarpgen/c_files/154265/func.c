/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154265
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
    var_19 |= ((/* implicit */short) (-(22U)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)246)))))))) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) min(((unsigned char)248), (var_11)))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_9 [i_3 - 1] [i_3] [(unsigned char)4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_3 + 1] [i_1] [i_1] [i_1]))))), (arr_9 [i_3 + 1] [i_2] [(unsigned char)0] [(unsigned char)0])));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_1 - 1]))) : (-7873073246494360813LL))))))));
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) * (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167)))))) : (min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_0] [i_4])))))));
                            arr_11 [i_0] [i_1 - 1] [(unsigned char)5] [i_4] = min((arr_9 [i_2 - 1] [i_2] [i_1] [i_1 - 1]), (((/* implicit */long long int) arr_6 [i_1 - 1] [(signed char)1] [i_3 - 2] [i_4])));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            var_24 = arr_1 [i_2] [i_5];
                            arr_15 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_3] [i_3] [i_3] [i_3] [i_3 - 2])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3 - 2]))))) || (((/* implicit */_Bool) max((arr_7 [i_2 + 3] [i_1 - 1]), (((/* implicit */long long int) var_1)))))));
                            arr_16 [6LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (signed char)-8)))))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)162)))))));
                            var_26 += ((/* implicit */signed char) max((((/* implicit */int) ((short) arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_0] [i_2] [i_2]))) ? (((((/* implicit */_Bool) arr_12 [(unsigned char)6] [(unsigned char)6] [i_2] [(unsigned char)6] [i_6] [i_6])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-11489)))) : (((/* implicit */int) arr_20 [(short)10] [i_0] [i_2] [i_2 + 2] [i_1] [i_0]))))));
                        }
                        arr_21 [i_3 + 1] [i_3] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [10LL] [i_3] [i_3 + 1] [i_2] [i_2 + 1])) ? (((/* implicit */int) min((arr_14 [i_2 - 2] [i_2 - 2] [i_3 - 2] [i_2 - 2] [i_2 - 2]), (arr_14 [i_3] [i_2 - 2] [i_3 - 2] [i_2 - 2] [i_2 - 2])))) : (((((/* implicit */_Bool) arr_14 [i_3] [i_2 + 1] [i_3 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_14 [i_3] [i_2 + 1] [i_3 + 1] [i_3] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_2] [i_3] [i_3 + 1] [i_2] [i_2 - 2]))))));
                        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [5LL] [(signed char)2] [i_0] [i_0] [i_0])) ? (arr_9 [i_3] [i_0] [(unsigned char)7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2])))))) && (((/* implicit */_Bool) arr_13 [i_3 - 2] [i_0] [i_1 - 1] [i_0] [i_0])))))) : (max((((/* implicit */long long int) arr_19 [i_3] [i_3 - 2] [(signed char)1] [i_3 - 1] [i_3 - 2] [i_2 - 2])), (((arr_5 [i_0] [i_2] [i_1] [i_0]) ^ (var_9)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) (signed char)-2);
                            var_28 = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */short) var_2)), (arr_2 [i_1] [i_3])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_7 + 2])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_2 [(signed char)7] [i_1 - 1]))))));
                            var_29 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)6)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_7] [i_3 + 1] [i_2] [i_1 + 1] [i_0])) : (((/* implicit */int) (signed char)3)))))))));
                            var_30 -= arr_19 [i_7] [(short)4] [i_0] [i_1] [i_1] [i_0];
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1]);
            arr_25 [i_0] [i_1] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [(signed char)11] [i_0] [i_1 + 1])))));
        }
        /* vectorizable */
        for (signed char i_8 = 4; i_8 < 11; i_8 += 1) 
        {
            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_8] [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 2])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_8] [i_8 + 1] [i_8 + 2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_8 + 1] [i_8 + 2]))));
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_6 [(unsigned char)9] [i_8] [7U] [i_0]))));
        }
        var_34 = var_9;
    }
    for (long long int i_9 = 2; i_9 < 19; i_9 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_14))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
        {
            arr_34 [i_10] [i_9] [i_10] = ((/* implicit */signed char) var_4);
            var_36 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_10])) * (((((/* implicit */int) arr_29 [(unsigned char)15])) % (((/* implicit */int) arr_31 [i_9 - 2]))))));
            /* LoopNest 3 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_9 - 2]))));
                            arr_42 [i_10] [i_11] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) arr_36 [i_10])) : (((/* implicit */int) arr_36 [i_10]))))) ? (((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) arr_36 [i_10])) : (((/* implicit */int) arr_36 [i_10])))) : (((/* implicit */int) min((arr_36 [i_10]), (arr_36 [i_10]))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 - 1])) ? (((/* implicit */int) arr_31 [i_9 + 1])) : (((/* implicit */int) arr_31 [i_9 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_32 [i_10])), (arr_31 [i_9 + 1])))) : ((+(((/* implicit */int) (unsigned char)46))))));
                        }
                    } 
                } 
            } 
        }
        arr_43 [(unsigned char)16] [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9 + 1])) ? (((/* implicit */int) arr_36 [(unsigned char)0])) : (((/* implicit */int) arr_36 [(signed char)6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [16U])) ? (arr_30 [i_9 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [4LL]))))))));
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_35 [i_9] [i_9] [i_14]))))))) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) (short)32741)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_29 [i_9 + 1]))))));
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
            {
                arr_51 [i_15] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)67))));
                var_40 = (short)-21717;
            }
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_17 = 2; i_17 < 20; i_17 += 1) 
                {
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_32 [i_14]))))) : (max((((/* implicit */unsigned int) (short)27134)), (((unsigned int) arr_55 [i_9] [i_9] [i_9 + 2] [i_9])))))))));
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_6))));
                }
                var_43 = ((/* implicit */long long int) max((min((arr_37 [i_9 - 2] [i_14]), (arr_37 [i_9 + 2] [i_14]))), (((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (arr_37 [i_9 + 1] [i_14])))));
            }
        }
        for (signed char i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
        {
            arr_59 [(signed char)13] [i_18] [i_18] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_57 [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) arr_57 [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_57 [i_9 + 1] [i_9 - 1])))) / (((/* implicit */int) (unsigned char)255))));
            arr_60 [i_9] [i_18] = ((/* implicit */long long int) (unsigned char)0);
        }
        for (signed char i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
        {
            var_44 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 3029815267U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_61 [i_9] [i_9] [i_19]), (var_16))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_19] [i_9]))) | (arr_30 [1LL]))))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    {
                        arr_69 [i_20] [i_20] [i_19] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_9] [i_9] [i_9 + 1] [i_9])) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_9] [i_20])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((arr_33 [i_20]), (var_10))))))) : (arr_48 [i_9 + 1] [i_9] [i_9 + 1]));
                        arr_70 [i_21] [i_20] [i_19] [i_9] = ((/* implicit */unsigned int) arr_68 [i_21] [i_20] [(short)7] [i_9]);
                    }
                } 
            } 
        }
    }
    for (long long int i_22 = 2; i_22 < 19; i_22 += 1) /* same iter space */
    {
        var_45 += ((/* implicit */unsigned char) (~(arr_30 [i_22 - 2])));
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_22] [i_22] [i_22] [i_22])) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_63 [i_22] [i_22])) : (((/* implicit */int) var_18)))))))));
    }
    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-3)), (var_11))))) + (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_23 = 1; i_23 < 13; i_23 += 3) /* same iter space */
    {
        arr_75 [i_23] [i_23] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) ((short) arr_45 [i_23] [i_23 + 1] [i_23 + 2])))));
        arr_76 [i_23] = arr_67 [(unsigned char)19] [i_23] [(unsigned char)19] [(short)16];
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_68 [i_23 + 1] [i_23 + 2] [(signed char)15] [i_23 + 2]) + (arr_49 [i_23 + 2] [i_23] [i_23] [i_23 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_49 [i_23] [i_23] [i_23] [i_23 + 1])))) : (((((/* implicit */_Bool) arr_39 [12U] [i_23 + 1] [12U])) ? (arr_49 [i_23] [i_23] [i_23] [i_23 - 1]) : (arr_39 [(short)20] [i_23 + 2] [(short)20])))));
    }
    for (unsigned int i_24 = 1; i_24 < 13; i_24 += 3) /* same iter space */
    {
        arr_80 [i_24] [i_24] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_24] [i_24])) ? (arr_49 [i_24 + 1] [i_24 - 1] [i_24 + 2] [i_24 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_24] [i_24])))))) ? (((((/* implicit */_Bool) arr_61 [i_24 + 1] [i_24 + 1] [i_24 + 2])) ? (arr_49 [i_24 + 2] [i_24 - 1] [i_24 + 1] [i_24 - 1]) : (arr_49 [i_24 - 1] [i_24 - 1] [i_24 + 2] [i_24 + 1]))) : (min((((/* implicit */long long int) arr_41 [i_24] [i_24])), (arr_49 [i_24 - 1] [i_24 - 1] [i_24 + 2] [i_24 + 1]))));
        var_49 = ((/* implicit */unsigned char) ((signed char) var_1));
        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_67 [i_24] [i_24] [i_24] [i_24])))) * (((/* implicit */int) arr_73 [i_24] [i_24]))))) ? (((((/* implicit */_Bool) (signed char)9)) ? (1620787033U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_24 + 2] [i_24 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_24] [i_24]))))))));
        arr_81 [i_24] [i_24] = ((((/* implicit */_Bool) max((arr_48 [12U] [12U] [i_24 + 1]), (((long long int) arr_36 [i_24]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_24] [(unsigned char)8] [(unsigned char)8] [i_24] [i_24 + 2] [i_24] [(signed char)11])) ? (arr_56 [i_24]) : (((/* implicit */long long int) ((/* implicit */int) (short)-22920)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3029642879486405126LL)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)-13))))) : (min((arr_79 [i_24]), (((/* implicit */long long int) (unsigned char)172)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)243))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_24 - 1]))) : (2674180262U)))));
    }
    for (unsigned int i_25 = 1; i_25 < 13; i_25 += 3) /* same iter space */
    {
        var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [i_25 - 1] [i_25 + 1])) ? (((/* implicit */int) arr_50 [i_25 - 1])) : (((/* implicit */int) arr_50 [i_25 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_25 - 1])) == (((/* implicit */int) arr_29 [i_25 + 1]))))) : (((((/* implicit */_Bool) arr_47 [i_25 + 2] [i_25 + 1])) ? (((/* implicit */int) arr_71 [i_25 + 2] [i_25 - 1])) : (((/* implicit */int) arr_47 [i_25 - 1] [i_25 + 1]))))));
        var_52 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 3170455277U))) ? (((/* implicit */int) max((arr_50 [i_25 + 1]), (arr_50 [i_25 + 1])))) : (((/* implicit */int) ((unsigned char) arr_50 [i_25 + 2])))));
    }
}
