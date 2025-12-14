/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131368
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_0)))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) var_15)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max(((unsigned char)250), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])))))));
        arr_5 [i_0] = ((/* implicit */short) 1603404309U);
        var_20 = ((((/* implicit */int) arr_3 [i_0])) != ((-(((/* implicit */int) arr_0 [i_0 - 1] [i_0])))));
    }
}
