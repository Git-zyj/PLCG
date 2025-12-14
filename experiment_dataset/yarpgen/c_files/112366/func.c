/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112366
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) var_10);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]));
        arr_5 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)34324))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1]))) * (var_8)));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1]))));
    }
    var_18 *= ((/* implicit */unsigned int) (~(1235331232)));
    var_19 = ((/* implicit */_Bool) var_6);
}
