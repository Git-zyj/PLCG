/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174389
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
        arr_2 [i_0] |= ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) max((16610559610763136116ULL), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)6628)))));
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_12 += ((/* implicit */int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) | (-791178404)))))));
    }
    var_13 = ((/* implicit */unsigned char) (~(var_5)));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) / (var_0))))));
    var_15 = ((/* implicit */unsigned char) 1008806316530991104LL);
}
