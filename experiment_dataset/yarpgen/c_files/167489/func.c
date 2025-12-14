/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167489
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0] [7LL]))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)15);
        var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 3333719993195720630ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6007399345865917994ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4)))))));
    }
    var_14 = ((/* implicit */unsigned long long int) var_9);
}
