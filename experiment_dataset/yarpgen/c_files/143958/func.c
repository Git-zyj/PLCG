/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143958
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? ((+(var_7))) : (((((/* implicit */_Bool) 10389487935718893430ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        var_17 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) var_12);
        var_19 *= ((/* implicit */unsigned char) var_8);
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) var_14);
        var_21 = ((/* implicit */short) ((_Bool) -2181200336890308137LL));
    }
}
