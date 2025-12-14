/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182234
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_8 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) min((862457370U), (((/* implicit */unsigned int) (unsigned char)147))));
                        var_20 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                    }
                    for (int i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0]))))), (3432509924U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) arr_5 [i_1] [i_2] [i_4 - 2])) : (((/* implicit */int) arr_1 [i_2 - 1] [i_4 - 1])))))));
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_21 += ((/* implicit */unsigned short) ((var_10) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((3432509893U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-13)))))))))));
                            var_22 += ((/* implicit */signed char) var_11);
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((((_Bool) arr_16 [i_6] [i_2 + 2] [i_2 + 1] [i_2 + 1])) || ((((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) var_15)))));
                            arr_17 [i_6] [2LL] = ((/* implicit */unsigned long long int) max((((int) ((((var_16) + (2147483647))) >> (((arr_9 [i_0] [i_2 + 3] [i_4 + 1] [i_6]) + (324279311)))))), ((~(((/* implicit */int) (short)28492))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_4 - 1] [i_4 - 1] [i_0] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 + 1]))) : (arr_11 [(short)12] [(short)12] [i_4 + 1] [i_4] [i_4 - 1] [(short)12])));
                            var_25 = ((/* implicit */unsigned long long int) arr_14 [i_0] [(unsigned char)6] [(unsigned char)6] [i_4] [i_4] [i_4] [i_7]);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_7] [i_2 - 1] [i_2] [i_1] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned char)0))));
                            arr_21 [i_2] [i_4 - 2] [i_4 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_4 - 1]))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [(signed char)11] [i_1] [(signed char)11] [i_1]))))) + (var_10))));
                            var_28 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2 + 3] [i_4 + 1])), (1597884317)))));
                            var_29 &= ((/* implicit */long long int) (unsigned short)33752);
                            var_30 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] [i_0] [12])) ? (((/* implicit */int) arr_13 [(unsigned short)1] [(unsigned short)1] [i_2] [i_4] [i_8])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4] [i_8])))) | (((/* implicit */int) (signed char)-44))));
                        }
                        var_31 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 4294967288U)) ? (min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [(signed char)8] [i_4])), (arr_20 [i_0] [(short)15] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_19)))))));
                    }
                    arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_7 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_0] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_17)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3356)) + ((-(((/* implicit */int) var_19)))))))));
}
