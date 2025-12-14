/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183705
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) (unsigned short)55832)) : (((/* implicit */int) max((((var_0) == (var_4))), (((_Bool) var_0)))))));
    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (min((610588945U), (((/* implicit */unsigned int) (signed char)16)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (var_1)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) max((3262177199756789734ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))), (var_11)));
        arr_5 [i_0] |= ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) ((0LL) == (-6510136088971329524LL))))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_5)), (arr_2 [i_0] [i_0])))) : (2697965427378251087LL));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) 15377594041527092413ULL)) && (((/* implicit */_Bool) 6510136088971329524LL)))), (((((/* implicit */_Bool) -3208333634241238861LL)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_1 + 2]), (arr_7 [i_1 - 1]))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_1])))) : (((((/* implicit */_Bool) 501568479)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (arr_6 [i_1])))))));
    }
}
