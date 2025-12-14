/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147496
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
    var_11 = var_4;
    var_12 -= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)93)), (13428555395541426383ULL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (7338125590743969092LL)))))) ? (((/* implicit */unsigned long long int) max(((~(arr_1 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_5))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (5018188678168125232ULL))));
        arr_3 [i_0] = ((/* implicit */short) var_3);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_14 |= ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)3962)))) + (((/* implicit */int) (_Bool)0))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) 3ULL)) ? (5018188678168125233ULL) : (18446744073709551614ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned long long int) max((3755050171008105778LL), (((/* implicit */long long int) ((signed char) 71415568U))))))));
    }
    var_15 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_0) - (var_3)))) ? (((long long int) var_7)) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_10)))))));
}
