/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10130
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
    var_16 = ((/* implicit */short) (((_Bool)1) ? (var_12) : (221346595U)));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 2337356521U);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((unsigned long long int) var_6)))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) var_5));
    }
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 - 2])) ? (arr_1 [i_1 - 1]) : (((arr_1 [0U]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))), (arr_1 [i_1])))));
        arr_6 [i_1] = max((((_Bool) (_Bool)1)), (((min((((/* implicit */unsigned int) arr_0 [(short)2] [(_Bool)1])), (660990117U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_1])), (arr_3 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 1]))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 3633977178U))) << (((((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_3 [i_1 - 2] [12U])))) + (26027))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_0 [i_2] [i_2])) << (((/* implicit */int) var_0))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (short)16437)) : (((/* implicit */int) ((short) var_3)))));
        var_22 += ((/* implicit */short) ((((/* implicit */int) var_7)) <= (((((/* implicit */_Bool) (short)16435)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (max((288230376151187456ULL), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_2]), (((/* implicit */short) (_Bool)1)))))) : (var_4)));
        var_23 = ((/* implicit */unsigned int) arr_8 [i_2]);
    }
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_2)))))));
}
