/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177975
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 *= ((/* implicit */unsigned long long int) (unsigned short)57344);
        var_11 *= ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) >= (1000553145U)));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(1000553153U))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) arr_10 [i_2])), (9223372036854775808ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (arr_10 [(unsigned char)2]))) && (((/* implicit */_Bool) ((int) 1000553145U))))))))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        arr_13 [i_5] [i_4] [8] [2U] = ((/* implicit */int) max((((var_6) && ((_Bool)1))), (var_6)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_17 [(unsigned char)9] [i_3] [8LL] [i_3] [(short)6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_2 [i_5] [i_6])));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14799030516495840020ULL)) ? (arr_8 [i_2]) : (arr_8 [i_4])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((short) (~(var_0)))))));
                            arr_20 [i_3] [10] [i_7] [i_3] [9LL] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_9 [i_2] [i_3] [i_4])))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255)))) ^ ((~(var_3)))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2] [(unsigned char)2] [i_8])) & (((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 4; i_9 < 11; i_9 += 2) 
                        {
                            arr_25 [(unsigned short)4] [i_3] [i_4] [i_3] [(unsigned short)4] [(_Bool)0] [4] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (-1336073764)));
                            var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) ((unsigned int) arr_14 [i_2] [i_3] [1] [i_9]));
                            var_20 -= ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_9)));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) 2214231913867129583ULL))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_28 [0U] [i_8] [i_4] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_5)) | (1224499605)))));
                            arr_29 [i_2] [8ULL] [i_3] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_32 [(unsigned short)11] [(signed char)2] [7LL] [i_11] [i_2] = ((/* implicit */short) var_3);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [9ULL]))))) < (((((/* implicit */_Bool) 2017995796U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (arr_2 [8U] [(unsigned short)1]))))))));
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */int) (signed char)115)) / (((/* implicit */int) arr_14 [10LL] [5LL] [(signed char)7] [i_11]))))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_3))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        var_25 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((2214231913867129583ULL), (arr_15 [3] [8] [(unsigned short)1] [(_Bool)1] [(signed char)1]))))) * (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), ((-(3294414141U))))))));
                        arr_35 [(unsigned short)6] [(short)3] [(unsigned char)5] [(short)1] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [6] [i_2] [6] [6] [6])) ? (1000553129U) : (((/* implicit */unsigned int) (~(var_3))))))) ? (min((arr_8 [i_12 + 1]), (arr_8 [i_12 + 1]))) : (((/* implicit */unsigned long long int) (~((~(arr_0 [(unsigned char)6])))))));
                        arr_36 [(unsigned char)4] [(short)11] [(unsigned char)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 2214231913867129583ULL)))))) : (((((/* implicit */_Bool) 1160535495949549813LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (signed char)92);
                        var_27 = ((/* implicit */unsigned int) var_2);
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_4 [i_2])) == (((/* implicit */int) var_7))))))));
                    var_29 = ((/* implicit */short) -5808348791445211127LL);
                }
            } 
        } 
        var_30 ^= ((/* implicit */signed char) (unsigned char)26);
    }
    var_31 = var_4;
}
