/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147946
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 7313309779796706729LL)) ? (1785843049U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])))))) - (((((/* implicit */_Bool) (unsigned char)111)) ? (((((/* implicit */_Bool) (unsigned short)33926)) ? (var_9) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (5072063240123118617LL)))))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((unsigned long long int) 904633656)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [18ULL])) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) arr_1 [i_1] [(signed char)1])))) : (var_10))))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_0] [i_0])) & (5496681263984865167LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4287803357969927168LL)) ? (1785843069U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33920)))))) : (((((/* implicit */_Bool) (unsigned short)55213)) ? (((/* implicit */long long int) -1761780612)) : (var_7))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3500882931U))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40921))))) ? (var_0) : (var_9)));
    var_17 = ((/* implicit */unsigned short) var_4);
}
