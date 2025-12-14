/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157301
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
    var_20 = ((unsigned long long int) (((((_Bool)0) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) - (max((((/* implicit */long long int) var_3)), (var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_3 [(_Bool)1]))));
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_1])), (((((/* implicit */int) ((arr_3 [i_0]) != (arr_0 [i_0])))) % ((-(((/* implicit */int) arr_4 [i_0]))))))));
                arr_5 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) (unsigned short)61697)))) ? (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0])), ((unsigned short)47578))))))) : (((long long int) ((9272195141216043283ULL) + (arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((var_16) > (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
    var_24 = ((/* implicit */long long int) var_19);
}
