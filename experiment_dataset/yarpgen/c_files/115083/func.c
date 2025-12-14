/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115083
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
    var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_13)), (var_14))), (var_10)));
    var_19 = var_11;
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((max((var_6), (var_17))), (min(((short)1), (((/* implicit */short) (signed char)-22))))))), (max((((/* implicit */unsigned long long int) var_17)), (min((((/* implicit */unsigned long long int) var_6)), (var_12)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [(short)16] [i_0] = ((/* implicit */short) arr_1 [10ULL] [10ULL]);
        var_21 = max((min((max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))), (max((arr_1 [i_0] [i_0]), (max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [(short)13] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_22 = ((/* implicit */signed char) arr_6 [0ULL]);
        var_23 = ((/* implicit */unsigned short) max((var_23), (min((arr_4 [(short)2]), (max((min((arr_5 [i_1]), (arr_4 [(unsigned short)14]))), (((/* implicit */unsigned short) max((arr_6 [i_1]), (arr_6 [i_1]))))))))));
        var_24 *= ((/* implicit */unsigned long long int) min((min((min((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_4 [(short)16]), ((unsigned short)0))))), (max((max((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_5 [i_1]), (((/* implicit */unsigned short) arr_6 [i_1]))))))));
        arr_7 [i_1] [i_1] = min((max((arr_4 [i_1]), (max((arr_5 [i_1]), (arr_4 [i_1]))))), (max((min((((/* implicit */unsigned short) arr_6 [i_1])), (arr_4 [i_1]))), (min((arr_4 [i_1]), (arr_5 [i_1]))))));
    }
}
