/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114298
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    var_14 = ((/* implicit */signed char) var_4);
    var_15 = ((/* implicit */unsigned short) ((long long int) ((short) var_11)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)251))) ? ((~(arr_2 [i_0]))) : (min((arr_2 [i_0]), (((/* implicit */int) min((((/* implicit */short) (unsigned char)251)), ((short)32571))))))));
        var_16 = ((/* implicit */signed char) (unsigned char)251);
    }
}
