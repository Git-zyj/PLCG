/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181062
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1] [i_2])) & (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2]))))) ? ((-(5995240644575692591LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_0 + 1] [i_1])))))));
                    arr_9 [20ULL] [20ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_1]) : (arr_5 [i_0])))) ? (((/* implicit */long long int) max(((+(((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_2] [(unsigned char)6])))), ((+(((/* implicit */int) (_Bool)1))))))) : ((+((~(arr_3 [i_1] [i_1])))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4280308231390680958LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_11)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (min((((/* implicit */unsigned int) var_1)), (var_9))))))))));
}
