/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149910
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) arr_3 [i_0]);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(6234946327964392564ULL)))) ? (((var_12) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) (unsigned char)140))))))));
    }
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)14)))))));
    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) | ((+((+(var_13)))))));
}
