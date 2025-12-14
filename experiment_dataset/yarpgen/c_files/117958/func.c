/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117958
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
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1 + 3]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((arr_0 [i_1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned short)30259)) : (((/* implicit */int) (unsigned short)30259))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35276)) ? (var_5) : (((/* implicit */int) var_7))))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 3] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) 7400851333357736944ULL);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (-4545173879868400136LL) : (((/* implicit */long long int) var_5))));
}
