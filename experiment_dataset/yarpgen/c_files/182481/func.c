/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182481
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
    var_13 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)26501))) % (arr_4 [i_1])));
                    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-26494)) && (((/* implicit */_Bool) (short)13306)))) ? (((((/* implicit */_Bool) 340946045886019556ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26501))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_10)))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((4189546244U), (var_8))))))) < (((/* implicit */int) ((((unsigned int) var_5)) >= (((/* implicit */unsigned int) var_11)))))));
}
