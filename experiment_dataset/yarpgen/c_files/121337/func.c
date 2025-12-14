/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121337
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33811)) + (((/* implicit */int) (short)6907))))) ? (((/* implicit */int) (short)-21525)) : ((-(-1976251026)))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) 1902356951U);
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 2392610344U)) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (unsigned char)84)))) + (2147483647))) >> ((+(24ULL)))));
    }
    var_13 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)172))));
}
