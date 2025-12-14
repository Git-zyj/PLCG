/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140121
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
    var_15 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)9755))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((-(((((/* implicit */int) var_1)) >> (((/* implicit */int) var_10)))))) | (((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_0])) == (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
            arr_9 [i_0] = ((/* implicit */short) var_4);
        }
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~((~((-(arr_5 [(unsigned short)8] [i_0]))))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */_Bool) arr_4 [(signed char)0] [i_0] [(signed char)0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_7 [i_0])) ^ (((/* implicit */int) var_11)))) : (((((/* implicit */int) arr_0 [i_0] [(short)2])) ^ (((/* implicit */int) var_11))))))) : ((+(8156041133984092041LL)))))));
    }
    var_18 = ((((/* implicit */_Bool) ((((long long int) var_8)) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1584552990)), (210269444U)))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))))))));
}
