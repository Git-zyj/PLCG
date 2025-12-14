/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182419
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
    var_11 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) (short)-1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) (-(-3119004690388960416LL)));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) : (var_5)))))) <= (arr_1 [i_1])));
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)23))))) ? (max((((/* implicit */long long int) arr_3 [i_1] [i_1 + 1])), (3119004690388960415LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 461100331U)) == ((~(18446744073709551615ULL)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_1)), ((+(((((/* implicit */unsigned long long int) 67108863U)) * (18446744073709551615ULL)))))));
}
