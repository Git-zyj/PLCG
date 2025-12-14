/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148064
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_3)) : (var_2))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) % (var_10)))))))))));
        var_21 = ((/* implicit */_Bool) ((short) (_Bool)1));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_22 = arr_3 [i_1];
        var_23 = ((/* implicit */unsigned char) arr_3 [i_1]);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_0);
    }
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_2 + 3]);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    arr_16 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_14 [i_2 - 3] [i_2 + 2])) : (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1])))) << ((((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_6 [i_2]))))))) + (20)))));
                    arr_17 [i_3 + 1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 1]))) : (var_10)))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) ((_Bool) arr_7 [i_3 + 4])))));
                    var_25 = ((/* implicit */unsigned long long int) (~(arr_9 [i_3 + 2] [i_3] [i_4 - 1])));
                    arr_18 [i_3] [i_5] [i_5] [i_5] [(unsigned short)10] [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_7 [(unsigned char)10])) - (13202))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) | (((/* implicit */int) var_17))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_2 + 2]))));
                    var_28 = ((/* implicit */short) var_11);
                }
                for (short i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        arr_26 [i_2 + 3] [i_2 + 3] [i_4] [i_3] [i_7] [i_2 + 3] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_19)), (var_13)));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)28664))) : (8953254675396117318LL)))) : (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_15 [(short)20] [(short)20] [i_4 + 1] [i_7] [i_7])))) ? (min((arr_25 [i_2] [i_3] [i_4] [i_7] [i_8]), (((/* implicit */unsigned long long int) var_9)))) : (((unsigned long long int) var_10))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 18; i_9 += 4) 
                    {
                        var_30 = ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_2 + 2] [2LL])));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? ((~(2147483648U))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (var_16)))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        arr_31 [i_10] [i_3] [i_4] [i_7] [(short)10] = var_17;
                        var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (signed char)16))));
                    }
                    arr_32 [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_14)), (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (arr_8 [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))), (arr_15 [i_2] [i_2 - 2] [i_2] [i_2] [i_3])));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((((var_18) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (var_2))) : ((~(((unsigned long long int) arr_6 [i_2]))))));
                        arr_35 [10U] [10U] [i_3] [i_7] [10U] = ((/* implicit */unsigned char) var_0);
                        var_34 += ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned int) ((short) var_3)))));
                        arr_36 [i_2] [i_3] [i_2 - 3] [i_2 + 3] [11LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_15 [i_2 - 1] [i_3 - 1] [i_4 + 1] [i_3] [i_3]) : (arr_15 [i_11] [i_3 + 3] [i_4 + 1] [i_7] [i_3])))) ? (((long long int) arr_15 [i_3] [i_3 + 3] [i_4 + 1] [i_7] [i_3])) : (((/* implicit */long long int) ((int) var_9)))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_2] [i_3] [i_4] [i_7] [i_7] [i_12])) ? (((/* implicit */int) arr_12 [i_2 - 3] [i_3 - 1])) : (min((var_1), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_0))) == (((((/* implicit */_Bool) -1473428813)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (0U))))))) : ((~(((unsigned int) var_4))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) var_16))));
                        var_37 = min((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)511)))), (min((((((((/* implicit */int) (short)-16290)) + (2147483647))) << (((((-3686070163038568537LL) + (3686070163038568554LL))) - (17LL))))), (min((arr_22 [i_4] [i_7] [i_4] [i_3 + 2] [20ULL]), (((/* implicit */int) var_9)))))));
                        var_38 = ((/* implicit */int) ((var_10) >> (((((((((/* implicit */_Bool) (unsigned short)58692)) ? (2767992478U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16289))))) << (((((arr_8 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (32772U))))) - (2115718898U)))));
                        var_39 = ((/* implicit */unsigned char) ((long long int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_19))))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        var_40 *= ((/* implicit */short) (~(min((arr_9 [i_2] [i_7] [i_7]), (var_10)))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_28 [i_2 + 1] [i_3 - 1] [i_3 + 3] [i_4 + 1]), (var_11)))) ? (((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_3] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1]))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-30867)) != (((/* implicit */int) (_Bool)1))))))));
                        var_42 = ((/* implicit */_Bool) arr_40 [(short)6] [(short)6] [i_4 - 1] [i_4 - 1] [i_4 - 1]);
                    }
                }
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_43 += ((/* implicit */long long int) (~(((min((var_15), (((/* implicit */int) var_0)))) << (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)255)) - (229)))))))));
                    var_44 = ((/* implicit */_Bool) ((unsigned short) var_19));
                    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_7))))) ? (arr_24 [i_3] [i_3] [i_3 + 3] [i_4] [i_4] [(signed char)2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_10 [i_4] [11ULL])) ? (((/* implicit */int) arr_41 [(signed char)6] [i_14] [i_3] [i_14] [i_14])) : (((/* implicit */int) arr_29 [i_3])))) : (((/* implicit */int) ((((/* implicit */int) var_18)) > (((/* implicit */int) var_0))))))))));
                }
                for (long long int i_15 = 1; i_15 < 19; i_15 += 3) 
                {
                    arr_46 [i_2] [i_3] [i_3] [i_15 + 2] = ((/* implicit */long long int) min(((short)(-32767 - 1)), ((short)-30867)));
                    arr_47 [11LL] [i_3] [i_4 - 1] = ((/* implicit */short) var_8);
                    var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) ((((arr_28 [i_2] [i_2 - 2] [i_4 + 1] [i_15]) + (9223372036854775807LL))) >> (((var_2) - (13540222162443327980ULL)))))) ? (((/* implicit */unsigned long long int) arr_13 [(short)20] [(unsigned short)12] [i_15] [i_15])) : (((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((/* implicit */int) arr_37 [(unsigned char)19] [i_3 + 1] [i_3] [i_4 + 1] [i_15 + 1] [i_3]))))) < (arr_28 [i_15 + 2] [i_4 + 1] [i_3 + 3] [i_2 - 2])))))));
                }
                var_47 -= ((/* implicit */signed char) arr_44 [14ULL] [14ULL] [14ULL] [i_2]);
            }
            var_48 = ((/* implicit */int) arr_39 [12] [i_2] [i_2] [i_2] [i_3]);
            var_49 = ((/* implicit */short) var_7);
        }
        arr_48 [(_Bool)1] |= ((/* implicit */signed char) var_18);
    }
    var_50 -= ((/* implicit */unsigned char) ((var_5) == (var_4)));
    var_51 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_3))))) * (((unsigned int) var_14)))) == (((/* implicit */unsigned int) var_15))));
}
