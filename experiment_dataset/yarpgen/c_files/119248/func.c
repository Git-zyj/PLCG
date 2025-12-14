/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119248
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
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((int) max(((signed char)-8), (((/* implicit */signed char) var_17)))))), (var_9)));
    var_20 = ((unsigned int) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [18U] [18U] |= (~(((((long long int) (-9223372036854775807LL - 1LL))) ^ (((/* implicit */long long int) ((int) -520465071))))));
                var_21 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [18]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))))) : (((arr_4 [(short)18] [16ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_6 [(signed char)2] [i_1]) < (((/* implicit */long long int) arr_3 [(_Bool)0]))))))))));
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((arr_2 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(_Bool)1]))))))))) * (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-45))))) / (min((((/* implicit */long long int) (unsigned char)221)), (arr_6 [i_0] [i_0])))))));
            }
        } 
    } 
}
