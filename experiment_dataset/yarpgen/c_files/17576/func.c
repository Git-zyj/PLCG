/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17576
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
    var_14 = ((/* implicit */long long int) ((unsigned int) 17341470046105109783ULL));
    var_15 = ((/* implicit */int) ((unsigned char) var_6));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((long long int) arr_1 [i_0] [i_0]);
        arr_4 [6ULL] = ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (arr_2 [i_0]) : (((unsigned long long int) ((unsigned int) (unsigned char)212))));
        arr_5 [i_0] = ((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned char) 16927327297699612767ULL))) - (95))));
    }
    var_16 = ((/* implicit */signed char) var_2);
}
