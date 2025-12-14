/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147116
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) ? (5480222001881884484ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))));
        var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (2882822074776936988ULL)));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_2 [i_0])), ((-(((((/* implicit */_Bool) 4U)) ? (771351483) : (771351490)))))));
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 2]))));
    }
    var_22 *= ((/* implicit */short) -1LL);
    var_23 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))))) : (((/* implicit */int) ((short) 256274922))))));
}
