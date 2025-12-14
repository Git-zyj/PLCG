/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130874
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) | ((-(((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_4)) - (48663)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) min(((signed char)-47), ((signed char)-108)))), (var_3)));
    var_17 += ((/* implicit */short) (((_Bool)0) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)0)))) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-4489))));
}
