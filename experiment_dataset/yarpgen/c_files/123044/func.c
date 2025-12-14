/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123044
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
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max(((signed char)39), ((signed char)-105)))) ? (max((-491315941), (((/* implicit */int) var_9)))) : (((((/* implicit */int) (signed char)63)) - (-491315939))))), (max((max((491315944), (((/* implicit */int) (_Bool)1)))), (max((491315924), (((/* implicit */int) (signed char)-47))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)2]))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((491315945) / (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)32)) ^ (((/* implicit */int) arr_1 [(_Bool)1])))) < (((-684381671) ^ (((/* implicit */int) (unsigned short)14912))))))))))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (signed char)-20))))), ((+(((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) << (((((/* implicit */int) (unsigned char)40)) - (40)))));
        var_21 = ((/* implicit */unsigned long long int) ((-1910206048) >= (((/* implicit */int) arr_1 [(unsigned char)12]))));
    }
}
