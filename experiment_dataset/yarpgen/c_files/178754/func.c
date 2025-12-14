/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178754
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned long long int) var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 + 3]))) | (2884315266U)))) ? (((unsigned long long int) (unsigned char)161)) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1])))))));
                arr_6 [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned int) ((short) arr_4 [i_1 + 4] [i_1] [i_1 + 1])));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                    var_21 = ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)147))))))) > (((((/* implicit */_Bool) (unsigned char)147)) ? (var_12) : (((/* implicit */unsigned long long int) var_10)))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_11);
}
