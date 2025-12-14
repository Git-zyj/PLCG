/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181928
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
    var_19 ^= ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) arr_4 [(unsigned short)22]);
                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1 - 1] [i_1]), (((/* implicit */signed char) var_13)))))) != (min((4723011258472689684ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((short) (_Bool)1));
                            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) min((var_7), (((/* implicit */unsigned short) var_14)))))), (min((10009644634580568132ULL), (((/* implicit */unsigned long long int) ((int) (unsigned short)55637)))))));
                            var_24 = (_Bool)1;
                        }
                    } 
                } 
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned char) -4457643032259895636LL))))) > (min((10479005967397310317ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_0])))))))));
            }
        } 
    } 
}
