/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150339
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (min((5366505928290356031LL), (((/* implicit */long long int) (unsigned char)19))))));
    var_11 = ((/* implicit */unsigned char) max((min((((/* implicit */int) var_3)), (745785975))), (((/* implicit */int) (signed char)-66))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-64)) + (101))) - (33)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) - (arr_7 [0ULL] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) var_2)))))))))));
                            var_14 = ((/* implicit */short) (+(4242328909529413268LL)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_3)) + (101)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_15 [(signed char)9] [i_1] = ((/* implicit */long long int) (unsigned char)255);
                        arr_16 [i_0] [1ULL] [i_4] [(unsigned short)4] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */int) ((13845227557674969149ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)0] [i_4] [i_4])))))) % (arr_2 [i_0] [i_0] [8U])));
                        arr_17 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) 7115332296312046157LL);
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_11 [10]))));
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)13)) ? (4601516516034582470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164)))));
                            var_18 = ((/* implicit */unsigned short) (-(arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])));
                            var_19 = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_5] [5U] [i_0] = arr_4 [i_0] [i_0];
                            arr_23 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [5]);
                        }
                    }
                    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                }
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_8 [i_1]) : (arr_8 [i_0])));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) 8388607)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    }
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_34 [10] [i_8] [10] [i_1] [i_8] [10] = ((/* implicit */unsigned long long int) (-(1811734736)));
                        arr_35 [i_8] [(signed char)6] [6U] [i_8] = ((/* implicit */unsigned char) arr_27 [i_8]);
                    }
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */int) 3940649673949184ULL);
                        var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(var_0)))) ? (arr_6 [i_11] [i_1] [(unsigned char)7] [3] [i_1] [i_11]) : (((/* implicit */unsigned int) (~(2147483642))))))));
                    }
                    arr_39 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_14 [i_8] [i_8] [i_1] [i_0] [i_0])) : (var_4)))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    var_25 = ((/* implicit */signed char) (unsigned short)56293);
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(var_2))))));
                }
                var_27 = ((/* implicit */long long int) arr_11 [(unsigned char)4]);
            }
        } 
    } 
}
