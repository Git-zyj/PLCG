/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156820
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
    var_11 = ((/* implicit */_Bool) (-(min((var_7), (((/* implicit */long long int) ((unsigned int) 4269065250735972290LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0 - 1]));
        arr_4 [i_0] = ((((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(((/* implicit */int) arr_2 [i_0 - 4])))));
    }
}
