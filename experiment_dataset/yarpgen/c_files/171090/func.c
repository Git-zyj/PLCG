/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171090
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
    var_11 = ((/* implicit */_Bool) ((signed char) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [2ULL] = ((/* implicit */long long int) ((short) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (unsigned char i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            {
                var_13 = min((((/* implicit */short) ((unsigned char) ((signed char) (short)(-32767 - 1))))), (var_7));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (unsigned char)5))));
                var_15 = ((/* implicit */unsigned char) arr_7 [(_Bool)1] [i_2]);
            }
        } 
    } 
}
