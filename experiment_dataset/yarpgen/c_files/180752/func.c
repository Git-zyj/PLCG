/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180752
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
    var_13 &= ((/* implicit */unsigned int) ((unsigned long long int) (+((+(var_8))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) arr_5 [i_0]);
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? ((+(134217727U))) : ((+(arr_4 [i_0])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (arr_5 [i_1])));
                var_15 = ((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_5);
}
