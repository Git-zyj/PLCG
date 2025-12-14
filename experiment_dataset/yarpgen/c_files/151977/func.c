/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151977
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
    var_19 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32739))))) : (var_3)))));
    var_20 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) max(((((_Bool)0) ? (((/* implicit */int) arr_5 [i_0 + 1])) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (short)32749))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 += ((((/* implicit */unsigned long long int) ((var_9) / (max((((/* implicit */long long int) var_0)), (arr_3 [i_0] [i_1])))))) * (var_15));
                                var_23 = ((/* implicit */long long int) var_15);
                            }
                        } 
                    } 
                } 
                var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_1)))))) && (var_0)));
            }
        } 
    } 
}
