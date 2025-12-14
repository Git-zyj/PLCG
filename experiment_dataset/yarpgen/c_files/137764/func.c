/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137764
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6)))))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_0])))) && (((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)7850)), (arr_7 [i_2 + 1] [i_2 + 1] [18])))))))));
                var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1371499571)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(short)12] [(short)12]))))) : (((arr_6 [6ULL] [6ULL]) - (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [i_2 + 1]))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) var_4);
    var_23 = max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) ^ (var_0)))) : (max((((/* implicit */unsigned long long int) var_11)), (var_13))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (18U) : (((/* implicit */unsigned int) 1371499571))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((18368528192235813775ULL), (((/* implicit */unsigned long long int) var_7)))))));
}
