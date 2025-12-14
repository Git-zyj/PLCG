/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169147
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */int) var_12)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2989748690U)) ? (((/* implicit */int) (short)-19445)) : (((/* implicit */int) arr_1 [i_0]))))) ? (min((((/* implicit */unsigned int) (signed char)21)), (arr_2 [(unsigned short)11] [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (3060392291U)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0 - 1] [i_2])) || (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1])))) && (((/* implicit */_Bool) 963354562)))))));
                    var_21 = ((/* implicit */unsigned char) ((-1918367312) > (((int) ((((/* implicit */_Bool) 1918367311)) ? (((/* implicit */int) (signed char)-16)) : (1918367311))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        arr_9 [i_1] [(unsigned short)14] [i_3] &= ((/* implicit */long long int) arr_0 [i_0 + 1]);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(arr_8 [i_3] [i_1] [i_1] [i_3] [i_1] [(unsigned char)8]))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) var_18);
                    }
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) min((1514563722704163429LL), (((/* implicit */long long int) var_15))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) max((arr_1 [i_0]), (arr_1 [i_0]))));
                        var_23 = max((min((((arr_5 [i_4] [i_2] [i_0]) + (((/* implicit */int) (short)28069)))), (((/* implicit */int) ((short) var_16))))), ((+(((/* implicit */int) ((unsigned short) var_3))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_17 [i_0] [i_0 + 1] [11U] [8LL]) - (arr_11 [(unsigned char)9] [i_1] [i_0 - 1] [i_0 - 1] [i_0]))));
                        var_25 = ((/* implicit */_Bool) -1918367312);
                    }
                    var_26 = ((/* implicit */signed char) min((max((arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [(unsigned char)5]), (arr_17 [i_0 + 1] [i_0 - 1] [(short)4] [i_0 - 1]))), (max((min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_0])), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8490500265903258519LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))))));
                    var_27 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (((1485073538) | (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11)))))));
                }
                var_28 -= ((/* implicit */unsigned char) arr_15 [(unsigned char)4]);
                var_29 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 3626769733U)) ? (-1918367301) : (((/* implicit */int) arr_7 [0LL] [i_1] [(unsigned short)2] [0LL]))))), (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))) & (min((arr_12 [(signed char)14] [i_0 + 1] [10] [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1] [8] [i_1] [i_0 - 1] [i_1])))));
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) -8813405464410134453LL))), (((unsigned int) var_15)))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))))))));
    var_32 &= ((/* implicit */unsigned char) var_17);
    var_33 = ((/* implicit */_Bool) ((3292679662U) - (((unsigned int) ((((/* implicit */_Bool) 1918367331)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19)))))));
}
