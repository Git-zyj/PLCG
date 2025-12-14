/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129442
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
    var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)106)), (var_9))))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)102))))) | (((((/* implicit */_Bool) (signed char)-106)) ? (var_3) : (4929186053050251896ULL)))))));
    var_11 += ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_0 [i_0]))))));
            arr_4 [i_0] &= ((/* implicit */_Bool) arr_3 [i_0]);
        }
        var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))) * (arr_2 [i_0] [(unsigned short)1] [i_0])));
    }
}
