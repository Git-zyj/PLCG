/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159958
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32627))) + (arr_0 [(signed char)8]))))))));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) ((min((var_3), (var_13))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (var_8)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (((~(arr_4 [i_1]))) & (((/* implicit */unsigned long long int) ((unsigned int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_5 [i_1]) != (((/* implicit */long long int) var_13)))))))) : (min((((/* implicit */unsigned int) arr_6 [i_1])), (((unsigned int) var_12))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned short) min((((long long int) min((((/* implicit */long long int) (short)-31325)), (arr_5 [i_1])))), (((/* implicit */long long int) max(((~(((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_14) : (var_2))))))));
        arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) 2774705629500949592ULL)) ? (min((((/* implicit */unsigned long long int) ((14343987115696302949ULL) != (((/* implicit */unsigned long long int) var_0))))), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))));
    }
    var_18 = ((/* implicit */unsigned short) ((int) (-(-145126312))));
    var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -25192643)), (65535ULL)))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (min((var_1), (((/* implicit */long long int) var_11))))))));
}
