/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154389
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_16)), (min((((unsigned long long int) var_5)), (((((/* implicit */_Bool) 8870478481601308169LL)) ? (((/* implicit */unsigned long long int) -6423352986842227849LL)) : (4ULL))))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned char)12] [(unsigned char)12] [i_0] [(unsigned short)20] = ((/* implicit */long long int) ((short) 18446744073709551612ULL));
                    arr_9 [i_0] [i_1] [i_2] = max((((/* implicit */unsigned long long int) min((arr_6 [4LL] [i_1] [i_2] [i_2 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))))), (max((((/* implicit */unsigned long long int) (-(var_14)))), ((-(arr_3 [0ULL] [i_1]))))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)12)), (134184960U)));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)10466)), (arr_3 [(unsigned short)17] [i_1]))))))), (((0LL) >> (((72022409665839104LL) - (72022409665839096LL)))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-((~(arr_0 [9LL] [i_0])))))), (min((max((((/* implicit */unsigned long long int) (unsigned char)166)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) var_13)))))))));
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_4))) ? (((((/* implicit */_Bool) ((long long int) 8ULL))) ? (((35183298347008ULL) >> (((((/* implicit */int) (signed char)-3)) + (52))))) : (((arr_3 [i_0] [i_0]) >> (((-72022409665839093LL) + (72022409665839142LL))))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) != (var_12))))))));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (((arr_4 [16ULL] [16ULL] [10LL]) + (4813958396101082963ULL))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (short)-7267)), (var_15))) / (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0] [18ULL] [i_0]), (var_16))))))))));
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (arr_2 [i_0])));
    }
    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_2 [i_3]))));
        var_23 = ((/* implicit */signed char) min(((-(arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (var_6))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            arr_20 [i_4] [i_5] [i_5 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_19 [i_5 - 2] [i_5 - 2]))));
            arr_21 [(signed char)10] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_4] [(unsigned short)17] [(unsigned short)17])))));
            arr_22 [i_4] [8ULL] [i_5] = ((/* implicit */long long int) ((((unsigned int) 4160782339U)) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_3 [i_4] [i_5 - 2]))))))));
            arr_23 [i_4] = ((/* implicit */unsigned long long int) ((signed char) 72022409665839093LL));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1273007363914692605ULL)) ? (arr_0 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (arr_15 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (arr_24 [(unsigned char)10] [(unsigned char)3] [(unsigned char)3])))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_24 += ((/* implicit */short) 5767656081074843952LL);
                        var_25 -= ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((4813958396101082939ULL), (((/* implicit */unsigned long long int) 2044LL)))))));
            var_27 += ((/* implicit */long long int) var_2);
            var_28 |= ((/* implicit */long long int) ((unsigned long long int) arr_19 [i_4] [2LL]));
            arr_35 [i_4] [i_9] [i_9] = 11560929590819569460ULL;
        }
        for (long long int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            arr_38 [i_4] [(signed char)1] [i_10 + 1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4676150457705473656LL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ^ ((~(72022409665839104LL)))))) ? (((/* implicit */long long int) 4160782329U)) : (-4676150457705473656LL));
            /* LoopNest 3 */
            for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_28 [i_10] [11LL])))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((unsigned long long int) (short)18462)) : (((/* implicit */unsigned long long int) ((arr_17 [i_13] [1ULL]) | (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [i_11 - 2] [i_12])))))))) : (((/* implicit */unsigned long long int) (-(-72022409665839109LL)))));
                            var_30 = ((/* implicit */unsigned char) var_15);
                            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_44 [i_4] [i_10] [i_11 - 2] [i_12] [i_13 - 1] [i_12]) * (arr_44 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (max((((/* implicit */unsigned long long int) ((unsigned char) arr_39 [i_13] [i_12]))), (min((((/* implicit */unsigned long long int) (short)7936)), (arr_2 [(unsigned char)14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))))));
                            var_32 = ((/* implicit */unsigned int) arr_0 [i_10 + 1] [i_10 + 1]);
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(arr_1 [i_4]))), (arr_44 [i_4] [i_10] [i_10] [i_10] [i_10 - 1] [i_10])))) ? (17476684410640861684ULL) : (((/* implicit */unsigned long long int) (-(var_3)))))))));
            var_34 = ((/* implicit */short) ((long long int) min((((11810130668936626946ULL) - (arr_24 [i_4] [(unsigned char)5] [(unsigned char)5]))), (max((((/* implicit */unsigned long long int) arr_31 [i_4] [i_4] [i_10] [6U])), (arr_37 [i_10 + 1] [i_4]))))));
        }
        arr_46 [i_4] [i_4] &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned char)208)) || (((/* implicit */_Bool) arr_37 [i_4] [i_4]))))));
    }
    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_50 [i_14]))));
        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((arr_4 [2LL] [(unsigned char)8] [i_14]) | (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_14]))) : (var_3)))), (13658325869004411992ULL))))))));
        arr_51 [10ULL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((arr_7 [i_14] [(unsigned char)16] [i_14]), (arr_7 [i_14] [i_14] [i_14])))) * (((((/* implicit */long long int) arr_7 [i_14] [i_14] [i_14])) / (-9223372036854775796LL)))));
        var_37 -= ((/* implicit */long long int) arr_48 [i_14]);
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_14]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [8LL])))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) + (((((/* implicit */_Bool) (signed char)-61)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_14] [i_14]), (((/* implicit */long long int) (-(((/* implicit */int) arr_50 [i_14]))))))))));
    }
    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))) : (((unsigned int) var_8)))) : (((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))))));
}
