/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104708
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
    var_19 += max((min((((((/* implicit */_Bool) var_6)) ? (var_15) : (281474976710655ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_17))))))), (max((var_8), (18446462598732840956ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_2 [i_1 - 4] [i_1 + 1] [i_1]), (arr_2 [i_1 - 4] [i_1 - 1] [i_1 - 2])))), (((((/* implicit */_Bool) arr_2 [i_1 - 4] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 4] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1]))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1 - 4])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1]))))) : (min((((/* implicit */int) arr_0 [8ULL])), (((((/* implicit */_Bool) (unsigned short)49173)) ? (((/* implicit */int) (unsigned short)26019)) : (((/* implicit */int) arr_0 [i_1]))))))));
                var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 281474976710648ULL))) | (((/* implicit */int) min((var_16), (arr_2 [i_0] [i_1 - 3] [i_0]))))))) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3] [i_1 - 3])) : (((((/* implicit */int) arr_0 [i_1 - 4])) | (((/* implicit */int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)16362))));
}
