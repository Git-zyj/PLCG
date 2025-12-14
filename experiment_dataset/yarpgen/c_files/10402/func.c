/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10402
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)14189)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)14189))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_12)))))) ? (var_16) : (max((((/* implicit */unsigned long long int) (unsigned short)14206)), (((2290364069495303451ULL) | (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                arr_5 [i_1] [i_1] [i_0 + 1] = ((/* implicit */long long int) arr_3 [i_1] [i_0] [i_0 - 1]);
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    var_20 |= ((/* implicit */unsigned short) 2350253502U);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_0 + 1]))))) * (min((max((((/* implicit */long long int) arr_3 [i_0 + 1] [i_1] [i_1])), (arr_7 [(unsigned short)6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_7 [i_2])))))))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51329)) != (((/* implicit */int) arr_8 [14ULL] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_7 [i_0 - 1]) : (max((arr_7 [i_2 - 3]), (((/* implicit */long long int) arr_1 [11LL]))))))));
                }
                for (long long int i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)2] [i_0 - 1])) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_3] [i_3]))))) ? (arr_0 [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [2ULL] [2ULL] [i_0 + 1])))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((var_18) || (((/* implicit */_Bool) (unsigned char)0))))) : (max((arr_0 [i_0 - 1]), (((/* implicit */int) var_17)))))) : (((/* implicit */int) ((unsigned short) ((16156380004214248183ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)51338)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (min((((unsigned long long int) (signed char)-1)), (((/* implicit */unsigned long long int) (+(var_8))))))));
                }
                for (long long int i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    var_24 |= ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [(_Bool)1]);
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_15))));
                    arr_15 [i_0] [i_1] [(unsigned short)2] = ((long long int) (~(arr_11 [i_1] [i_1] [(short)4])));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_18 [i_0 - 1] [i_1] [i_4] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)80))))) / (min((((/* implicit */long long int) arr_3 [i_5] [i_5] [i_5])), (arr_11 [i_5] [6] [i_5])))))));
                        arr_19 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (arr_11 [i_5] [i_5] [6])))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    }
                }
                var_26 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 2350253507U)) ? (arr_11 [i_1] [i_0 - 1] [i_0 + 1]) : (arr_11 [i_1] [i_0 + 1] [i_0 + 1]))) + (9223372036854775807LL))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23634))))));
                var_27 = ((/* implicit */unsigned int) min((((long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_16)))), (((((/* implicit */_Bool) ((((arr_0 [i_0]) + (2147483647))) >> (((var_7) - (1618268321)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [(_Bool)1] [i_1])))) : (((long long int) (_Bool)1))))));
            }
        } 
    } 
    var_28 ^= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (var_19));
    var_29 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) * (((/* implicit */int) var_18))));
}
