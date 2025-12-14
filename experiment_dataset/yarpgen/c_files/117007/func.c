/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117007
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_1])));
            var_19 = ((/* implicit */int) 10675439759114939458ULL);
            var_20 -= ((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]));
            arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_1]);
        }
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned short)41330)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_0 [i_0]))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((unsigned char) var_15));
}
