/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160507
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1368264389217299123LL)) ? (-1368264389217299103LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */signed char) ((1368264389217299122LL) <= (((/* implicit */long long int) var_10)))))))) || (((/* implicit */_Bool) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))));
        var_20 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)1984)) ? (-1965610758) : (-1965610758))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) arr_0 [(_Bool)1])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)11])) ? (((((/* implicit */int) arr_6 [(unsigned short)9])) + ((~(((/* implicit */int) var_16)))))) : (min((1965610738), (2147483625))))))));
        var_23 = ((/* implicit */signed char) (~(var_5)));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_5 [i_1]))));
        arr_7 [(_Bool)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 5790548624389482337LL)) ? (1368264389217299112LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))));
        var_25 = ((/* implicit */unsigned char) arr_5 [i_1]);
    }
    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) var_6)))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_17)))))))))));
}
