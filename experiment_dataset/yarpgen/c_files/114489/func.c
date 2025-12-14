/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114489
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
    var_10 = ((/* implicit */signed char) (~(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_9)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_0] [11])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2] [12LL])) : (((/* implicit */int) var_1))));
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [(unsigned char)2])))));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) var_1))))), (min((arr_4 [i_2] [i_2] [i_0]), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]))))))) ? (min(((+(((/* implicit */int) arr_5 [2ULL] [i_2] [i_0])))), (((/* implicit */int) arr_7 [i_2])))) : ((+(((/* implicit */int) (unsigned short)15406)))))))));
            var_13 -= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_7 [i_2])), (var_5)))));
        }
    }
}
