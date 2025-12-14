/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121417
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
    var_15 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((min((((/* implicit */long long int) var_3)), (var_10))) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    var_16 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_9)))))))) - (var_1));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 4; i_4 < 21; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_8)) : (var_7))) << ((((-(((/* implicit */int) arr_4 [i_0] [i_0])))) + (2166)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_8)) : (var_7))) << ((((((-(((/* implicit */int) arr_4 [i_0] [i_0])))) + (2166))) + (1419))))));
                            var_17 += ((/* implicit */int) arr_12 [i_4 + 2] [i_4 - 1] [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 4] [(short)12]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_9)) == (67108832U))))) - (((((/* implicit */_Bool) arr_9 [i_4] [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)20] [i_1] [(unsigned short)20] [i_1]))) : (arr_3 [i_0] [i_0] [i_0])))));
                        }
                        for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                        {
                            arr_18 [10LL] [10LL] [i_0] [i_3 - 1] [i_5 - 1] [i_0] = ((/* implicit */unsigned short) (+(var_12)));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 4611686009837453312LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) : (arr_10 [i_0] [i_1 + 2] [i_1] [i_1 - 1])));
                            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (arr_3 [i_1] [i_2] [i_0]) : (((/* implicit */long long int) 2842529410U))))));
                            var_21 -= ((/* implicit */signed char) ((arr_16 [8LL]) - (((/* implicit */long long int) var_9))));
                            var_22 = ((/* implicit */unsigned short) (((((+(var_1))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0)))) + (92)))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_10 [22LL] [(signed char)4] [22LL] [22LL])) != (((((/* implicit */_Bool) var_13)) ? (arr_17 [i_3] [i_3] [2ULL] [(short)12] [2ULL] [i_0] [10LL]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                        var_24 = ((/* implicit */signed char) (+((+(var_10)))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_9 [i_1 - 1] [(unsigned short)16] [i_0] [i_1 - 1]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 + 1] [i_0] [i_6 + 2] [i_1 + 1])) << (((-8487837209461203417LL) + (8487837209461203437LL)))));
                        var_27 = ((/* implicit */long long int) max((var_27), ((+(-8030766134076577911LL)))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_7 + 2] = ((/* implicit */long long int) (((((-(arr_0 [i_7] [i_7 + 3]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52146))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_1]), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) : (3136181307U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)20]))))))));
                        var_28 = ((signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_7 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1]))));
                    }
                    var_29 = ((((/* implicit */_Bool) (+(max((arr_20 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)7))))))) ? (((/* implicit */int) ((unsigned short) max((-2670531583621417233LL), (((/* implicit */long long int) arr_19 [i_0])))))) : (((/* implicit */int) arr_4 [i_0] [i_0])));
                }
            } 
        } 
    } 
}
