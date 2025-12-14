/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129734
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = var_4;
        var_16 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((arr_1 [(_Bool)0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)12])))))) : (((((/* implicit */_Bool) var_3)) ? (4064780178U) : (886821180U))))))))));
        var_18 = ((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)508))));
    }
    var_19 = ((/* implicit */long long int) var_8);
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) < (var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)-101)) + (108))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)24576)), (var_0)))) || (((/* implicit */_Bool) ((long long int) (unsigned short)40960))))) && (var_1)));
}
