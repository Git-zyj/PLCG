/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116967
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_14)))) ? (((((/* implicit */_Bool) ((unsigned int) 5877259077180334405ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(unsigned short)0] [i_0 - 1])) - (((/* implicit */int) (unsigned char)89))))) : (max((12569484996529217210ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
        var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (((max((12569484996529217207ULL), (((/* implicit */unsigned long long int) var_16)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((12569484996529217210ULL) >= (var_6)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_5))));
        arr_6 [2] = ((/* implicit */long long int) 5877259077180334405ULL);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) ((_Bool) (short)10));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 1])) : (((((/* implicit */int) (signed char)24)) & (((/* implicit */int) arr_8 [i_2] [i_2])))))))));
    }
}
