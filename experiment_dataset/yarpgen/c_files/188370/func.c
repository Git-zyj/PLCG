/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188370
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(signed char)6] [(signed char)6] [(signed char)6])) ? (min((arr_1 [i_0]), (((((/* implicit */_Bool) 5413402943266220407ULL)) ? (arr_6 [(short)12] [(short)12] [i_2] [i_2]) : (((/* implicit */int) arr_0 [5U])))))) : (((((arr_1 [i_2]) + (2147483647))) >> (((min((arr_6 [0LL] [0LL] [i_2] [i_2]), (-698052884))) + (698052886)))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_15 |= ((/* implicit */int) (-((-(arr_8 [i_2] [i_1] [i_2] [i_2] [i_2])))));
                        var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_4 [i_0])), (arr_7 [i_3] [i_2] [i_1] [i_0])));
                        var_17 &= ((/* implicit */short) (_Bool)1);
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [0]))));
                        var_19 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22110))))), (((unsigned int) var_11))))));
                        var_20 = ((/* implicit */signed char) min(((_Bool)1), (arr_2 [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-((~(arr_11 [i_0] [i_0]))))))));
                        var_22 = ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 6U)))))) ? (((/* implicit */int) arr_10 [4U] [i_5] [i_5] [i_5] [i_5])) : (arr_9 [(_Bool)1] [i_1] [i_2] [i_5]));
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [(short)1] [(short)1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_6] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) < (arr_11 [i_0] [i_1])));
                            var_24 += ((/* implicit */short) (!((_Bool)1)));
                            var_25 *= ((/* implicit */unsigned long long int) (-(var_6)));
                        }
                        var_26 = ((/* implicit */_Bool) arr_0 [i_6]);
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_8] [i_9])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_9] [i_8] [i_2] [i_1] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_9])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned char)9))))) ? (arr_14 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_2] [i_2] [i_8] [i_9]))))));
                                var_29 = ((/* implicit */short) arr_12 [i_8]);
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)4] [7LL])) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_11)) : (var_10))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (var_6))))))), (((/* implicit */long long int) (~(var_11))))));
}
