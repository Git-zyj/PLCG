/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12326
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)110)), (((unsigned char) 2198982830U))));
    var_16 += ((/* implicit */unsigned char) min((max(((unsigned short)65535), ((unsigned short)65519))), (((/* implicit */unsigned short) var_2))));
}
