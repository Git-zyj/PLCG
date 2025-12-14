/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139484
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
    var_17 *= ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0]))))))), (min((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)-2251)))), ((~(var_13)))))));
        var_19 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_3 [(short)12] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 - 1])))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (8992905187787671574ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned char) arr_2 [i_0])))))) : (((((/* implicit */_Bool) arr_1 [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (9453838885921880042ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [(unsigned char)7])), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (((arr_0 [i_0]) << (((/* implicit */int) arr_1 [i_0 + 1])))))) : (arr_0 [i_0]));
    }
    var_20 = ((var_1) >= (((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((var_14) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_9)))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_9)), (var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned int) var_9))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (8992905187787671567ULL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_8)))) ? (max((9453838885921880049ULL), (3522299363864186508ULL))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_2)))))))));
}
