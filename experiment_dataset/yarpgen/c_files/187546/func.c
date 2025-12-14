/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187546
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
    var_20 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)40026))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15243217022408116267ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)134))))) : (max((((/* implicit */unsigned long long int) var_13)), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)95)), (max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_15))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_19))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_11))));
        arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) ((unsigned int) min((min((((/* implicit */int) (unsigned short)0)), (481949302))), (((/* implicit */int) ((short) arr_5 [i_1]))))));
    }
    var_22 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
}
