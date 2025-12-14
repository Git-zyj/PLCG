/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16401
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (unsigned char)192))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_1) : (16139292616831294896ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) var_0)))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [(unsigned short)7] = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((arr_12 [(unsigned short)11] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(arr_11 [i_4]))))));
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)10872)), (1234044148650583335LL)))) | (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)9]))) + (var_5))), (var_1)))));
                                var_18 |= ((/* implicit */unsigned char) (+(max((((/* implicit */int) arr_3 [i_0] [i_0])), (((arr_2 [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_4] [i_1] [7LL] [i_4] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((var_12) - (11897172733867710640ULL))))))));
}
