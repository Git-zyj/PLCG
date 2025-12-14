/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155970
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
    for (int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)50150)) << (((/* implicit */int) arr_0 [i_0 + 1])))) != (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */unsigned int) (unsigned short)11111);
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) max(((signed char)-118), (arr_1 [1LL] [i_0])))) ? (((/* implicit */int) max((var_17), ((short)30)))) : (((/* implicit */int) min(((short)-5211), ((short)-5211)))))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
    }
    var_21 = ((/* implicit */signed char) var_17);
    var_22 |= ((/* implicit */short) 532676608);
}
