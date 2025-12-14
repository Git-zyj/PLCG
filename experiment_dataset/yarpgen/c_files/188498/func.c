/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188498
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) 634055917)), (max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */short) ((arr_7 [i_0] [i_0] [i_1] [11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])));
                    var_15 |= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    var_16 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_11), (((short) ((((/* implicit */_Bool) var_6)) ? (881965172U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_10))) / (((/* implicit */int) var_7)))))));
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_5))));
}
