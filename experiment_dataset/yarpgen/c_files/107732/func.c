/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107732
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)29232))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) arr_0 [i_1]);
                    var_22 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_0] [i_2]) : (arr_2 [i_0] [i_2])))));
                    var_23 += ((/* implicit */unsigned int) ((min((min((1161033820595126575LL), (9223372036854775789LL))), (((var_14) / (arr_1 [i_2]))))) % (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2])))))));
                    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_1])))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) var_4);
}
