/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119524
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
    var_14 += ((/* implicit */_Bool) (unsigned short)44467);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned long long int) 1048575);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) || (((arr_4 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84)))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_5 [(unsigned char)10] [(unsigned char)17] [i_0 - 2] [i_0 - 1])) : (arr_0 [i_0] [i_0])))));
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35625)) ^ (((/* implicit */int) (unsigned short)20))))) - (arr_4 [(unsigned char)6])));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */unsigned int) (signed char)1);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_4) ^ (((/* implicit */int) arr_2 [i_2 - 1] [i_0]))))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_3 [i_0])))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (20U))))));
                        arr_9 [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
                        {
                            arr_15 [i_0] = ((arr_14 [i_0] [i_1] [i_1] [i_1] [14]) || (((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1] [i_4] [i_0 - 2])));
                            var_22 = ((/* implicit */unsigned long long int) var_12);
                            var_23 ^= (unsigned char)248;
                            arr_16 [6LL] [i_5] [i_0] [i_2 + 1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (var_7) : (arr_8 [i_0] [i_1] [i_1])));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((var_5) <= (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned short)16))))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 + 1])) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (137)))));
                            var_26 = ((/* implicit */unsigned int) (unsigned char)170);
                        }
                    }
                }
            } 
        } 
        arr_20 [i_0 + 1] [i_0] = ((var_10) / (((/* implicit */int) (short)17214)));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_9 + 1])) ? (((/* implicit */int) (signed char)1)) : (arr_8 [i_0] [i_9 + 1] [i_9 - 1])));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 53806622)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 186869950497124803ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 2; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) max((var_29), (((((((/* implicit */_Bool) (signed char)41)) ? (arr_12 [i_11] [i_11 + 1] [i_11 + 1] [i_11]) : (((/* implicit */unsigned long long int) 275399532)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [7LL] [i_7] [(unsigned char)16] [7LL])) || (var_11)))))))));
                            var_30 += ((/* implicit */signed char) (((-(((/* implicit */int) arr_6 [i_10] [(_Bool)1] [(_Bool)1])))) * (((-1) + (((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10]))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-42)) >= (arr_5 [i_0 - 1] [i_0 - 3] [i_11 + 1] [i_11])));
                            var_32 = ((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_8] [i_0 - 1] [i_0]);
                        }
                        for (unsigned char i_12 = 2; i_12 < 21; i_12 += 1) /* same iter space */
                        {
                            var_33 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_7] [i_12] [i_12]))) - (0U)));
                            var_34 &= ((/* implicit */signed char) (~(((18446744073709551615ULL) << (((((/* implicit */int) (unsigned short)60982)) - (60927)))))));
                        }
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((arr_23 [i_0] [i_0 - 1] [i_10]) ? (((/* implicit */int) arr_23 [i_0 - 3] [i_0 + 1] [i_8])) : (((/* implicit */int) (unsigned char)149)))))));
                        arr_38 [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */unsigned char) -2909408333593573181LL);
                        var_36 ^= ((/* implicit */unsigned short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) var_1)) - (61103)))));
                    }
                    for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) (unsigned char)223);
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) - (792304411U))))));
                        var_39 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) -264379641)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)0])) : (arr_21 [i_0 + 1] [i_0 + 1] [i_8]))) ^ (((/* implicit */int) (signed char)-1))));
                        var_40 |= ((/* implicit */unsigned short) arr_19 [i_13] [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_42 [i_0 - 1] [i_0] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (-1850342289)));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -697883344)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))) ^ (arr_33 [i_0 + 1] [2LL] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
    {
        var_42 = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_14])) && ((_Bool)1))))) > (((((/* implicit */_Bool) arr_44 [i_14])) ? (((/* implicit */unsigned long long int) var_10)) : (var_2)))))), (max((((/* implicit */int) arr_43 [i_14])), (((((/* implicit */int) (signed char)6)) << (((1975995748U) - (1975995733U))))))));
        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */int) ((-457091180) <= (((/* implicit */int) (unsigned char)38))))) - (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) (short)14479)) >= ((-2147483647 - 1)))))))))))));
        var_44 ^= ((/* implicit */signed char) ((max(((-(arr_44 [12]))), (((/* implicit */unsigned long long int) (short)5628)))) >= (max((((/* implicit */unsigned long long int) ((-2557559419819535186LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14])))))), (max((((/* implicit */unsigned long long int) 2147483647)), (arr_44 [i_14])))))));
        var_45 = ((/* implicit */unsigned char) max((var_45), ((unsigned char)42)));
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_5)))) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) (unsigned char)175)))) : (var_4)));
}
