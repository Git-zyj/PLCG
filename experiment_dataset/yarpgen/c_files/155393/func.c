/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155393
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) < (16741201066659274695ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_14 += ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_0 [i_0 - 1]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (max((1048575U), (((/* implicit */unsigned int) (signed char)127)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_15 += ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 1])), (0ULL)));
    }
}
