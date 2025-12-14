/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175083
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((274861129728ULL), (((/* implicit */unsigned long long int) ((unsigned int) 56U)))));
        var_18 += ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 56U)) ? (var_1) : (((/* implicit */long long int) 2265692826U)))) - (((/* implicit */long long int) 71U)))) <= (((/* implicit */long long int) ((arr_0 [i_0]) & (2029274467U))))));
        var_19 = ((/* implicit */unsigned int) ((unsigned char) (-(arr_0 [i_0]))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((arr_3 [i_0]) + (arr_3 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (+(min((((var_4) << (((var_12) - (2179475341U))))), ((-(var_16)))))));
        var_21 = ((/* implicit */long long int) var_13);
    }
    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2265692839U)))))))) & (((unsigned long long int) (~(2029274451U))))));
    var_23 = ((unsigned int) ((var_10) << (((((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (21913079U)))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) (+(55U)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) 4294967282U)) : (arr_15 [i_2] [i_3] [i_3]))))));
                var_25 &= arr_15 [i_2] [i_3] [i_3];
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 268173312U))) || (((/* implicit */_Bool) max((arr_9 [i_2] [i_3]), ((-(var_14))))))));
                var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 38U))));
            }
        } 
    } 
}
