/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117473
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_8)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))), (max((8305899051586663189LL), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                                var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)94))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
