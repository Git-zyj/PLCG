/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165420
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
    var_16 = (_Bool)1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)77)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [19ULL]))))) : (((/* implicit */long long int) 3520829002U))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((arr_8 [i_0] [4] [i_2]) - (arr_8 [i_0] [i_1] [i_2])));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_2]))));
                }
                var_19 = ((/* implicit */long long int) min((min(((+(1128650799U))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [(unsigned char)16] [i_1] [i_0])))))))));
            }
        } 
    } 
}
