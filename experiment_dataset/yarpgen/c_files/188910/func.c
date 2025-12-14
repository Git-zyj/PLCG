/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188910
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) arr_2 [i_0]);
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((var_16), (var_6))) : (((/* implicit */long long int) max(((-(((/* implicit */int) var_4)))), ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0]))))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) var_16)) ? (var_18) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12))))) + (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [(short)9] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (980626365U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(signed char)7])) ^ (((/* implicit */int) arr_2 [i_0]))))) : (var_2)))));
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) var_7)))))) ? (980626362U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))))));
        var_23 = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_5 [i_1])), (5054734628483462974ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))))) ? (((((/* implicit */int) ((signed char) 3314340915U))) >> (((((/* implicit */int) arr_5 [i_1])) + (12782))))) : ((~(((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_1]))))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) min((var_0), (var_11)))))));
    var_25 &= ((/* implicit */signed char) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) max((var_19), (var_1)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((signed char) var_13)))))));
}
