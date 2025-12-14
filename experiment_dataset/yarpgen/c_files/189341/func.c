/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189341
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */_Bool) ((var_5) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11906826564747955911ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((arr_0 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (arr_3 [i_0])))));
                    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0]))))))) : (((unsigned long long int) var_1)))), (min((((/* implicit */unsigned long long int) arr_2 [i_2] [i_1])), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_12 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17447995810368127311ULL)) ? (13802248318306358227ULL) : (18446744073709551615ULL)));
                var_15 = ((/* implicit */unsigned long long int) ((_Bool) ((13802248318306358209ULL) >> (((min((var_9), (((/* implicit */unsigned long long int) var_2)))) - (761443448723934748ULL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) 17447995810368127322ULL);
}
