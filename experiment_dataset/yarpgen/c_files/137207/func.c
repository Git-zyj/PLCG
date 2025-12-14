/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137207
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = -3757609042712762644LL;
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (1919880953U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))))), (((2375086343U) >> (((1097364144128ULL) - (1097364144109ULL)))))));
            var_14 &= ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 1919880953U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))), ((+(min((((/* implicit */long long int) arr_3 [i_0] [i_1 + 2] [i_1 + 2])), (3757609042712762644LL)))))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1 - 1] [i_1] [i_0 + 2]))) ? (max((((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1] [i_0 + 2])), (var_5))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_0 - 1])))))));
        }
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1395580820238347342LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2375086343U)) ? (9223372036854775807LL) : (-9223372036854775790LL)))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775794LL)) && (arr_3 [i_0 + 2] [i_0 - 1] [i_0]))))));
    }
    var_17 = ((/* implicit */long long int) var_7);
}
