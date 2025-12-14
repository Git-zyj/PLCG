/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167911
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
    var_17 = ((/* implicit */_Bool) var_15);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1 - 1] [i_1 - 1] [(short)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_2 [i_0 - 1]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [(signed char)9])), ((~(((/* implicit */int) arr_2 [17ULL]))))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned short)10009)) ? (1741674534U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))))));
                var_18 |= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_3 [i_0 - 1] [6LL] [i_1 - 1]))))));
                var_19 = min(((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0 + 1])))))), (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])), (var_14))))));
            }
        } 
    } 
}
