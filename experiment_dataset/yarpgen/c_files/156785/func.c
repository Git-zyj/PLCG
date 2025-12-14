/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156785
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
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), ((~(((unsigned long long int) (_Bool)1))))));
    var_16 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */_Bool) (short)6638)) ? (((/* implicit */int) (short)-4972)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))));
                                var_18 = ((short) max(((~(arr_1 [i_0] [i_0]))), (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14)))));
                                arr_15 [i_0] [i_0] [18ULL] [(short)23] [i_0] = ((/* implicit */unsigned long long int) (short)32767);
                                var_19 = ((unsigned long long int) ((short) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)-4302)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
}
