/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111194
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
    var_20 = ((/* implicit */short) var_1);
    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (signed char)1))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) ((unsigned char) var_3))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_19)))) : (var_1)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) - ((+(((/* implicit */int) arr_2 [i_0])))))))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (8161391737345854992LL) : (((/* implicit */long long int) arr_0 [i_0] [10]))))))));
        var_24 = arr_3 [i_0];
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(262143U))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((arr_6 [i_1] [i_1]) == (arr_6 [i_1] [i_1]))) ? (((arr_6 [i_1] [i_1]) << (((arr_6 [i_1] [i_1]) - (3246957560U))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 262143U))) + (arr_5 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (signed char)-2))))) ? (262143U) : (((/* implicit */unsigned int) arr_5 [i_1]))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) 4294705153U)) ? (((/* implicit */long long int) (+(262143U)))) : (1265437692177439772LL))))));
        var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_3 [i_1])) - (65)))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (262163U) : (((/* implicit */unsigned int) -1))))) ? (arr_5 [i_2]) : (((/* implicit */int) ((unsigned char) 262177U)))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_3 [4U]))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1000754577)) ? (arr_6 [9] [i_2]) : (((/* implicit */unsigned int) arr_5 [i_2]))))) ? (((/* implicit */int) ((short) arr_5 [i_2]))) : ((+(-966578118)))));
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) arr_7 [i_2])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_2] [i_2]))) <= (2220369764U))) ? ((+(2220369764U))) : (((unsigned int) 4294705144U))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_35 = ((((/* implicit */int) arr_11 [i_2] [i_4] [i_5])) & (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_5] [(unsigned char)2])) : (((/* implicit */int) arr_18 [i_2] [i_4] [i_5] [i_4])))));
                        var_36 = arr_5 [i_2];
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((int) arr_21 [i_2] [i_2] [i_2] [13LL]))));
            /* LoopSeq 4 */
            for (short i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_2] [i_2]))) ? (((unsigned int) arr_20 [i_2] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_4] [i_4] [i_2])))));
                var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [1U] [i_4] [i_2])) ? (((/* implicit */int) arr_3 [i_7])) : (((/* implicit */int) arr_10 [i_2] [i_4] [i_4]))))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_40 = ((signed char) arr_32 [i_2] [i_7] [i_7] [i_8] [i_8 - 1]);
                            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_7])) && (((/* implicit */_Bool) (unsigned char)255)))) ? (arr_31 [i_8 + 3] [i_8 + 3] [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_8 - 1] [i_8 + 3]) : (((/* implicit */unsigned int) arr_5 [i_7]))));
                        }
                    } 
                } 
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                var_43 |= ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) arr_33 [i_2] [i_4] [i_10] [i_4] [i_10] [i_10])) ? (arr_17 [i_4]) : (262151U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_2])))));
                var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [11ULL] [11ULL] [i_2] [i_2] [(unsigned char)1] [(unsigned char)1] [6LL])) || (((/* implicit */_Bool) arr_26 [i_2])))))) : (((arr_15 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_28 [i_2] [i_2] [i_4] [(unsigned char)14] [i_4] [i_4]))))))));
            }
            for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4294705170U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_36 [i_4])))) : (-9223372036854775798LL)));
                var_46 = 4294705133U;
                var_47 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_11 [i_4] [(signed char)0] [i_11]))) + (((((/* implicit */_Bool) (short)-8467)) ? (((/* implicit */int) (unsigned char)0)) : (arr_0 [i_2] [i_2])))));
                var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_4] [i_11 - 1] [8LL] [i_2])) ? (arr_13 [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_11])))))) ? (((/* implicit */int) ((unsigned char) 2220369764U))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2])) && (((/* implicit */_Bool) arr_0 [i_2] [i_2])))))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_11 - 1])) ? (((/* implicit */int) arr_16 [i_2] [i_4] [i_11 + 1])) : (((/* implicit */int) arr_32 [i_2] [i_4] [i_4] [(signed char)14] [i_4]))));
            }
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_4 [i_2] [i_4]) : (((/* implicit */long long int) arr_22 [i_2] [i_12] [i_4] [i_12] [i_12]))));
                var_51 = ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */unsigned int) arr_8 [i_12])) : (arr_35 [i_4] [i_12] [i_12] [i_12])))));
            }
        }
    }
    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23082))) : (((((/* implicit */unsigned int) var_1)) ^ (var_0)))));
}
