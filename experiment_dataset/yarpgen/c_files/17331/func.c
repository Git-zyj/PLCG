/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17331
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
        var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_4))))))));
        arr_2 [(_Bool)1] [i_0 - 1] &= ((/* implicit */signed char) ((long long int) 2147352576));
        arr_3 [2] [2] = ((/* implicit */int) arr_1 [i_0] [i_0 + 2]);
    }
    var_19 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (+(1244802491))))) > (var_6)));
    var_20 = 16127501998482726220ULL;
}
