/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137173
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) * (((/* implicit */unsigned int) var_7))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((5U) & (((/* implicit */unsigned int) 356316164))))) ? (((((/* implicit */int) arr_0 [i_1])) >> (((/* implicit */int) arr_0 [i_0])))) : (max((((/* implicit */int) var_3)), (2080186201)))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (((-(min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_1)))))) != (((/* implicit */long long int) var_8))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min(((~(((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))))))), (((/* implicit */unsigned int) (unsigned char)186))));
}
