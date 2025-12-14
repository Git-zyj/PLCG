/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187292
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
    var_18 = ((/* implicit */int) ((((int) ((((/* implicit */_Bool) 137438953471LL)) ? (((/* implicit */unsigned long long int) var_0)) : (8585586373460468168ULL)))) < (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) arr_5 [(short)6] [(unsigned char)12] [2])), (min((((/* implicit */unsigned long long int) var_14)), (var_8)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_1 [i_1]), (arr_1 [i_1])))), (min((var_6), (((/* implicit */long long int) var_11))))))) && (((/* implicit */_Bool) min((max((var_0), (((/* implicit */int) var_15)))), (((/* implicit */int) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
}
