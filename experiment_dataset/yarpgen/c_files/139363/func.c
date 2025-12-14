/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139363
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
    var_16 = var_9;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_1] [(short)14] [i_2] = ((/* implicit */unsigned int) ((_Bool) var_6));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_3))));
                }
                var_18 = ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [7U] [i_0]) <= (arr_5 [i_1]))))) > (var_9)));
                var_19 = ((/* implicit */unsigned long long int) (((+(arr_3 [i_0]))) <= (((unsigned int) 5U))));
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4158157596U)) ? (((/* implicit */int) ((short) 3753700199U))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */int) ((1938358646) > (((/* implicit */int) (short)-23908))))) : (((/* implicit */int) ((((arr_6 [i_1] [i_0] [i_0] [i_1]) ? (12026904201042226222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) <= (((/* implicit */unsigned long long int) (-(arr_5 [i_0])))))))));
            }
        } 
    } 
    var_21 ^= ((unsigned int) (_Bool)1);
    var_22 = ((/* implicit */unsigned long long int) min((((unsigned int) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) 1517769470)))) > (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5265))) : (3U))))))));
}
