/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157056
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
    var_20 = ((/* implicit */long long int) ((unsigned int) (signed char)-75));
    var_21 &= ((/* implicit */unsigned short) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) var_2)))));
                                var_23 |= ((/* implicit */signed char) ((short) max((var_15), (((/* implicit */unsigned int) var_0)))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) ((((unsigned long long int) max((var_0), (((/* implicit */short) var_12))))) >= (((/* implicit */unsigned long long int) min((((unsigned int) 2147483646)), (((/* implicit */unsigned int) var_0)))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)63960))))));
    var_27 = ((/* implicit */int) var_4);
}
