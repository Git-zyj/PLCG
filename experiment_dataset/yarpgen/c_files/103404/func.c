/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103404
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_1))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [(unsigned char)0] = ((/* implicit */long long int) 1084583288U);
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_3))) & (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (1084583274U)))))));
            var_17 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1 + 1])) && (((/* implicit */_Bool) var_0)))))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) 3210383995U)));
            var_19 *= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_1)) << (((arr_2 [i_0]) - (4766077488951171169ULL))))));
        }
        for (short i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                arr_13 [i_4] [i_3] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)3]))) : (var_9)))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_19 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3897235884U)) ? (7419862772453299915ULL) : (6844830814921844638ULL)));
                            var_20 *= ((/* implicit */long long int) ((signed char) ((3210384004U) << (((var_11) - (5928953983451825881LL))))));
                            var_21 = ((/* implicit */unsigned short) ((signed char) var_6));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+((-(var_2))))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -347462293665116742LL)) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) var_11)))) : (((((/* implicit */_Bool) var_2)) ? (11601913258787706975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [15ULL] [i_5]))))))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                arr_24 [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (var_2))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3])) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2]))))))));
                var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_0 - 1] [i_3 - 1]) ? (arr_22 [i_3] [i_3] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((+(((/* implicit */int) arr_7 [i_0 + 1] [i_3 + 1])))) : (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_12)) - (69)))))));
                arr_25 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)78)))))));
            }
            for (long long int i_8 = 2; i_8 < 16; i_8 += 4) 
            {
                var_25 = ((/* implicit */short) 11601913258787706997ULL);
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0])) ? (arr_22 [i_8] [i_3 + 2] [i_8]) : (arr_22 [i_0] [i_0] [i_0]))))))));
                var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_8 - 1]))));
            }
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_14)))))) ? (((((/* implicit */_Bool) ((arr_10 [(short)15] [i_3 - 2] [i_0]) & (((/* implicit */long long int) 4013312171U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_15 [i_9] [i_3] [i_0] [i_0 + 1])) : (1587797292)))) : (((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_9 + 2]))))))) : (((((/* implicit */_Bool) var_9)) ? (max((var_11), (arr_26 [i_9] [i_3 + 2] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((/* implicit */int) var_10)))))))));
                var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_0] [i_9] [i_9]))) || (((/* implicit */_Bool) arr_21 [i_3] [i_0] [i_3 + 2]))));
                var_30 = ((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_3] [i_9 - 1]);
                arr_30 [i_0] [i_3 + 2] [i_9] [i_3] = ((/* implicit */int) (-((-(3210383985U)))));
            }
            arr_31 [i_0] = ((/* implicit */signed char) ((long long int) (~(2645047708U))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 1) 
        {
            arr_36 [i_10] = ((/* implicit */unsigned char) ((signed char) var_12));
            var_31 = ((/* implicit */unsigned short) var_4);
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_10 + 2] [i_0 + 1] [i_0])) << (((/* implicit */int) arr_20 [i_10 + 1] [i_0 - 2] [i_0]))));
        }
        arr_37 [i_0] [i_0 + 1] = ((/* implicit */int) (_Bool)0);
    }
    var_33 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_5)), (((unsigned int) var_13))))));
}
