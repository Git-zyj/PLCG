/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168623
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((var_4), (arr_1 [i_0])));
        var_16 *= ((/* implicit */unsigned int) var_0);
        arr_3 [0U] [i_0] = ((/* implicit */_Bool) var_1);
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)79)))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) -4363451389742209864LL)) > (11738686611713763545ULL))))));
    var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(var_10)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) / (4124686430582951318ULL))))));
}
