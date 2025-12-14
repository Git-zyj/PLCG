/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146998
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
    var_19 *= ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 *= ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)65)) : (255))) % (((/* implicit */int) (unsigned char)96))));
        var_21 = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_0]));
    }
    var_22 -= ((/* implicit */unsigned char) min((0), (((/* implicit */int) (_Bool)0))));
}
