/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102125
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)63), (((/* implicit */unsigned char) (_Bool)1)))))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned int) (unsigned char)192);
        arr_4 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 3]))))) + (min((min((12399016711538505105ULL), (((/* implicit */unsigned long long int) (unsigned char)63)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_1 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 2] [i_0 - 3]);
    }
    var_14 = ((/* implicit */unsigned int) var_9);
}
