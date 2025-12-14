/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144498
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) ((max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) 267087243)))) == (((6678219744176900141ULL) + (11768524329532651474ULL))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned long long int) (unsigned char)162);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((536870880), (arr_0 [i_0])))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)59106)), (var_10))) == (max((((/* implicit */unsigned long long int) 5457346123219686944LL)), (var_11)))))) : ((~(var_0)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) ((arr_7 [i_1 - 3]) ? (((/* implicit */long long int) ((arr_7 [i_1 + 2]) ? (var_0) : (((/* implicit */int) arr_7 [i_1 - 1]))))) : ((+(var_15)))));
        arr_9 [9ULL] [i_1] |= -2147483645;
    }
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (49024776)))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-19813), (((/* implicit */short) (unsigned char)94)))))) + (max((var_9), (((/* implicit */unsigned long long int) var_2)))))));
    var_21 += ((/* implicit */int) var_4);
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_18))));
}
