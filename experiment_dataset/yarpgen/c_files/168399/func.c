/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168399
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
    var_13 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((unsigned long long int) arr_2 [i_0])) - (((/* implicit */unsigned long long int) 8277855465407558946LL))));
    }
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((((/* implicit */int) var_5)) != (((/* implicit */int) var_0)))) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_4)))))))));
}
