/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110181
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
    var_18 = var_9;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)-6461));
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((min((var_4), (((/* implicit */long long int) (short)32767)))) == (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))))) ^ (((/* implicit */int) var_2))));
}
