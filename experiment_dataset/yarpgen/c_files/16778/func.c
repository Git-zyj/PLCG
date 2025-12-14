/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16778
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(10062326284054824075ULL))), (min((17588160604201369263ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (10062326284054824069ULL)));
    var_19 = ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned char) ((_Bool) (~(8384417789654727529ULL))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (-((((!(var_10))) ? (max((10062326284054824069ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1])), (var_14)))))))));
            var_21 = ((/* implicit */long long int) (signed char)94);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            var_22 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((var_2) >> (((arr_3 [i_2 + 2] [i_2 + 2] [i_2]) + (83834254621885711LL)))))) : (((/* implicit */_Bool) ((var_2) >> (((((arr_3 [i_2 + 2] [i_2 + 2] [i_2]) + (83834254621885711LL))) - (1833626719361590740LL))))));
            var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0])) && (arr_6 [i_0] [i_0] [i_0])));
            var_24 = ((/* implicit */short) ((604888951) / (((/* implicit */int) (unsigned char)114))));
        }
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_17)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) var_17))) - (29))))), (max((1737611366), (1737611360))))))));
    }
    var_26 = (_Bool)1;
}
