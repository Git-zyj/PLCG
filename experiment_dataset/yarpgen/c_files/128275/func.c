/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128275
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((var_10) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (2834083832U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) 2181015644U)) : (-1LL))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) 8667836709986744296LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))), (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
        arr_3 [i_0] [i_0] = max((((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (min((arr_1 [i_0]), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2834083853U))))));
        var_14 -= min((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) 2834083832U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11U)))))) : (((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-1LL))))), ((+(9223372036854775789LL))));
        var_15 ^= ((/* implicit */short) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [(signed char)3] [7U] &= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_6 [i_1] [i_1])))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (6382929477694958871ULL)))) ? (((/* implicit */int) max(((short)-31893), ((short)0)))) : (((/* implicit */int) ((unsigned char) var_6)))))));
        var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32767)))) >> (((arr_5 [i_1]) - (4435787590321199817ULL)))))) != (-9LL)));
        var_17 = ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
    }
    var_18 ^= ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */unsigned long long int) (short)26045);
}
