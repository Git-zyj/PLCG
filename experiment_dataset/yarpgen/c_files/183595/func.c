/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183595
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
            arr_5 [i_0] [i_0] = (((_Bool)0) && ((!((_Bool)1))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_2] [i_0] [i_2])))) ? (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (var_3)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (((_Bool) (_Bool)1)))))));
            var_15 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (min((var_9), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_9 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */int) arr_4 [i_0] [(_Bool)0])) ^ ((+(((/* implicit */int) (unsigned char)240))))))));
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_0 [i_0]))));
            arr_10 [i_0] [i_0] [i_0] = (_Bool)1;
        }
        arr_11 [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
        arr_12 [i_0] = 72057594037796864ULL;
    }
    var_17 = ((/* implicit */_Bool) (+((~(var_4)))));
}
