/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157304
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_5))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -827283786380287869LL)), (var_3))))))), (((((((/* implicit */_Bool) arr_2 [i_0] [21])) ? (9223372036854775797LL) : (((/* implicit */long long int) arr_2 [i_0] [1])))) ^ (arr_0 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3848861786U)) ? (((long long int) arr_0 [i_0] [i_0])) : (((long long int) min((((/* implicit */unsigned long long int) 846541893U)), (4ULL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) | (4294967293U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2691))) & (16ULL)))));
        arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) (_Bool)1))));
    }
    var_12 = ((/* implicit */signed char) (~((~(3448425381U)))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned short) ((max((arr_2 [i_2] [i_2]), (((/* implicit */unsigned int) max((arr_3 [i_2]), (((/* implicit */int) (signed char)0))))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)2690)))))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) || (((/* implicit */_Bool) arr_1 [i_2] [i_2]))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_14 = ((/* implicit */long long int) var_7);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_5))))) >= (((((/* implicit */int) (_Bool)1)) >> (16ULL))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (arr_10 [i_3])))) ? (max((((/* implicit */long long int) 12U)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_9)))))))));
        var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_2 [i_3] [i_3])))))) != (((((/* implicit */_Bool) (unsigned char)167)) ? (17925123248607138177ULL) : (((/* implicit */unsigned long long int) 31U))))));
    }
}
