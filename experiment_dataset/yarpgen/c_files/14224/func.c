/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14224
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) (~(min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((unsigned int) arr_0 [i_0])), (min((((/* implicit */unsigned int) (short)-21166)), (var_2)))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6236370279503075025LL))))), (max((67108848ULL), (((/* implicit */unsigned long long int) 1653678344U))))))));
    }
    for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            var_11 = ((/* implicit */int) arr_5 [i_1]);
            var_12 = ((/* implicit */short) min((var_12), (arr_4 [i_2] [i_2])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_1] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2])) && ((_Bool)0)));
            arr_14 [i_3] [i_1] = ((/* implicit */short) 6236370279503075031LL);
        }
        var_13 += max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 3] [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (var_2)))) : (min((11193374598515483021ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 3])))))));
        arr_15 [i_1] = ((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1] [i_1 + 2] [i_1 - 2]))));
    }
    /* LoopSeq 1 */
    for (short i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        arr_18 [i_4] &= ((/* implicit */unsigned int) arr_0 [i_4]);
        var_14 = ((/* implicit */short) ((arr_17 [i_4]) ? (min((arr_1 [i_4 + 2]), (arr_1 [i_4 + 2]))) : (((/* implicit */long long int) var_4))));
        var_15 = ((/* implicit */long long int) 11193374598515483028ULL);
        var_16 = ((/* implicit */unsigned long long int) arr_2 [i_4]);
        arr_19 [i_4 + 2] = ((/* implicit */_Bool) (unsigned short)33229);
    }
}
