/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103870
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13680659432480010681ULL)) && (((/* implicit */_Bool) (signed char)-92))))) : ((-(((/* implicit */int) (short)24343))))))) ? (min((13436379942848085303ULL), (((/* implicit */unsigned long long int) (short)18824)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_1])))))));
                var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))))));
                var_17 ^= (short)8189;
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (~(1046835247853812745ULL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-92)) : (arr_7 [i_2])))))))));
        var_19 = ((/* implicit */short) var_7);
    }
    var_20 = ((/* implicit */int) var_9);
    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_1)))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (var_10))))))));
}
