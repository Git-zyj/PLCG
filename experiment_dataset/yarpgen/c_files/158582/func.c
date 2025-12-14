/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158582
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (0ULL) : (1ULL)))) && (((/* implicit */_Bool) (short)32400))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (-3669346449058826253LL)))) * (0ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((((/* implicit */int) var_3)) <= (913038624))))))) : (var_2)));
    var_14 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 4644825541041246235ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) <= (((arr_1 [i_0]) ^ (arr_1 [i_0])))))) < (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_1)) - (116)))))));
        var_16 += ((((((/* implicit */unsigned long long int) var_2)) / (arr_2 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((2059027222162843122LL) << (((18446744073709551615ULL) - (18446744073709551614ULL)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) <= (arr_1 [i_0 + 1]))))));
    }
}
