/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160582
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), ((-(((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */_Bool) (unsigned char)92);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), ((-(((/* implicit */int) (signed char)70))))))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (short)-13411))))));
                var_16 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_8))), ((~(((/* implicit */int) var_10))))));
            }
        } 
    } 
}
