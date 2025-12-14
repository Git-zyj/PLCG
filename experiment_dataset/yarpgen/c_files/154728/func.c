/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154728
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_0 [i_0 + 2] [i_0 + 1]))) <= (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) >> (((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) + (((/* implicit */int) var_1)))) - (4331)))))));
        arr_2 [(unsigned char)9] = ((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0]);
        var_14 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 + 2]) && (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_15 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_0)))))))), (((((/* implicit */int) ((unsigned short) var_3))) / (((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) >> (((arr_4 [i_1] [i_1]) - (3395267109U)))))))))) : (((/* implicit */unsigned char) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_0)))))))), (((((/* implicit */int) ((unsigned short) var_3))) * (((((((((/* implicit */int) arr_3 [i_1])) - (2147483647))) + (2147483647))) >> (((arr_4 [i_1] [i_1]) - (3395267109U))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */signed char) (+(var_8)));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) + (((((/* implicit */_Bool) (-(arr_16 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((arr_14 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                            var_18 ^= ((/* implicit */unsigned char) arr_7 [(_Bool)1]);
                            arr_17 [i_1] [i_2] [i_3] [i_4 + 1] [i_1] = ((/* implicit */int) arr_13 [0] [i_3] [i_1] [(short)6]);
                        }
                        var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)24425)) ? (((/* implicit */int) (short)7512)) : (((/* implicit */int) (unsigned short)1023)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        arr_21 [i_6] [(unsigned short)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 161897860596928759LL)) ? (((/* implicit */int) (unsigned short)64513)) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_0 [i_6] [i_7])) ^ (((/* implicit */int) var_1)))) - (((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (arr_22 [i_6] [10LL]) : (((/* implicit */int) var_1)))))) ^ (((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))));
            arr_25 [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((_Bool) ((unsigned int) arr_16 [i_6]))))));
        }
        var_21 = ((/* implicit */unsigned int) min((arr_11 [i_6] [i_6] [i_6] [i_6]), (((((((/* implicit */_Bool) arr_16 [(short)7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [5U])))) * ((+(((/* implicit */int) arr_1 [(signed char)2] [i_6]))))))));
    }
    for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            var_22 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_12 [i_8] [(signed char)6] [(short)6] [(signed char)6] [i_9 + 1])) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((signed char) (unsigned short)64512))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_20 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [(signed char)3]))))))))));
            arr_30 [i_9] = ((/* implicit */_Bool) var_9);
            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_19 [i_9 - 1])) * (arr_15 [i_8] [i_8] [i_9 + 1] [i_9] [i_9 + 1])))));
            /* LoopSeq 1 */
            for (short i_10 = 2; i_10 < 7; i_10 += 1) 
            {
                arr_33 [i_8] [i_9] [9] = ((/* implicit */unsigned short) arr_27 [i_8]);
                arr_34 [(unsigned char)4] [i_9] [i_10] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) ^ (1071644672U))) - (3223322490U))))));
                var_24 -= arr_8 [8];
                /* LoopSeq 3 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */long long int) var_3)), (min((((/* implicit */long long int) 2147483647)), (var_4))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((unsigned char) var_10)))) >= (min((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11] [(signed char)7] [i_9] [(signed char)6] [(signed char)7])) && (((/* implicit */_Bool) arr_3 [i_11]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11])))))) ? (((/* implicit */unsigned long long int) arr_4 [i_10] [i_9])) : (max((10081304873190846195ULL), (((/* implicit */unsigned long long int) arr_32 [i_8] [(unsigned short)0] [(short)5] [(unsigned char)6]))))))) && (((/* implicit */_Bool) ((long long int) ((int) var_5))))));
                    var_28 = ((/* implicit */short) max((((/* implicit */int) min((min((var_10), (((/* implicit */signed char) arr_23 [i_8])))), (((/* implicit */signed char) var_6))))), (min((((/* implicit */int) var_12)), (((((/* implicit */int) arr_8 [i_11])) / (((/* implicit */int) var_9))))))));
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                    var_30 = ((/* implicit */unsigned long long int) (unsigned short)47526);
                }
                for (signed char i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_31 [i_8] [i_9] [i_10 + 1])) ? (arr_31 [i_8] [i_8] [i_10 + 3]) : (arr_31 [2LL] [i_9] [i_10 + 3])))));
                    var_32 += ((((/* implicit */_Bool) min((arr_36 [i_10 + 3] [9] [i_10] [i_13] [i_9 + 1]), (arr_36 [i_10 + 1] [1LL] [i_10 + 1] [8ULL] [i_9 - 1])))) ? (((/* implicit */int) ((unsigned short) 16777184U))) : (((((/* implicit */_Bool) arr_36 [i_10 - 1] [i_10] [5U] [i_13] [i_9 - 1])) ? (arr_36 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_9 + 1]) : (arr_36 [i_10 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]))));
                    arr_41 [i_13] [(unsigned short)4] [(unsigned short)4] [i_8] = ((int) min((((/* implicit */unsigned int) (short)24425)), (16777184U)));
                    arr_42 [i_8] [i_8] [i_8] [(signed char)9] [i_8] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_9 - 1])) && (((/* implicit */_Bool) arr_19 [i_9 - 1])))) && (((/* implicit */_Bool) min((((/* implicit */int) var_6)), (arr_19 [i_9 + 1]))))));
                }
            }
        }
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            arr_47 [i_14] = ((/* implicit */long long int) var_10);
            arr_48 [i_14] [i_14] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_32 [1LL] [i_14] [i_14] [i_14]) : (min((((arr_32 [i_8] [(unsigned short)7] [i_8] [2U]) << (((((/* implicit */int) arr_24 [i_14])) - (24856))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_11)))))))));
            var_33 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_39 [6ULL] [i_14] [i_14])))) >= (((/* implicit */int) arr_13 [i_8] [i_8] [i_14] [i_14])))) ? (((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */int) arr_43 [i_14])) : (((/* implicit */int) arr_43 [i_8])))) : (min((((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_10))))), ((+(((/* implicit */int) arr_29 [i_8] [i_14]))))))));
            arr_49 [i_8] [i_8] [i_14] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : ((+(arr_32 [i_8] [i_8] [i_8] [i_8]))))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_8]) : (((/* implicit */int) (signed char)-27)))))))) ? (((((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [i_8] [i_8])) - (((((/* implicit */_Bool) arr_19 [i_8])) ? (arr_12 [i_8] [(unsigned short)8] [(unsigned short)10] [i_8] [(signed char)22]) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [1U] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (arr_28 [i_8]))) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
        }
        arr_50 [9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) 776566577))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_1))))) : (min((((/* implicit */long long int) arr_27 [i_8])), (var_4))))))));
    }
    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_16 = 2; i_16 < 22; i_16 += 1) 
        {
            var_35 = ((/* implicit */short) max((((int) var_3)), (((((/* implicit */_Bool) ((short) arr_55 [i_15] [(short)18]))) ? (((/* implicit */int) arr_7 [i_15])) : (((int) var_10))))));
            var_36 = ((/* implicit */unsigned int) arr_7 [i_15]);
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) (~(((int) min((((/* implicit */unsigned short) arr_58 [i_15] [i_15] [10LL] [i_19])), (var_12))))));
                            var_38 *= ((/* implicit */signed char) var_0);
                            var_39 = ((signed char) arr_51 [i_16 + 1]);
                        }
                    } 
                } 
            } 
        }
        var_40 -= ((/* implicit */unsigned char) var_10);
        arr_65 [i_15] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_51 [i_15])))));
        arr_66 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_15] [i_15] [i_15])) ? (((arr_57 [i_15] [i_15]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_59 [i_15] [i_15] [i_15])) : (((/* implicit */int) var_3)))))))) ? (((arr_5 [i_15] [12LL]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(268435440LL))))))));
    }
}
