/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17169
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
    var_18 = ((/* implicit */signed char) (~(var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            arr_6 [i_0 + 2] [6LL] &= ((/* implicit */_Bool) max(((short)2776), (((/* implicit */short) (unsigned char)25))));
            arr_7 [i_0] [i_0 - 3] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
        }
        arr_8 [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 1])) : (((/* implicit */int) (unsigned char)234))))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((unsigned char)29), ((unsigned char)147))))));
}
