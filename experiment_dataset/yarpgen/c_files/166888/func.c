/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166888
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * ((-(var_17))))))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(var_16))))));
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((-(var_10))) : (var_12)))) ? ((((((-(((/* implicit */int) var_9)))) + (2147483647))) << (((((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (3199081767U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((var_6) + (5461461188362465105LL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) > ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? ((+(arr_0 [i_0]))) : (arr_0 [13LL])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [(unsigned short)13] [(unsigned char)21])))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_2] [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [13LL]))) : (arr_0 [i_3]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(unsigned short)17])))))))) ? (((((/* implicit */_Bool) (-(arr_8 [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2]))) : (arr_7 [i_2 + 1] [i_1] [i_2] [i_3]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_3 [i_0] [(unsigned char)4] [i_1]) == (arr_3 [(signed char)10] [i_3] [i_1])))))))));
                            arr_12 [i_4] [i_1] [i_4] [i_3] [(short)13] [i_1] [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [(signed char)18] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1])) : (arr_0 [i_0]))) >> (((arr_7 [i_3] [i_1] [i_2 + 3] [i_3]) - (8959230812894735426ULL)))))) ? (((/* implicit */unsigned long long int) arr_3 [4LL] [i_3] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_4] [i_1])) : (arr_6 [i_3] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_0 - 1] [i_0 + 1] [i_0] [(unsigned char)10] [i_4])) ? (arr_9 [i_0] [(unsigned short)20] [i_2] [i_0]) : (arr_0 [i_0])))))));
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(signed char)0] [17LL] [17U])))))));
                            var_25 = ((/* implicit */short) arr_5 [i_0 - 1] [i_0] [i_0] [3LL]);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_0] [(short)8] [16ULL] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0 + 3]))) : (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_1] [i_0] [i_0 - 1] [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_6 [(unsigned char)12] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [10ULL] [i_1])))))))) : ((-(((((/* implicit */_Bool) arr_6 [i_0] [8LL])) ? (arr_0 [i_0]) : (arr_6 [i_1] [i_1 - 2]))))))))));
            arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_9 [(unsigned short)11] [(unsigned short)11] [i_0] [(unsigned short)11])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (-(arr_8 [4LL] [i_1])))) : (((((/* implicit */unsigned long long int) arr_8 [(unsigned short)11] [i_0 + 1])) / (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)5])))));
        }
    }
    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_5] [i_5] [i_5])))))))) * (((/* implicit */int) arr_1 [i_5]))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_10 [11ULL] [14U])) ? (((/* implicit */unsigned long long int) arr_3 [i_5 + 2] [i_5] [i_5])) : (arr_6 [i_5 - 1] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) : (arr_8 [i_5] [i_5 + 1])))))))) : (arr_7 [1ULL] [i_5 + 2] [i_5] [i_5]))))));
        var_29 = ((/* implicit */long long int) arr_9 [i_5] [21U] [i_5] [i_5 + 3]);
    }
}
