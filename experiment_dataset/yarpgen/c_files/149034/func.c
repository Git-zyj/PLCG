/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149034
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) var_6)), (var_17)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_14)))))))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) | (-5354120115881571508LL))), (((/* implicit */long long int) (short)13675))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) * (((max((((/* implicit */unsigned long long int) var_11)), (var_14))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (unsigned char)243))))) ? (((/* implicit */int) ((arr_3 [i_1]) == (((/* implicit */long long int) 16777216))))) : ((~(((/* implicit */int) var_4))))));
        arr_7 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (arr_3 [i_1])))) ? ((~(var_15))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (var_14))))) < (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) var_13);
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2])) - (((/* implicit */int) arr_5 [(short)13]))))) ? (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) var_11))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_3] [9LL]))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_9 [i_3])))))) ? (((var_7) * (((/* implicit */unsigned long long int) 5354120115881571487LL)))) : (((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3])))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((/* implicit */long long int) ((arr_3 [i_3]) >= (var_12)))), (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */long long int) 2830376952U)) : (arr_3 [i_3]))))))));
    }
    var_22 *= ((/* implicit */short) var_5);
}
