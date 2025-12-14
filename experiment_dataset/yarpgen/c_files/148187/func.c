/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148187
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
    var_18 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_17)))), (((/* implicit */int) max((var_12), (((/* implicit */signed char) (!((_Bool)1)))))))));
    var_19 = ((/* implicit */_Bool) 16571381099981972337ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0] [i_0]));
        var_21 = (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])));
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_1])))));
        var_23 = (+(14163088813046361331ULL));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_2]), (arr_4 [i_2]))))) : ((-((-(arr_2 [i_2] [i_2])))))));
        arr_9 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_2 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (arr_2 [i_2] [i_2])));
        var_24 = ((/* implicit */_Bool) min((arr_2 [i_2] [i_2]), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_7 [i_2])))))))));
    }
}
