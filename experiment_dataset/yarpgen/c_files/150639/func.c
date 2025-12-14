/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150639
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) arr_6 [i_0 - 2] [i_0 - 2]);
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1389653828015359862LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))))));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 + 1])) < (var_3)));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_10 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_9))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_3])) || (((/* implicit */_Bool) var_11))));
        }
    }
    var_19 = ((/* implicit */short) max((1049390187893166885ULL), (((/* implicit */unsigned long long int) var_3))));
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
