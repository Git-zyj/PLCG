/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119458
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
    var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255)))))))));
        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) -8183605489664023634LL))))) ? ((+(((/* implicit */int) arr_0 [1ULL])))) : (((/* implicit */int) arr_0 [i_0])))))));
        var_24 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_25 &= ((/* implicit */short) (-(((/* implicit */int) (short)-32755))));
    var_26 = ((/* implicit */unsigned int) var_3);
}
