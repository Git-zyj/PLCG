/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188534
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_16 ^= arr_1 [i_0];
        var_17 = ((/* implicit */signed char) ((long long int) ((short) ((long long int) (short)24799))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_2))))) && (((/* implicit */_Bool) var_4))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), ((+(var_0)))))) ? ((-(((/* implicit */int) ((unsigned short) (short)1825))))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_13))))))))));
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((unsigned short) 855889054))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)1825)) : (((/* implicit */int) (unsigned char)30)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)228)) : (524287)))))))));
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_3))));
}
