/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115418
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_3)) + (var_5)))), (var_12))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_9)) * (((((/* implicit */_Bool) var_11)) ? (4006856130U) : (((/* implicit */unsigned int) var_6)))))))));
    var_14 = ((/* implicit */int) ((unsigned short) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (short)-20796))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (((((/* implicit */_Bool) -1LL)) ? (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0])), (var_5))))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (((unsigned int) arr_5 [i_1])))) == (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned int) ((max((arr_4 [i_1] [i_1]), (arr_4 [20U] [i_1]))) ^ (min((((/* implicit */int) max((arr_5 [i_1]), (arr_5 [11])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_1])) : (var_9)))))));
    }
    for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) var_7))), (max((arr_8 [i_2 - 3]), (arr_8 [i_2 + 2])))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) -9223372036854775807LL);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_2 [i_2 + 1])), (arr_8 [i_2 - 2]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) var_5)) : (arr_7 [i_2])))) : (9223372036854775800LL))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((288111166U), (((/* implicit */unsigned int) (short)20796)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((signed char) (short)20795))), (min((var_7), ((short)5533))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 3]))) - (((((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])) * (arr_8 [i_2]))))))))));
    }
}
