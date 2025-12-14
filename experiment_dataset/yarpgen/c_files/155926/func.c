/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155926
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (min((((/* implicit */long long int) ((unsigned int) -303587307495068797LL))), (-9014925970112430771LL)))));
                var_20 = max((arr_3 [i_0] [i_0 - 2] [i_0]), ((+(arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]))));
                arr_6 [i_0 - 3] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 298975510792004876LL)) ? (4723795124115473252ULL) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_0 [4]) : (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) 798433551)), (2329249115U))) - ((-(var_6))))))));
                var_21 = ((/* implicit */unsigned short) min((min((arr_1 [i_0 - 1]), (((/* implicit */long long int) ((arr_2 [i_0] [i_1] [i_1]) << (((((/* implicit */int) (unsigned short)47456)) - (47456)))))))), (min((max((((/* implicit */long long int) arr_5 [0ULL] [0ULL])), (2609073144754082599LL))), (arr_3 [i_0 - 1] [(_Bool)1] [1U])))));
                var_22 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_4 [i_1] [(unsigned short)0] [i_0 - 3])), (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [2] [i_0] [i_0]))))))) + (var_6)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_10);
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1994315338578819938ULL))));
}
