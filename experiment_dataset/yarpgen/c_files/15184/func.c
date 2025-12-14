/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15184
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = min((((((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) << (((/* implicit */int) ((var_6) > (((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-17)), (((unsigned int) var_6))))));
        arr_3 [i_0] &= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */unsigned long long int) var_0)) : (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)233)))) : (((((/* implicit */_Bool) 8796093020160ULL)) ? (var_8) : (((/* implicit */int) (unsigned char)128))))))));
        var_13 |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        var_14 ^= ((/* implicit */long long int) var_10);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) ? (4241081242U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))))));
        var_15 = ((((arr_6 [7U]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)63)))) << (((((((/* implicit */_Bool) 33554431)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) : (9223372036854775807LL))) - (122LL))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (4294967295U)))) ? (var_7) : ((-(var_2)))))) ? ((+(((((/* implicit */int) (short)-809)) - ((-2147483647 - 1)))))) : (((/* implicit */int) var_3)))))));
}
