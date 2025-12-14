/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173383
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
    var_10 = ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_11 = ((min((((unsigned int) (_Bool)1)), (arr_1 [i_0] [i_0]))) >> (((var_6) - (3456795735633538862LL))));
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)47677)), (var_1)))))) ? (((/* implicit */long long int) max(((-(arr_1 [3LL] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */long long int) (unsigned short)47661)), (((arr_2 [i_0] [i_0]) / (((/* implicit */long long int) arr_0 [(_Bool)1]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [11ULL] [6ULL]))) / (arr_2 [i_0 + 2] [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47677)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_1 [i_0] [i_0 + 2]))))))))));
        arr_4 [i_0 + 2] = ((/* implicit */unsigned int) (_Bool)1);
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((var_8) >> (((/* implicit */int) (_Bool)1)))))) ? (((arr_0 [i_0 + 1]) | (arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0])))));
    }
}
