/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139023
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */int) ((short) arr_1 [i_0]))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))) : ((+(var_2))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (4294967278U)))), (var_0))))));
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 18; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) max((arr_5 [i_1 + 2]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2 + 1]))))))));
                arr_11 [i_1] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
}
