/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110942
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((unsigned long long int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_1 [i_0])))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (signed char)-1)), (arr_1 [i_0])))) != (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)40))))))), (972007896U)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (signed char)-39)) ^ (((/* implicit */int) var_5)))))) && (((((/* implicit */int) max((((/* implicit */signed char) var_15)), ((signed char)55)))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))))));
    }
    var_23 = ((/* implicit */int) (+(-5675181975228040076LL)));
    var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)40))));
}
