/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187758
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
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0])), (arr_2 [3LL])))));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */_Bool) (-(arr_2 [i_0 - 3])));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                arr_10 [7LL] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_9 [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) arr_4 [i_1 - 1]))))), ((+(((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) 1152921503533105152LL))))))));
                var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_9 [i_1 + 1] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (9223372036854775807LL)))) ? (min((14932990805277573239ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_8) : (((/* implicit */unsigned long long int) var_5))));
}
