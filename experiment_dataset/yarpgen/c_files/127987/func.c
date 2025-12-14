/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127987
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
    var_18 |= 9223372036854775783LL;
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < ((-(var_9))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 9223372036854775783LL))) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((((int) arr_0 [i_1])) + (((arr_0 [i_1]) % (((/* implicit */int) var_14)))))) : (((/* implicit */int) (signed char)-67)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_23 |= ((signed char) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (max((((/* implicit */long long int) -11)), (-9223372036854775805LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_24 += ((/* implicit */unsigned int) (+(((9223372036854775783LL) % (((/* implicit */long long int) var_9))))));
                        var_25 ^= ((/* implicit */signed char) (+(arr_2 [i_0] [i_0])));
                    }
                    var_26 |= ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((((!(((/* implicit */_Bool) var_13)))) ? (arr_5 [i_2]) : (((/* implicit */int) ((short) (signed char)77)))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_5 [i_3]) >> ((((~(arr_10 [i_4] [i_0] [i_0] [i_0]))) - (1570862085U)))))), (((max((((/* implicit */unsigned long long int) -20)), (2773581743794542414ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4] [i_0] [(short)9] [(_Bool)1] [i_0] [i_3])))))))))))));
                }
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (+(9223372036854775791LL))))));
                arr_15 [i_0] [i_0] &= (~(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_16)))))));
                var_29 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) ^ (min(((-(18446744073709551593ULL))), (((/* implicit */unsigned long long int) var_1))))));
                var_30 ^= ((/* implicit */long long int) (~((-(((/* implicit */int) arr_8 [i_0] [i_2]))))));
            }
            var_31 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)-51)))))) % (((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])) : (arr_4 [(unsigned short)3] [i_2] [i_2])))));
        }
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((signed char) ((((((/* implicit */_Bool) -11)) ? (((/* implicit */long long int) var_9)) : (9223372036854775783LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [9ULL] [i_0])))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_33 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_3 [(unsigned short)14] [i_6])) + (((/* implicit */int) (unsigned char)146))))));
        arr_18 [5ULL] &= ((/* implicit */int) (+(2773581743794542403ULL)));
        arr_19 [i_6] &= ((/* implicit */signed char) ((min(((~(arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) (~(var_2)))))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)82)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 252183093196318171LL)))))) : (((((/* implicit */_Bool) -16LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6709235376712680040ULL)))))));
        var_34 += ((/* implicit */int) (!(((/* implicit */_Bool) ((short) 2184171033144929567ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23184))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_6)))))) : (min((arr_6 [(unsigned short)2] [(unsigned short)2] [i_8]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_16)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        arr_30 [i_6] [i_6] [i_8] [i_6] &= ((/* implicit */signed char) max((((9223372036854775801LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))))), (((/* implicit */long long int) var_13))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) 2147483639))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)112)) ? ((~(min((9223372036854775783LL), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) (-((~(((/* implicit */int) arr_22 [i_8] [i_7]))))))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (((+(arr_25 [i_11] [i_11] [i_6] [i_11]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1333123080406149223ULL)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_23 [i_9 + 1] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_9]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_7])))))))))))));
                            arr_35 [i_6] [i_7] [i_6] [i_6] &= ((/* implicit */unsigned char) (unsigned short)16096);
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (+(arr_37 [i_9 - 1] [i_9 - 1] [i_9] [i_6] [i_9] [i_9]))))));
                            var_40 *= (~(7ULL));
                        }
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_14 [i_6] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_24 [i_9 - 1] [i_6])))))))));
                        var_42 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_9 + 2] [i_7] [2U])) ? ((-(((/* implicit */int) (short)3321)))) : (((/* implicit */int) (signed char)113)))) <= (((/* implicit */int) ((unsigned char) var_12)))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_43 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [i_6] [(unsigned char)3] [i_6])) ? (min((((/* implicit */int) (unsigned short)46203)), (643173867))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19334)))))))));
                        arr_40 [i_6] [i_13] [i_13] [i_13] &= ((/* implicit */long long int) min((((min((((/* implicit */unsigned long long int) 2130706432)), (17113620993303402393ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))), (((unsigned long long int) (short)15624))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_14 = 4; i_14 < 23; i_14 += 2) 
    {
        arr_45 [i_14] [(_Bool)1] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3805834806U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1))))) <= (((((/* implicit */_Bool) 9171052716276544318ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [(short)14]))) : (var_12))))))));
        var_44 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_41 [i_14 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) arr_41 [i_14 - 4])) ? (arr_41 [i_14 - 4]) : (arr_41 [i_14 - 2])))));
        var_45 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (((-(((/* implicit */int) arr_44 [i_14])))) / ((-(((/* implicit */int) (unsigned char)19)))))))));
    }
}
