/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167148
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
        var_15 = ((/* implicit */_Bool) ((3898222871U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_17 ^= ((/* implicit */short) 18041529287911483641ULL);
    }
    var_18 = max((((((((/* implicit */_Bool) (unsigned short)39000)) ? (405214785798067974ULL) : (17545922657393367824ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (18041529287911483664ULL))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (405214785798067974ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))))));
}
