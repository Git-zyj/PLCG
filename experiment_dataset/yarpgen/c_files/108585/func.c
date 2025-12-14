/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108585
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = 1095769845U;
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0]))), (((0ULL) >> (((/* implicit */int) (signed char)51))))));
    }
    var_12 = ((/* implicit */unsigned int) (unsigned char)78);
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */unsigned int) (_Bool)0);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_2)))), (var_0)))) ? (max((max((((/* implicit */unsigned long long int) var_4)), (var_9))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (-3239524491659475264LL)))))) : (((((/* implicit */unsigned long long int) 8191)) | (min((8796093022207ULL), (((/* implicit */unsigned long long int) var_7))))))));
}
