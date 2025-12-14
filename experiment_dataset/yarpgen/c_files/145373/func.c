/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145373
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8340298195821356405LL)) ? (((/* implicit */int) (unsigned short)32086)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)42894)))))));
    var_12 = ((unsigned short) (unsigned short)33440);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((_Bool) (~(1233364062100128773LL)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) var_0))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 2])))) - (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 2])))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1]))) > (-5575622662084788970LL)));
        arr_4 [i_0 - 2] = ((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 + 1]);
    }
}
