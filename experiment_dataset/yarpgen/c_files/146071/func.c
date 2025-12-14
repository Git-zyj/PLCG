/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146071
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+((((+(((/* implicit */int) arr_1 [i_0] [i_0])))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)9205)) : (var_4)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1973940814)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240))) : (3723961562U)))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_0)));
    }
    for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (unsigned char)240);
        var_20 -= ((/* implicit */short) min((arr_4 [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) ((short) arr_3 [i_1 + 1])))));
    }
    var_21 |= ((/* implicit */unsigned int) var_13);
}
