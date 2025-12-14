/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15192
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [16ULL]);
        var_10 = ((/* implicit */int) min((var_10), ((~(((/* implicit */int) (signed char)-1))))));
        var_11 = ((/* implicit */_Bool) max((1152921487426977792LL), (((/* implicit */long long int) min((((signed char) arr_2 [i_0])), (max((((/* implicit */signed char) arr_0 [(short)22])), ((signed char)-43))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)1)) << (((/* implicit */int) (signed char)15)))) < ((+(((/* implicit */int) arr_4 [i_1]))))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_4 [i_1]))))), (((((33554400) >> (((((/* implicit */int) (unsigned short)38323)) - (38312))))) << (((/* implicit */int) arr_2 [i_1]))))));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_2))));
    var_15 &= ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */_Bool) ((var_0) * (((/* implicit */int) var_2))));
    var_17 &= ((/* implicit */signed char) 11370951805537732519ULL);
}
