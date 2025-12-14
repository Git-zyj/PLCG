/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18065
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
    var_19 = ((/* implicit */long long int) (signed char)81);
    var_20 = ((/* implicit */long long int) var_6);
    var_21 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) var_7)), (1872900806955695822LL))))), (-1872900806955695822LL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (var_10))), (((/* implicit */unsigned int) arr_2 [i_1 + 1]))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((-8104032229234612173LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) var_10)) : (min((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (8104032229234612172LL)))))));
                var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
            }
        } 
    } 
}
