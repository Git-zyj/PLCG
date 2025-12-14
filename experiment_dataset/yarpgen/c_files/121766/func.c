/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121766
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1])))) ? (((/* implicit */int) ((signed char) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)6545)) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_0 [i_0 - 1] [(signed char)5])))), (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))) / (((140737488355326ULL) | (12637686274290028070ULL)))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_2 [i_1])) ? (12637686274290028070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6545))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_1])) | (((/* implicit */int) arr_0 [(_Bool)1] [i_1])))) | (((((/* implicit */int) (short)32767)) & (((/* implicit */int) (_Bool)1)))))))));
                arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6545))) * (0U)))) < (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (14533780641109995276ULL))))))) - (arr_6 [13U] [14U])));
            }
        } 
    } 
}
