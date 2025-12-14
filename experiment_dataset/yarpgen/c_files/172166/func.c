/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172166
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) >= (5316315653728473002LL)))) < ((-(((/* implicit */int) var_14)))))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (9007199254478848ULL) : (var_4)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)10053)))))));
            arr_4 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_2 [i_1 - 3]);
            var_18 = 12084847253699110093ULL;
            arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10066)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23644))));
        }
    }
    var_19 = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */int) (unsigned short)31223)) << (((922663239660504378ULL) - (922663239660504364ULL))))))));
}
