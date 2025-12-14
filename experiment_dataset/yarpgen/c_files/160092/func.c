/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160092
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
    var_13 = ((/* implicit */long long int) var_6);
    var_14 += ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2755438450771021248ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) >= (15691305622938530387ULL)))), ((short)30032)));
    var_15 = ((/* implicit */short) max((var_11), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) == (var_2))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) var_12);
        arr_3 [12LL] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 *= min((15691305622938530380ULL), (min((max((15691305622938530367ULL), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)4])))), (((((/* implicit */_Bool) 15691305622938530367ULL)) ? (15691305622938530367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (+(((var_2) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (2695797917U)))) ? (((/* implicit */int) (short)-32765)) : (((-1095036514) - (((/* implicit */int) arr_5 [i_2]))))))))))));
            var_20 = ((/* implicit */_Bool) (short)30032);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_10 [(unsigned char)21] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (arr_9 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)30011)) || (((/* implicit */_Bool) var_5))))))));
            arr_11 [i_3] [i_3] [i_1] = ((/* implicit */int) 1859870254U);
        }
        var_22 = ((/* implicit */int) max((((max((arr_8 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1])))) - (((/* implicit */unsigned long long int) ((2900168827U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))), (((/* implicit */unsigned long long int) max((max((var_12), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) 2147483644)))))));
    }
    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)79))))) : (max((((/* implicit */unsigned int) (unsigned short)65524)), (var_7)))))));
}
