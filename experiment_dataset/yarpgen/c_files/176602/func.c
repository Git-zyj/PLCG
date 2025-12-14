/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176602
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21923)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))) : (2849989082417607945LL)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10)))) ? (((((/* implicit */_Bool) (+(20U)))) ? ((((_Bool)1) ? (((/* implicit */int) var_15)) : (var_16))) : ((+(((/* implicit */int) (unsigned short)24572)))))) : (((/* implicit */int) (unsigned short)21923))));
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2909332371U))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483647))));
                                var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])), ((unsigned char)224)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-3))))) : (max((-5517220357931617687LL), (((/* implicit */long long int) 7U))))))));
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [(unsigned char)8] [i_1] [i_1] [i_4]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) arr_11 [i_1] [i_1] [(short)14] [i_1] [i_0 + 1]);
                }
            } 
        } 
    } 
}
