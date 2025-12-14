/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166734
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
    var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_0)), (var_9))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)111)), ((unsigned char)0)))) : (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((signed char) var_10)))))));
    var_13 = ((/* implicit */unsigned short) (unsigned char)7);
    var_14 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (unsigned char)254)))));
        var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */int) (unsigned char)249)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_17 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))), (((unsigned long long int) arr_2 [i_0]))))));
        var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_0 [(signed char)3])), (((arr_1 [i_0]) & (((/* implicit */int) (unsigned char)0)))))) ^ (((((/* implicit */int) min((arr_2 [i_0]), (arr_2 [(unsigned char)10])))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (arr_1 [i_0 - 1])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [(unsigned char)14])) << ((((~(((/* implicit */int) arr_3 [i_1])))) + (11595)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)129)) - (114))))))));
    }
    var_20 = ((/* implicit */signed char) var_6);
}
