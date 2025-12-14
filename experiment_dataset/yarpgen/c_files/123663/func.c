/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123663
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
    var_10 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)63434))))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (669017228U)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0 - 1])), (var_5)))) ? (((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0 - 1])))) : ((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((9457320104754284120ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) var_1)))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (!(((/* implicit */_Bool) 9072980444520875228LL)));
        var_11 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-27)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)42)) - (22)))))) ? (((((/* implicit */_Bool) 1906274099)) ? (1752570856595130740LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (short)28818)))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (arr_6 [i_1])))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (arr_6 [i_1]))) : (((var_9) ^ (arr_6 [i_1])))));
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) var_2));
        arr_11 [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((arr_8 [i_2]), (arr_8 [i_2]))));
        arr_12 [i_2] |= ((((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? (arr_6 [i_2]) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) arr_8 [i_2]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (((arr_6 [i_2]) * (((/* implicit */unsigned long long int) -9072980444520875228LL)))))))));
    }
}
