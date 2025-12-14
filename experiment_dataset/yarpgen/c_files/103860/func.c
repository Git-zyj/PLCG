/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103860
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
    var_10 = min((var_3), (((/* implicit */unsigned short) var_9)));
    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_1)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (signed char)91))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (signed char)91))))), (var_1)))) ? (((/* implicit */int) (signed char)-91)) : (((((((/* implicit */_Bool) -511114597)) ? (418179521) : (511114581))) | (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)217)))))))))));
}
