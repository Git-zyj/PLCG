/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153529
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
    var_11 = ((/* implicit */unsigned char) ((var_3) ? (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)57640)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) ((unsigned short) (unsigned char)147)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) (short)-25505)) + (25514))))))))))));
                var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) && ((_Bool)0)))), (((unsigned char) 1340258707U))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (3804372535U)))) : (3806541791046522409ULL))), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_14 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_2)) ? (3806541791046522409ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) >> (((((/* implicit */int) (unsigned char)234)) - (178))))), (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_1] [8]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */int) 839090986810166673LL);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-1729))))) : (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [9ULL])))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((14640202282663029206ULL), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((35508493U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515)))))) : (375368875064018816ULL))))))));
                        arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 3ULL);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)124))) ? (536870911ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) / (1898543530U))))));
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) 4294967295U);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_20 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0])) ? (max((((/* implicit */unsigned long long int) arr_7 [0ULL] [i_2] [(_Bool)1])), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1274992290U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (414344380U) : (427464178U))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(1235077299675622604ULL))))));
                    }
                    arr_21 [i_2] [i_1] [i_2] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2954708588U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_2] [i_7]))) / (arr_9 [i_2] [i_2] [i_2] [i_6]))) : (((((/* implicit */_Bool) (signed char)-124)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))))) ? (arr_27 [i_0] [i_0] [i_0] [i_2] [i_0]) : (arr_27 [i_0] [i_1] [i_2] [i_2] [i_7])));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((max((((/* implicit */int) arr_0 [i_6])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))) != (((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (max((((/* implicit */int) arr_22 [i_0] [i_6] [i_0] [i_0] [i_0])), (-1311379741))) : ((((_Bool)0) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9692)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3U)))) ? (((((/* implicit */unsigned long long int) 2147483647)) * (776306316532570434ULL))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_3))))))));
    var_22 = ((/* implicit */int) ((17670437757176981181ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)121)) + (((/* implicit */int) (short)29435)))))));
}
