/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110679
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
    var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_2)))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_3)))), (((0ULL) % (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_5))))) : (var_2)));
    var_18 = ((/* implicit */signed char) max(((-(((((var_8) + (2147483647))) << (0U))))), ((~(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned char) var_2)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_14))));
        arr_6 [i_0] = ((/* implicit */long long int) (-((+(1560446587U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        arr_10 [16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (signed char)1))))) ? (((/* implicit */int) arr_8 [9ULL] [9ULL])) : (((((/* implicit */_Bool) 5916170520024065550LL)) ? (((/* implicit */int) arr_7 [i_1])) : (arr_9 [i_1])))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) (!(var_5)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(var_3))), (((/* implicit */int) var_7))))) ? ((-((-(arr_1 [i_2] [10ULL]))))) : (((/* implicit */int) (_Bool)1))));
        arr_16 [4U] [21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (634095262) : (((/* implicit */int) ((667978263) != (((/* implicit */int) (unsigned char)203)))))))) ? (-40829728) : (min(((+(((/* implicit */int) (signed char)-65)))), (max((arr_9 [i_2]), (arr_9 [i_2])))))));
        var_20 = ((/* implicit */unsigned long long int) (unsigned char)246);
        arr_17 [i_2] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3399898831641929593ULL)) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2]))))))) ? (arr_1 [i_2] [4]) : (((/* implicit */int) arr_8 [i_2] [i_2]))));
    }
}
