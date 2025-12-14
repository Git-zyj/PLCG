/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188525
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
    var_16 = ((/* implicit */signed char) var_3);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8142264724735737716ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2089411461U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)36))))) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (signed char)-59))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_9);
        var_19 = ((/* implicit */_Bool) min(((+(1048574U))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? ((+(((/* implicit */int) arr_4 [i_1 - 3] [i_0])))) : (((/* implicit */int) ((signed char) arr_4 [i_1 - 3] [i_0])))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        }
    }
}
