/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185965
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (max((7967218521370250483LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 35184372088831LL)) ? (35184372088804LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) : (max((((/* implicit */unsigned long long int) ((668493750) / (((/* implicit */int) (unsigned char)175))))), (max((var_1), (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_2 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) > (((arr_1 [i_0] [i_0]) | (arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) : (((arr_1 [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (arr_5 [i_1])))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_22 = ((/* implicit */signed char) arr_8 [i_1 + 1]);
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((unsigned long long int) 35184372088839LL)) << (((((/* implicit */int) (unsigned char)217)) - (164))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)180)))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (arr_0 [i_2])));
            }
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_18 [i_1 - 2] [i_2] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_1 - 2] [i_1 - 1] [i_1 + 1]));
                arr_19 [(unsigned short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 2] [(unsigned short)8])) ? (arr_15 [i_1] [i_1 - 2] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 - 2] [7LL])))));
            }
            for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) ((arr_15 [i_1 - 2] [i_1] [i_1 - 1] [i_1]) > (((/* implicit */unsigned int) ((arr_8 [i_1 + 2]) ? (1224793063) : (((/* implicit */int) (unsigned short)36862)))))));
                arr_22 [i_1] [i_2] [(unsigned short)10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 2]))) > (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (arr_20 [i_1] [9LL] [i_5] [i_5]))));
            }
        }
    }
    /* LoopSeq 1 */
    for (int i_6 = 3; i_6 < 21; i_6 += 4) 
    {
        arr_27 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned char)174)))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((int) ((long long int) arr_23 [(short)8] [(short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_25 [i_6] [i_6]) - (arr_23 [14LL] [14LL]))) > (arr_23 [i_6 - 3] [(unsigned char)20]))))) : (((((/* implicit */_Bool) ((unsigned int) (signed char)-1))) ? ((-(arr_23 [i_6] [22]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))))))))));
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min(((-(arr_25 [i_6] [i_6 + 2]))), (max((((((/* implicit */_Bool) 16245719174266015468ULL)) ? (arr_23 [i_6] [(unsigned char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [18ULL]))))), (arr_23 [i_6 - 3] [0LL]))))))));
    }
    var_29 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4692536864509647900LL)))), (max((var_4), (((/* implicit */unsigned long long int) (signed char)-116))))))));
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)46760)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8))))), (((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))))));
}
