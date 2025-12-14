/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123110
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (-(((arr_3 [i_0] [i_1]) - (((/* implicit */int) var_16))))));
                var_19 = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) var_15))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)119)) << (((((/* implicit */int) (signed char)-120)) + (142))))))))));
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_21 &= (!(((/* implicit */_Bool) (((((_Bool)1) && ((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)126))))) : (((/* implicit */int) ((((/* implicit */_Bool) 8738891933129107236LL)) || (((/* implicit */_Bool) (signed char)119)))))))));
            var_22 = ((/* implicit */signed char) (+(max((-8738891933129107229LL), (((/* implicit */long long int) 891719657))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_23 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_7))));
            }
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_15 [i_2] = (+(arr_12 [i_2] [i_2 - 1] [i_2 - 1]));
            arr_16 [i_5] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (var_12) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1]))))) ? (((arr_10 [i_2 + 1] [i_2 + 1]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))))) : (((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1])))))));
        }
        var_25 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))));
    }
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_13)), (var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7)))))));
}
