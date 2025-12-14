/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108197
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
    var_14 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_11))))), (((/* implicit */unsigned int) var_6))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [(unsigned short)17] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1])))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37442)) ? (((/* implicit */int) (unsigned short)28094)) : (((/* implicit */int) arr_0 [i_0]))))) + (arr_1 [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)37450), (min(((unsigned short)37442), (((/* implicit */unsigned short) (unsigned char)95))))))))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28112)) ^ (((/* implicit */int) (unsigned char)161))));
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0 - 1] [i_0])))));
        var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_7)), (3538190267339215388ULL))) >= (((/* implicit */unsigned long long int) 3491815064383719461LL))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28080))))) - (min((1655163570736276642ULL), (((/* implicit */unsigned long long int) (-(-376848940))))))));
        arr_6 [4] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))))));
        var_19 += ((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)28084)), (((((/* implicit */_Bool) 2925915025U)) ? (arr_3 [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
        arr_7 [i_1] [0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1090877178U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
        var_20 |= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30174))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (~(var_11)));
}
