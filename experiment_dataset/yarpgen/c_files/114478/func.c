/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114478
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
    var_19 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) var_13)) + (((/* implicit */int) var_2)))) > (((/* implicit */int) ((4294967295U) > (4294967287U))))))) >= (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_7))) != (((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)16))))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_1))))) != (((-89653031406810094LL) / (((/* implicit */long long int) var_1))))))) >= (((((((/* implicit */int) var_13)) * (((/* implicit */int) var_0)))) * (((/* implicit */int) ((((/* implicit */int) (signed char)34)) <= (((/* implicit */int) (signed char)-34)))))))));
    var_21 *= ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (signed char)-49)) * (((/* implicit */int) (signed char)34)))) == (((((/* implicit */int) (signed char)-34)) * (((/* implicit */int) (signed char)98))))))) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */int) (signed char)34)) > (((/* implicit */int) (unsigned char)187))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_0 [i_0] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (signed char)-35))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) <= (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) * (((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) var_18)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) + (((/* implicit */int) var_0))))) && (((((/* implicit */int) arr_1 [10LL] [i_0])) <= (((/* implicit */int) var_2))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-30018)))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) > (arr_0 [i_0 + 1] [i_0 + 1])))));
    }
}
