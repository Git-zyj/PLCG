/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130762
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0])) ? (-1731097948) : (((/* implicit */int) arr_9 [i_2] [1LL] [i_2] [i_0] [i_0])))))))) == (((((/* implicit */_Bool) var_13)) ? (((var_4) / (((/* implicit */int) arr_9 [1ULL] [(_Bool)1] [i_1] [8ULL] [i_3])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)59957)) : (((/* implicit */int) arr_3 [i_0 - 1]))))))));
                        var_15 += ((/* implicit */_Bool) arr_7 [i_0] [5U] [i_3]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = (((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (((/* implicit */int) ((3130007020U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_0] [2LL])))));
                            arr_16 [i_0] = ((/* implicit */unsigned long long int) (((-(1003010047U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2164607902486928758ULL)) ? (((/* implicit */int) var_13)) : (519664000))))));
                            var_16 = ((/* implicit */unsigned int) ((int) 2411444354U));
                        }
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_0 + 2] [(unsigned short)9] [i_2] [i_2] [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) min(((-(arr_6 [i_0] [(_Bool)1] [i_2] [i_3]))), (((/* implicit */long long int) (_Bool)1))))) ? (3341296996U) : ((~(var_10)))));
                            var_17 = max((((/* implicit */int) ((1094095364351413290LL) <= (((/* implicit */long long int) var_0))))), (((((/* implicit */int) arr_14 [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2])) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 - 2] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) (unsigned short)58243);
                            var_19 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_12 [i_3] [4U] [i_0]))))));
                        }
                    }
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1798336677U)))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2])) ? (3704541945U) : (2659105196U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)3])) ? (8ULL) : (((/* implicit */unsigned long long int) -1580458147361267915LL))))))))))));
                        var_21 = (+(min((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [6U] [i_7]))) ^ (-14LL))), (((/* implicit */long long int) (unsigned short)29041)))));
                    }
                    var_22 = ((/* implicit */int) (!(var_7)));
                    var_23 = ((/* implicit */int) ((arr_21 [i_0 - 1] [i_1] [i_1] [i_0 - 1]) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) : (3535382412U)));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(unsigned char)1] [i_0 - 2] [(unsigned char)1] [i_0 + 1] [i_8])) && (((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_1])))))) ^ ((((!(((/* implicit */_Bool) 7145436540600420633ULL)))) ? (((((/* implicit */_Bool) 14744250715453564125ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_8 - 1]))) : (8252428539842918142LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 4; i_9 < 6; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) max((-1063771475), (((/* implicit */int) (unsigned char)1))));
                        var_25 ^= ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8]))))), (((var_4) / (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_9] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)157))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8 - 1] [i_9 + 4]))))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (!((_Bool)1)))))));
                        arr_30 [i_0] [i_1] [i_8] [i_9 + 3] [i_0] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0 + 1] [i_1] [i_9] [i_9 - 3]))))) / (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 6; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [i_0 - 2] [i_0 - 2]))));
                        var_28 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_8 - 1] [i_10 + 2] [0U] [i_10 + 1])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_8 - 1] [i_10 + 4] [i_0 + 1] [i_10 + 2])) : (((/* implicit */int) arr_14 [i_0 - 2] [i_8 - 1] [i_10 + 4] [i_10 + 2] [i_10 - 1]))));
                        var_29 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) 552393835U)) ? (17988650144989113384ULL) : (((/* implicit */unsigned long long int) var_0)))));
                    }
                    var_30 ^= (!(((/* implicit */_Bool) var_9)));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((arr_5 [i_0] [(_Bool)1]), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_8])) && (((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 - 1] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-5746829940039069430LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))))));
                }
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_32 -= var_13;
                    arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49993)) << (((19) - (11)))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((unsigned char) arr_0 [i_1]))));
                    var_34 = ((/* implicit */int) (((+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) 900906633)) : (arr_6 [i_0] [i_0] [(short)4] [i_1]))))) ^ (((/* implicit */long long int) (+(arr_8 [i_0] [i_0 + 2] [i_0]))))));
                }
                var_35 = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_1] [i_1])) ? (-5219011623091352761LL) : (((/* implicit */long long int) arr_12 [(_Bool)1] [i_1] [i_1])))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)9492)) != (((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_36 |= ((int) ((((((/* implicit */_Bool) var_8)) ? (1945501449) : (var_3))) / (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) var_3)))))));
}
