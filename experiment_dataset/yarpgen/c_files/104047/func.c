/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104047
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 12175562753499827858ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18130))) : (3215441605U)));
    var_18 = min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((int) max((var_4), (((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */short) ((_Bool) max((1069547520U), (((/* implicit */unsigned int) arr_1 [1] [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2312128041U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) (signed char)7)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (unsigned char)0))) != (((((/* implicit */_Bool) 3215441605U)) ? (0LL) : (((/* implicit */long long int) -1)))))))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (~((~(arr_6 [i_1])))));
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) -382192335)) <= (10LL))) ? ((~(((/* implicit */int) arr_5 [i_1] [14U])))) : (arr_6 [i_1])))) ? (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_7 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) arr_5 [i_1] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */short) var_12)), ((short)-23025)))) : ((~(((/* implicit */int) (short)-3857))))))) ? ((~(var_4))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(1331553923139487029ULL)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [(_Bool)1] = ((/* implicit */short) ((((max((arr_6 [i_2]), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_2])))))) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_2])) + (34)))));
        var_23 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_2])) ? ((+(1331553923139487029ULL))) : (((unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) max((arr_6 [i_2]), (arr_6 [i_2]))))));
    }
    var_24 = (!(var_11));
}
