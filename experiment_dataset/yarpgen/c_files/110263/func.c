/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110263
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = min((((/* implicit */unsigned int) ((_Bool) ((5887319342221559021ULL) & (((/* implicit */unsigned long long int) -958918373098479766LL)))))), (min((4272838815U), (((/* implicit */unsigned int) (short)10288)))));
        var_14 = (unsigned char)38;
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) var_2)) != (((((/* implicit */int) arr_0 [(_Bool)1])) * (((/* implicit */int) (short)-30530)))))))));
    }
    var_16 = ((/* implicit */short) ((((((/* implicit */int) var_12)) ^ (min((520093696), (((/* implicit */int) (unsigned char)19)))))) + (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246))))) : (((/* implicit */int) var_4))))));
}
