/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106875
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [(unsigned short)16]))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)103)))))));
                    var_22 -= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) 688634965)))));
                    var_23 *= ((/* implicit */int) arr_7 [12LL] [12LL] [i_0 - 1] [12LL]);
                }
            } 
        } 
        arr_8 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1])) - (((((/* implicit */int) arr_4 [i_0] [i_0])) - (((/* implicit */int) (unsigned char)113))))));
        arr_9 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    var_24 += ((/* implicit */int) var_15);
    var_25 -= ((/* implicit */_Bool) var_18);
}
