/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155656
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((signed char) var_16)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32230)) ? (var_9) : (var_9)))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1 - 1]))) - (var_9))), ((+(((var_8) - (5206438938829871142ULL)))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
                    arr_12 [i_0] [i_0] = ((/* implicit */signed char) var_6);
                    var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
                    var_22 = ((/* implicit */unsigned short) 12099646588453639690ULL);
                    var_23 *= ((/* implicit */short) 2169894182340950165ULL);
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) max((max((((unsigned long long int) 18446744073709551615ULL)), (var_17))), ((~(max((11204962003137206153ULL), (var_1)))))));
    var_25 = var_15;
    var_26 = ((/* implicit */unsigned short) var_6);
}
