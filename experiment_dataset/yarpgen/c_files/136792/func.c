/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136792
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
    var_20 = ((/* implicit */long long int) var_15);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_23 = ((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_1]));
            arr_4 [i_0] [10LL] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_1] [i_0]));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [10LL] [i_0] [10LL])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        arr_8 [i_2] = arr_7 [i_2 + 1] [i_2 + 1];
        var_25 = ((/* implicit */long long int) max((((unsigned short) arr_7 [i_2 + 2] [i_2 + 2])), (((/* implicit */unsigned short) ((unsigned char) arr_7 [i_2 + 2] [i_2 + 1])))));
        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2 + 1])) ? (arr_3 [i_2 + 2] [i_2 + 2] [i_2 - 1]) : (arr_3 [i_2] [i_2 + 2] [i_2 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3950796777U)))));
        arr_9 [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
    }
}
