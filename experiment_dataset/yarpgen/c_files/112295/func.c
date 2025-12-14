/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112295
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_18))) * ((((((+(-9154719570041375584LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_8)) + (32417))) - (44)))))));
    var_20 |= ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_3]))));
                        var_22 -= min(((+(((/* implicit */int) ((arr_1 [(signed char)14]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20)))))))), (((/* implicit */int) (_Bool)1)));
                    }
                    arr_11 [i_0] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (min((((/* implicit */unsigned int) arr_2 [i_1 - 2] [i_1 - 2])), (min((4294967284U), (33554304U)))))));
                }
            } 
        } 
    } 
}
