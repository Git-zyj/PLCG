/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185722
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
    var_15 = ((/* implicit */short) 1415097480);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */int) ((var_10) ? ((~(arr_7 [i_3] [i_3] [8ULL]))) : (((/* implicit */unsigned long long int) arr_0 [(signed char)13]))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) ((((_Bool) arr_6 [17LL] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [(short)15] [i_0]))) : (var_7)))));
                            var_19 = ((/* implicit */unsigned short) 0LL);
                            var_20 = ((/* implicit */long long int) var_4);
                        }
                        var_21 = ((/* implicit */long long int) arr_10 [i_3] [(unsigned char)12] [i_2] [i_2] [i_1] [i_0]);
                        var_22 *= (short)11313;
                        /* LoopSeq 4 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) arr_4 [17U] [i_3] [i_2]);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_2))));
                            var_25 = ((/* implicit */unsigned long long int) ((arr_0 [i_2]) % (var_14)));
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [(short)21] [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_7 [i_0] [i_2] [(short)13]) / (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_3))));
                            arr_15 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]))) : (4050227998U)));
                            arr_16 [20LL] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) (unsigned short)64078))));
                            var_27 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_6]))));
                            var_28 |= ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6] [12U] [i_2]))) : (var_5));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) arr_9 [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7])))))))));
                            var_30 = ((/* implicit */unsigned char) (_Bool)1);
                            var_31 ^= var_4;
                            var_32 = ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_3] [i_7])) ? (arr_17 [i_7] [i_3] [i_2] [i_1] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_8])) ? ((-(arr_17 [i_0] [i_0] [i_2] [i_0] [i_8]))) : (((/* implicit */long long int) var_0))));
                            var_34 = ((/* implicit */short) (~(var_3)));
                            var_35 = ((/* implicit */unsigned int) (~(arr_3 [i_0])));
                        }
                    }
                } 
            } 
        } 
    }
    var_36 = ((/* implicit */signed char) var_7);
    var_37 = ((/* implicit */short) var_14);
}
