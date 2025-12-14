/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16729
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((arr_2 [0U]), (arr_2 [i_0 + 1])));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 + 2]), (((/* implicit */unsigned long long int) max((arr_2 [(_Bool)1]), (((/* implicit */int) (unsigned short)2048)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24029))))) : (((/* implicit */int) (unsigned short)0))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5303619039002674818ULL)) ? (5303619039002674818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (max((var_7), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13143125034706876797ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))));
        var_18 ^= ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_1]));
    }
    var_19 = ((/* implicit */unsigned int) var_4);
    var_20 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1264693744U)))))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
}
