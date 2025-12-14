/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16881
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
    var_18 = ((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned int) arr_8 [i_0] [i_3] [14LL] [i_1]))));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = var_8;
                                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [(_Bool)1] [i_1] [i_2]))) : (var_13)))) >= (var_11)))), ((unsigned char)234)));
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 4095)), (var_17)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_6);
}
