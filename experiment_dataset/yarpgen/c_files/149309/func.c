/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149309
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
    var_16 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) 2251524935778304LL);
        var_17 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_1 [6LL])))));
        var_18 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 3]))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_12)) ? (1125882726973440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))) ? (-8790193106564622926LL) : (((-8790193106564622926LL) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(_Bool)1]))))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [9LL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((arr_3 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((arr_3 [i_1] [i_1]) >= (((/* implicit */unsigned int) var_15))))))), (max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)11393))))));
    }
}
