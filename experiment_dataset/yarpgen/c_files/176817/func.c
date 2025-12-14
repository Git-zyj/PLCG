/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176817
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
    var_16 = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) var_12)))), (var_3))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))))))));
                    var_18 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_0 [i_1] [i_0 - 1]))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min(((+(18446744073709551596ULL))), (((/* implicit */unsigned long long int) (+(((((-1LL) + (9223372036854775807LL))) >> (((18446744073709551596ULL) - (18446744073709551572ULL)))))))))))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((15LL), (((/* implicit */long long int) var_12))))) ^ (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2] [i_2])) ? (arr_4 [(short)7] [(short)7] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [i_2])))))));
                    var_21 = ((/* implicit */short) ((unsigned char) arr_2 [i_1] [i_0 - 2]));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((_Bool) 0ULL)))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (unsigned char)9)))))) ^ ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (24LL)))))));
    var_24 = ((/* implicit */unsigned char) var_11);
}
