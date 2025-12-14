/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164907
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
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((1969676861U) | (2325290434U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2325290432U) == (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) > (((/* implicit */unsigned int) ((((var_1) >= (var_4))) ? (var_11) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_4)))))))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_14)))) ? (((/* implicit */int) ((-2LL) > (((/* implicit */long long int) 268427264))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2325290432U))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [3U] = ((/* implicit */short) ((int) arr_0 [i_0]));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (-6787731010606256034LL))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_7))))))));
            var_24 *= ((/* implicit */signed char) arr_4 [i_0] [(signed char)10] [i_1 + 1]);
        }
        arr_5 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
    }
}
