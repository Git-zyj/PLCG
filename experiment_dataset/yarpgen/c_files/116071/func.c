/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116071
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4095))))) : ((-(((/* implicit */int) (unsigned char)236))))))));
                var_16 = ((/* implicit */short) ((signed char) ((unsigned short) (+(18446744073709551615ULL)))));
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_14))))))) + (var_9)));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) var_5);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), ((~(18446744073709551615ULL)))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */unsigned long long int) 9188052919905977816LL)), (9223372036854775807ULL))))) : (((((/* implicit */_Bool) ((4611686018427387903ULL) >> (((4611686018427387917ULL) - (4611686018427387875ULL)))))) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))))));
}
