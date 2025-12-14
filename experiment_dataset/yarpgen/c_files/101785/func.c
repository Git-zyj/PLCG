/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101785
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (max((var_3), (var_5)))))) == (max((var_11), (((((/* implicit */_Bool) 814035363U)) ? (3480931936U) : (0U)))))));
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((max((((/* implicit */int) arr_6 [i_1 + 2] [i_1])), (var_5))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1 + 2] [i_1 + 2])), (arr_3 [i_1 + 2] [i_1])))))))));
                var_19 = ((/* implicit */int) min(((((~(var_13))) & (((/* implicit */long long int) ((2U) & (var_11)))))), (((/* implicit */long long int) max((arr_0 [15LL] [i_1 - 1]), (((unsigned int) var_6)))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) 13U);
            }
        } 
    } 
}
