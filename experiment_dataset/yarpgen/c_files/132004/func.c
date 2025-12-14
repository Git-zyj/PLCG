/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132004
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16376))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1] [18ULL]))) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4236008893U)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0 - 1] [i_1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_5 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))))))))));
                    var_15 = ((/* implicit */signed char) min(((unsigned short)49159), (((/* implicit */unsigned short) (unsigned char)177))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        var_16 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0 - 1] [4ULL]))));
                        var_17 |= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        var_18 = ((/* implicit */short) max((var_12), (((/* implicit */int) ((signed char) 32766)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)68))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_21 ^= ((((((/* implicit */int) (unsigned short)49159)) <= (((/* implicit */int) (unsigned char)6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (((((/* implicit */_Bool) (signed char)1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -4853367165931180236LL)))));
                            var_22 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) 1843227308)))));
                            var_24 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (short)-3684)) : (((/* implicit */int) var_13)))) - (arr_20 [i_1] [i_1] [i_2])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))));
                            var_26 &= ((unsigned char) (unsigned short)49183);
                            var_27 = ((arr_22 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1 + 2] [i_1] [i_0 + 1]) ? (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_1] [i_8 + 1])) : (((/* implicit */int) (unsigned char)245)));
                        }
                        var_28 &= ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_0] [i_5]);
                    }
                    var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_0 + 1] [i_0 + 1])) : (arr_6 [i_0] [i_0] [i_1] [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) (signed char)-1))))) : (var_5))) / (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_1])) : (var_7))))))));
                    var_30 = ((/* implicit */unsigned long long int) ((((_Bool) var_3)) ? (max((((/* implicit */long long int) (short)-11245)), (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_31 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)243)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))))))) ? (796389626) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-27446))))));
    var_32 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (var_5)))) ? (((((/* implicit */int) (unsigned char)0)) >> (((var_5) - (1471446615U))))) : (((((/* implicit */_Bool) (unsigned char)41)) ? (-1) : (((/* implicit */int) var_4))))))));
}
