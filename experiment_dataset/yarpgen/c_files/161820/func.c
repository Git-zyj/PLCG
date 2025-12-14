/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161820
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_1 [i_0])), (arr_0 [(_Bool)1]))), (((/* implicit */int) max((arr_3 [i_1 + 1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) min((min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0]))), (arr_2 [i_0] [i_1]))))));
                arr_6 [i_0] = ((/* implicit */_Bool) min((((max((arr_0 [16]), (arr_2 [i_0] [i_0]))) + (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))), (min((((arr_2 [i_0] [i_0]) | (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_1 [i_0])) << (((arr_2 [i_0] [i_1 - 1]) - (1844088108)))))))));
                arr_7 [i_1 - 1] [i_0] |= ((/* implicit */_Bool) min((min((((/* implicit */int) max((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0])) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))), (((arr_2 [i_0] [i_0]) % (min((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])), (arr_2 [i_0] [i_1])))))));
                var_11 = ((/* implicit */unsigned long long int) ((((max((arr_0 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) | (((arr_0 [i_1]) & (arr_0 [i_0]))))) | (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_12 ^= min((var_4), (((/* implicit */unsigned long long int) var_7)));
}
