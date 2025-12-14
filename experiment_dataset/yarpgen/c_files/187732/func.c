/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187732
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_5 [0U]) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])), (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1]) ? (arr_3 [14ULL] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (arr_1 [i_0])))));
            var_19 += ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [12ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_2 [i_0] [i_0] [i_0]))))) : ((~(((/* implicit */int) arr_5 [i_1])))));
            var_20 *= ((/* implicit */unsigned int) arr_0 [i_0]);
        }
        var_21 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_2 [i_0] [i_0] [i_0]))))), (((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) << (((min((arr_1 [12LL]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (8141976342249474774ULL)))))));
    }
    var_22 = ((/* implicit */unsigned int) var_6);
    var_23 = ((/* implicit */unsigned short) var_0);
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (min((((/* implicit */unsigned int) max((var_14), (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
}
