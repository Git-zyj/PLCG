/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1696
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_8))));
    var_17 -= (unsigned short)65535;
    var_18 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65535)))) : (((/* implicit */int) (unsigned char)43)))) >> (((5249868727279595780LL) - (5249868727279595761LL)))));
}
