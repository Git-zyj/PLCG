/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129306
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (signed char)0))), (min((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_3))))))));
    var_16 = ((/* implicit */signed char) (+(min((var_14), (max((var_6), (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) (unsigned short)60009)) : (((/* implicit */int) (signed char)-2)));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((short)1060), ((short)1061))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) + (3619900451U)));
        var_19 = ((/* implicit */unsigned short) (unsigned char)239);
    }
}
