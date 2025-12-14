/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130229
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0 + 1]) : (arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (arr_2 [i_0 + 1]) : (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) >> (((min((arr_1 [i_0]), (((/* implicit */int) var_1)))) + (1555375003))))), (((/* implicit */int) (unsigned char)218))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (((arr_0 [i_1]) ? (((/* implicit */unsigned long long int) -1188114361)) : (min((((/* implicit */unsigned long long int) 3119630475U)), (17179869183ULL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(var_9)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_9)) : (arr_9 [i_2])))));
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2 - 2] [i_2 + 1])) ^ ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (var_0)))));
            var_15 = ((/* implicit */unsigned char) ((_Bool) var_0));
            var_16 = ((arr_11 [i_1] [i_2 - 2] [i_2 - 2]) % (((/* implicit */unsigned int) -910634920)));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1675495003U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (arr_14 [i_2 - 1] [i_3 - 2] [i_3 + 1])));
                var_18 -= ((/* implicit */unsigned short) var_0);
            }
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4])) ? (var_11) : (arr_14 [i_4] [i_1] [15])));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_4])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (var_11)))) : (var_3))))));
                var_21 *= ((unsigned int) arr_13 [i_1] [i_1]);
            }
        }
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1]))) : (max((arr_16 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_13 [i_1] [i_1]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        arr_23 [4ULL] = ((/* implicit */int) arr_15 [i_6] [i_6]);
        /* LoopSeq 1 */
        for (unsigned char i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_7 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) 4294967281U))))) ? (((((/* implicit */_Bool) arr_15 [i_7 + 3] [i_7])) ? (((/* implicit */int) arr_15 [i_7 + 3] [i_6])) : (((/* implicit */int) arr_15 [i_7 - 1] [2U])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) / (((/* implicit */int) arr_13 [i_6] [i_6]))))));
            var_24 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */int) ((unsigned char) arr_2 [i_7 + 2])))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((max((arr_8 [i_8 - 1] [i_8 - 1]), (arr_8 [i_8 - 1] [i_8 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_8 - 2])) : (var_9))))));
            arr_29 [i_6] = ((((/* implicit */_Bool) arr_25 [(unsigned char)15] [i_6] [i_8])) ? (arr_7 [i_8 - 1] [i_8 - 1]) : (var_3));
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_26 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_6] [i_9])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((unsigned int) arr_30 [i_6]))));
        }
        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) arr_17 [15U] [i_10 + 1])) ? (16337196004217180840ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6])))))))) ? (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) (unsigned short)4))))) ? (((arr_35 [i_10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32454)) ? (var_9) : (var_9)))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_12)))))))));
                var_28 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_19 [i_6] [i_6] [i_6] [3]) : (var_3)))) ? (max((((/* implicit */long long int) arr_11 [i_6] [i_10] [i_11])), (1983334560668973551LL))) : (((/* implicit */long long int) ((var_6) ^ (((/* implicit */unsigned int) arr_27 [i_6]))))))));
            }
            arr_39 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_34 [i_10 - 1])))) | (((((/* implicit */_Bool) 6722202573061144465LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1188114384)) : (var_5)))))));
            /* LoopSeq 2 */
            for (int i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                var_29 = ((/* implicit */int) max((var_29), ((-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_6] [i_6]))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_31 [(_Bool)1]))))))))))));
                var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (789924107)))) >= (min((var_3), (arr_19 [i_6] [7LL] [i_12] [i_12 - 1])))))), (max((((((/* implicit */_Bool) arr_20 [2U] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_19 [i_6] [i_6] [i_6] [i_12]))), (((((/* implicit */unsigned long long int) arr_31 [i_12])) % (var_0)))))));
            }
            for (short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                arr_44 [i_6] [10U] [(_Bool)1] |= ((/* implicit */unsigned char) min((arr_34 [i_6]), (var_4)));
                var_31 |= ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) arr_33 [8U] [i_10] [2U]))) > (((/* implicit */int) arr_42 [i_10 - 1] [i_10 - 1])))) ? (((/* implicit */int) ((signed char) (unsigned char)28))) : ((-(((/* implicit */int) arr_13 [i_10 - 1] [i_10 - 1]))))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)132)) ? (var_3) : (((/* implicit */unsigned long long int) var_6))))))))) != (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_8 [(_Bool)1] [i_10]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10 - 1] [i_10 - 1])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_33 = ((/* implicit */long long int) min((567956268U), (((/* implicit */unsigned int) ((unsigned short) ((1820154894U) == (var_6)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (max((arr_35 [i_10]), (arr_7 [i_13] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_10] [i_10] [i_10] [i_10] [10U])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (_Bool)1))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_10 + 1] [i_10 + 1]))))))));
                        var_35 = ((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_36 [i_15 + 1])));
                    }
                }
            }
            var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_35 [i_10])) ? (2553073138U) : (((/* implicit */unsigned int) arr_37 [i_6] [i_6] [1U] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_6] [i_6])), (arr_1 [i_6])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (arr_40 [i_6] [14U] [14U]))) : (((/* implicit */int) arr_13 [i_6] [i_6])))))));
            var_37 = ((/* implicit */int) min((max((max((var_2), (((/* implicit */unsigned int) arr_20 [(unsigned short)14] [i_10])))), (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (arr_34 [i_10])))))), (((unsigned int) min((((/* implicit */short) var_10)), (arr_41 [i_6] [15]))))));
        }
        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned int) arr_40 [i_17] [3U] [i_6]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_60 [i_6] [i_18] = ((/* implicit */int) (~(arr_59 [i_17] [i_17] [i_16])));
                    var_39 = ((/* implicit */unsigned char) 13U);
                    var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_16]) : (((/* implicit */int) var_10))));
                }
            }
            for (unsigned int i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                var_41 = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_43 [i_16] [2] [i_19])), (arr_35 [i_19]))), (((/* implicit */unsigned long long int) arr_1 [i_6]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) arr_2 [(unsigned char)1])) == (arr_17 [i_6] [i_6]))) ? (((int) arr_21 [i_16] [i_16])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-6))))))) : (min((min((384584560U), (((/* implicit */unsigned int) var_4)))), (max((((/* implicit */unsigned int) arr_20 [i_6] [i_6])), (arr_25 [i_6] [i_6] [3]))))));
                /* LoopSeq 2 */
                for (int i_20 = 2; i_20 < 15; i_20 += 4) 
                {
                    var_42 = min((arr_62 [i_6] [11LL] [i_6] [14]), (((int) arr_35 [i_16])));
                    var_43 = ((/* implicit */unsigned long long int) (+(min((var_5), (((((/* implicit */_Bool) 4116391708292094004ULL)) ? (var_5) : (arr_52 [i_6])))))));
                    var_44 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (var_6) : (var_7)))) ? (max((((/* implicit */unsigned int) var_9)), (var_6))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
                    var_45 = ((max((((/* implicit */unsigned int) arr_48 [i_20 + 1] [i_20] [i_20] [i_20] [i_20 - 2])), (arr_65 [i_20] [i_20 - 1] [i_20] [(unsigned char)3] [i_20 + 1]))) >> (((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_48 [i_20] [i_20] [i_20] [i_20] [i_20 - 1]))))));
                }
                /* vectorizable */
                for (unsigned char i_21 = 4; i_21 < 15; i_21 += 3) 
                {
                    var_46 -= ((/* implicit */int) ((long long int) var_1));
                    var_47 = ((/* implicit */short) arr_55 [i_21] [i_21 - 4] [i_21 - 3] [i_21 - 3]);
                    var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) arr_61 [5U]))));
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 15; i_22 += 3) 
                    {
                        arr_72 [i_6] [i_21] [i_19] [i_21] = ((/* implicit */signed char) arr_1 [i_21 + 1]);
                        var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) > (arr_19 [i_22 - 1] [i_22 - 1] [i_22] [i_22])));
                    }
                }
                arr_73 [i_6] [i_16] [i_16] [i_19] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_27 [i_6])) : (arr_26 [i_6] [i_6]))) - (((/* implicit */unsigned int) arr_2 [i_6]))))), (arr_59 [i_19] [14LL] [i_6])));
                var_50 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_30 [i_6])))));
                var_51 = ((/* implicit */signed char) arr_28 [i_6] [i_16]);
            }
            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_6] [6]))) ? (((/* implicit */int) arr_63 [i_6] [i_16] [12U])) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_68 [i_6] [0LL] [0LL] [i_16] [(_Bool)1])))))))) ? (((/* implicit */int) ((signed char) arr_40 [i_6] [i_6] [i_16]))) : (((/* implicit */int) arr_41 [i_6] [i_6])))))));
            var_53 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */unsigned long long int) 1767260948U)) : (10307759971555971061ULL))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) /* same iter space */
    {
        arr_77 [i_23] = ((/* implicit */unsigned long long int) ((arr_63 [6ULL] [i_23] [i_23]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_23] [i_23]))) : (var_11)));
        arr_78 [i_23] [i_23] = ((/* implicit */unsigned int) (+((-(arr_51 [i_23] [i_23] [i_23])))));
    }
    var_54 -= ((/* implicit */unsigned long long int) var_9);
}
