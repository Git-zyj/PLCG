/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187170
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
    var_15 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned short) (((-(min((((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_0])), (var_8))))) >> (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_3 [(unsigned short)2] [i_1]))))), (var_5)))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                var_18 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_6))), (((long long int) (~(((/* implicit */int) arr_2 [i_0 + 2] [(unsigned char)6])))))));
                var_19 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1 - 1]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_4)))) : (((/* implicit */int) ((unsigned short) arr_2 [14] [i_1 + 1])))))));
            }
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_9 [7] [7] [(_Bool)1] [i_3] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0] [i_1] [(signed char)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)5] [i_1] [i_3])))))))));
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_2 [i_0] [i_3])))), (((/* implicit */int) arr_1 [i_0 + 2] [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (-(var_5)))) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [(signed char)5])) == (((/* implicit */int) var_13))))))))));
            }
            var_21 = ((/* implicit */unsigned long long int) max((max((((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))), (((/* implicit */long long int) arr_1 [i_0] [(_Bool)1])))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((signed char) (unsigned char)254))), (((unsigned char) var_0)))))));
            var_22 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1 - 1] [(_Bool)1]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
        {
            var_23 -= (+(((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_4 - 1])));
            arr_12 [(unsigned char)4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) + (var_3)));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)10] [i_0] [(unsigned char)1] [i_4 + 1]))) / (var_14))))))));
            var_25 = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]))) : (var_10)));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_4 + 2] [i_0 + 2])) : (((/* implicit */int) var_0))));
        }
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) /* same iter space */
        {
            arr_16 [i_0] [i_5] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((var_14) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))))) > (((((arr_10 [i_5 + 2] [(unsigned short)7]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [6ULL] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (((arr_11 [i_0] [i_5 + 1] [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_5 + 1] [i_0 + 1])) > (((/* implicit */int) max((var_2), (var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)208)) << (((((/* implicit */int) (unsigned char)202)) - (201)))))) : (((((((/* implicit */_Bool) arr_14 [i_5] [6U])) ? (var_14) : (((/* implicit */long long int) arr_13 [2ULL] [i_5 + 1])))) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_5] [i_0 + 2])))))));
            arr_17 [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_5] [i_5]))));
        }
    }
    for (int i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) / (((((/* implicit */unsigned int) ((arr_15 [i_6] [8U]) ? (((/* implicit */int) arr_7 [i_6 + 1] [i_6] [(unsigned char)9] [i_6])) : (var_4)))) * (arr_11 [i_6] [i_6] [i_6]))))))));
        arr_22 [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)8326)))) ? (((/* implicit */int) arr_21 [i_6 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6 - 1])) && (((/* implicit */_Bool) var_4)))))));
    }
    var_29 = ((/* implicit */unsigned int) ((var_14) | (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
