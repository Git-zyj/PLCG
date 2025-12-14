/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179632
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
    var_14 = ((/* implicit */signed char) -3270091756113097130LL);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)19] [(signed char)17]))) : (var_0))) ^ (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 2]))))) ? ((+(144115188075855871LL))) : (((/* implicit */long long int) (~(((unsigned int) var_10)))))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0] [i_0 - 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2654317975U)))))))));
        var_17 *= ((/* implicit */unsigned int) ((_Bool) ((long long int) arr_3 [i_0 - 1])));
    }
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) ((_Bool) (short)-32736))) : ((-(((/* implicit */int) (_Bool)0)))))) ^ ((+(var_6)))));
}
