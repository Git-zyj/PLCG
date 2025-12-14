/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176253
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((min((arr_1 [i_0]), (var_10))) == (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0])))))) * (max((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) var_10))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) arr_7 [i_2 + 3]);
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) var_6))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_8)))) ? (((arr_4 [i_1]) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
        }
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) (((!(((_Bool) arr_9 [i_3] [(unsigned short)13])))) ? (((unsigned long long int) ((long long int) arr_10 [i_1] [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                arr_13 [(unsigned short)11] [i_3] [(unsigned short)11] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 1382125827)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2251799813685247LL))))))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned char) ((int) ((short) arr_11 [i_3] [i_3] [i_1])))))));
                        arr_20 [2ULL] [(short)2] [i_3 - 1] [i_1] = ((/* implicit */short) max(((+(((/* implicit */int) arr_11 [i_4] [i_4] [i_6])))), ((+(((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_4] [(unsigned char)8] [i_6 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_5]))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_10)))) || (((/* implicit */_Bool) (+(arr_17 [i_5] [i_6 - 2] [(short)5] [i_5] [i_5 - 1]))))));
                        var_23 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_6]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_7] [i_7] [i_3] [7U] [i_4] [(unsigned char)11] [2ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_5 - 1] [i_3] [i_5 - 2] [i_5 - 2])) ? (((/* implicit */int) arr_8 [i_5 - 2])) : (arr_17 [i_7] [i_5 + 1] [i_5 + 1] [i_5] [i_1])))) ? (((((/* implicit */_Bool) var_14)) ? (arr_17 [i_1] [i_5 - 1] [i_4] [i_5] [i_7]) : (((/* implicit */int) var_9)))) : (arr_17 [i_1] [i_5 - 2] [i_1] [i_5 + 1] [i_4])));
                        var_24 = arr_23 [i_1] [i_3] [i_4] [(unsigned short)16];
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_9 [i_3 - 1] [i_3])) / (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1]))))));
                        arr_27 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5 - 2] [i_3 + 1] [i_3 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5486))) : ((+(arr_4 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_4 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12)))) : (var_2)))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_8))));
                        var_27 = ((unsigned short) max((((/* implicit */unsigned short) (unsigned char)105)), (arr_8 [i_5 - 2])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) var_3);
                        var_29 = ((/* implicit */int) var_0);
                        var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_19 [i_1] [i_3 - 1] [i_3 - 1] [i_5 - 2] [i_1])) ? (arr_25 [i_1] [i_3 - 1] [i_4] [i_5 - 2] [(_Bool)1]) : (((/* implicit */long long int) arr_19 [i_3] [i_3 - 1] [i_5] [i_5 - 2] [i_5]))))));
                    }
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_4] [i_5]))));
                }
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    arr_32 [i_1] [i_3 - 1] [i_10] = ((/* implicit */short) arr_10 [i_3 + 1] [i_3] [i_4]);
                    var_32 = ((/* implicit */short) arr_8 [i_3 - 1]);
                    var_33 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) min((arr_12 [i_10] [i_4] [i_3 - 1] [i_1]), (arr_25 [i_1] [i_1] [i_1] [i_4] [9ULL])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_28 [(short)9] [(short)9] [i_4] [(short)9] [0LL])))))));
                }
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-((~(min((arr_28 [i_11] [i_4] [i_4] [16] [13LL]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))))))))));
                    var_35 = ((/* implicit */short) ((arr_19 [i_1] [i_1] [i_4] [i_3 + 1] [i_4]) >= (((((/* implicit */_Bool) arr_19 [i_11] [i_3] [i_4] [i_3 - 1] [i_3 + 1])) ? (arr_19 [i_11] [i_3] [i_4] [i_3 - 1] [i_1]) : (arr_19 [i_3] [i_3] [i_1] [i_3 + 1] [i_3 - 1])))));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_17 [i_1] [i_1] [i_4] [i_11] [i_11]))))))), (var_0))))));
                    var_37 = ((/* implicit */long long int) min((min((arr_4 [i_3]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_11] [i_4] [i_3 - 1] [i_1])))));
                    var_38 = var_13;
                }
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 1) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_29 [(signed char)11] [i_1] [i_3 - 1] [i_1] [i_1])) / (((((/* implicit */int) var_5)) << (((arr_4 [i_4]) - (2523811875764725663ULL))))))) + (((((/* implicit */int) var_12)) | (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_8 [(unsigned char)14]))))))));
                    var_40 = ((/* implicit */short) var_6);
                }
                var_41 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [11ULL] [11ULL] [i_4])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_34 [i_1] [i_1] [i_1] [i_1])))))), ((+(min((1549227492U), (((/* implicit */unsigned int) var_3))))))));
                arr_39 [(_Bool)0] = ((/* implicit */int) ((((/* implicit */_Bool) 63U)) ? ((-(10ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (1549227492U) : (1549227492U))))))));
            }
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                arr_44 [(unsigned char)6] [(unsigned char)6] [i_3 - 1] [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) arr_38 [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_1])) << (((arr_28 [i_1] [i_1] [i_1] [i_3] [i_13]) - (10740980003678470746ULL))))) : (min((((/* implicit */int) (_Bool)1)), (-1))))) ^ ((+(((/* implicit */int) arr_21 [(signed char)10] [(signed char)10] [(signed char)10] [i_1] [8U] [i_3 + 1]))))));
                var_42 = ((/* implicit */unsigned long long int) var_7);
            }
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_3] [i_1] [i_1] [7U])) && (((/* implicit */_Bool) (unsigned char)150))))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_43 [(unsigned short)10] [i_1])) ? (((/* implicit */int) arr_31 [4ULL] [i_3])) : (((/* implicit */int) arr_41 [(short)11] [i_3 - 1] [i_1])))) : ((~(((/* implicit */int) var_5)))))))))));
            var_44 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-4998))))), ((~(arr_40 [i_3]))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) arr_29 [i_1] [i_1] [13U] [13U] [13U]))))) ? (arr_30 [4U] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_3 + 1] [5] [i_1] [i_1]))))));
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_1]), (arr_15 [i_3 + 1])))) ? (max((((/* implicit */int) arr_29 [i_1] [(short)3] [i_3 + 1] [i_3 - 1] [i_3 - 1])), (arr_17 [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_3]))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_3))))));
        }
        var_46 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_8 [i_1])) ^ (arr_6 [i_1] [i_1])))));
    }
    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
    {
        arr_47 [i_14] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_37 [i_14] [(short)16] [(short)16] [10] [i_14])))) : (((((/* implicit */_Bool) arr_40 [i_14])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
        var_47 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_5 [i_14] [i_14])) ? (((/* implicit */int) arr_5 [i_14] [i_14])) : (((/* implicit */int) arr_5 [i_14] [i_14])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_31 [i_14] [i_14])) : (arr_17 [(signed char)5] [i_14] [i_14] [i_14] [i_14]))) < (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_46 [i_14])))))))));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (int i_17 = 2; i_17 < 8; i_17 += 2) 
                {
                    {
                        var_48 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_14] [(unsigned short)1] [i_16] [i_17 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (var_2))))), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_5 [i_16] [i_15])))), (((/* implicit */int) arr_29 [i_17] [i_17 - 1] [(signed char)2] [i_14] [i_14])))))));
                        var_49 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_38 [i_14] [(short)11] [i_16] [i_16] [i_15] [i_14])))))) ? (max((max((((/* implicit */unsigned long long int) var_13)), (arr_26 [13U] [i_15]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_29 [i_14] [i_14] [i_15] [i_16] [i_16]))))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_14])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((unsigned short) arr_48 [i_14] [i_14]))))))));
                        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (+((+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_6)))))))))));
                    }
                } 
            } 
        } 
    }
    var_51 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_16))));
    var_52 = ((/* implicit */unsigned short) var_8);
    var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) var_15))));
}
