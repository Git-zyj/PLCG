/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183229
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
    var_15 = ((/* implicit */signed char) var_6);
    var_16 = ((/* implicit */unsigned char) (!(var_4)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) - (8589934591ULL))))), ((+(18446744065119617024ULL)))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((arr_2 [i_0]) ? (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [i_0])))) : (((arr_2 [(unsigned char)22]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_12);
        arr_9 [(short)14] |= ((/* implicit */short) arr_7 [i_1]);
    }
    for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] = var_13;
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_2])) : (arr_10 [i_2] [i_2])))))));
        arr_14 [(unsigned short)24] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((8589934591ULL), (((/* implicit */unsigned long long int) 1095861430U)))))))));
        arr_15 [(unsigned char)8] = ((/* implicit */unsigned int) arr_10 [(unsigned char)4] [i_2]);
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)63)))), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1095861430U)));
}
