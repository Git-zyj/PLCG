/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181111
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
    var_13 += ((/* implicit */unsigned long long int) ((int) ((-4950581666653228697LL) | (min((4950581666653228716LL), (4950581666653228708LL))))));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) ((short) var_5))) + (31)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (((-(arr_1 [(unsigned short)22]))) >= (((/* implicit */int) max(((short)4822), ((short)-28851)))))))));
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
        arr_3 [i_0] = ((var_12) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (short)3))))))));
    }
}
