/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146418
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) < (((unsigned int) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (179143802U))) == (arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (308869933U) : (min((arr_1 [i_0]), (308869932U)))))));
        var_12 = ((/* implicit */int) ((max((101022587U), ((-(4194303U))))) >> (((((((/* implicit */_Bool) (short)32738)) ? (min((((/* implicit */unsigned long long int) 3986097359U)), (4143346610226102683ULL))) : (((/* implicit */unsigned long long int) 308869932U)))) - (3986097356ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((((arr_4 [i_1] [i_1]) == (arr_4 [i_1] [i_1]))) ? (((((/* implicit */unsigned long long int) arr_5 [(unsigned char)16])) - (arr_4 [(unsigned char)11] [(unsigned char)11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [1LL])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_1])))));
        var_13 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) 308869933U)) | (4577134829251915628ULL)))));
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)132)) ^ (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_9)) - (149))))))))));
}
