/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116391
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
    var_13 += min((((/* implicit */unsigned int) var_3)), (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_4))) ? (((unsigned int) (short)-14230)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)229)) && (((/* implicit */_Bool) var_6)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_0 [i_4] [i_1])))) << (((((/* implicit */int) arr_5 [i_3])) - (209)))));
                            arr_11 [i_0] [i_0] [i_1] [i_2 - 4] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_3))) - (((/* implicit */int) ((var_2) < (((/* implicit */int) var_7)))))));
                            arr_12 [i_3] [(short)8] [i_0] = ((/* implicit */int) arr_0 [i_3] [i_1]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_2 + 3] [(_Bool)1] [i_3])) ? (arr_6 [i_0 - 3] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_9 [i_0] [2ULL] [i_0 + 1] [i_0 - 3] [i_2 - 2] [i_0 + 1] [i_5]))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && ((_Bool)1)))))))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= var_5;
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_5 [i_0 - 3]))));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */long long int) 0ULL);
                        }
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_0] [i_0] [i_1] [i_0])) ? (arr_13 [i_0] [5LL] [i_0] [i_2] [i_3]) : (arr_2 [i_0])))) ? (arr_13 [i_0] [i_0] [i_2 - 2] [i_0 + 1] [i_2 + 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [(signed char)16] [i_0])))))));
                        var_19 |= ((/* implicit */unsigned int) arr_13 [i_3] [i_2 - 4] [i_1] [i_1] [i_0]);
                        var_20 = ((/* implicit */short) 3517814034U);
                    }
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_6] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_1] [(signed char)5] [i_2 + 3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2 + 3] [i_2] [i_6])) : (arr_2 [i_2 - 2])))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [i_6])) ? (((/* implicit */int) arr_0 [i_6] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_6] [i_6] [i_0] [i_6]))))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 4] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (var_1)))));
                        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_18 [i_6] [i_2 - 2] [i_0] [i_0 + 1] [i_0])) ? (arr_18 [i_6] [i_2 - 2] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_18 [7] [i_2 - 2] [i_1] [i_0 + 1] [i_0 - 3]))), ((+(arr_18 [i_6] [i_2 - 2] [4LL] [i_0 + 1] [i_0])))));
                        arr_21 [i_6] [i_2] [i_0] = ((/* implicit */unsigned short) var_3);
                        var_22 = ((/* implicit */unsigned char) ((unsigned int) var_0));
                        arr_22 [i_6] [i_0] [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_8) << (((var_9) + (6472025901061554544LL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) : (var_9)));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) (~(((unsigned long long int) arr_23 [i_8] [i_7] [i_2] [i_0] [i_0]))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_7] [i_8]))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_7 [i_1] [i_7] [i_1] [i_1] [i_0]))));
                        }
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((10382100268396395117ULL) / (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_25 [i_0] [i_0 + 1] [i_2 + 2] [(unsigned short)10] [i_1] [i_0]))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_7] [16ULL] [i_1] [16ULL] [16ULL])) ? (arr_19 [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 1]) : (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)12] [(short)12])))))) : (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [13ULL] [(_Bool)1] [i_7] [16LL] [(_Bool)1]))));
                    }
                    arr_29 [0LL] [i_1] [5ULL] [i_2] = ((/* implicit */int) max((((short) ((arr_26 [(unsigned char)12] [i_0 - 3] [i_1] [(unsigned char)12] [0ULL]) | (((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0] [i_0] [i_1] [i_0] [i_2]))))), (((/* implicit */short) (unsigned char)0))));
                    arr_30 [i_0] [i_0] [(short)5] = ((/* implicit */int) (+(arr_24 [i_0] [i_0])));
                    arr_31 [i_1] [i_2] = ((/* implicit */unsigned short) (~(max((arr_2 [i_2]), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
