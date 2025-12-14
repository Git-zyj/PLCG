/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139325
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((+(-1029582097983235037LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned int) ((((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((((/* implicit */int) (signed char)-48)) + (56))))) >> ((((~(((/* implicit */int) (signed char)-37)))) - (32)))));
        var_12 += ((/* implicit */unsigned short) var_4);
    }
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_1))));
}
