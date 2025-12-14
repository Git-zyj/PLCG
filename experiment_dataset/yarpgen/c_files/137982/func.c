/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137982
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
    var_15 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)122))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (max((var_13), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [6ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4322997016625492471LL)))) ? (var_1) : (((/* implicit */unsigned long long int) (+(var_11))))));
                    var_17 = ((/* implicit */_Bool) ((4322997016625492477LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4070)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_0);
}
