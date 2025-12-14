/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162865
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
    var_10 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) % (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_4 [i_3] [i_0])))))) : (((/* implicit */int) max(((unsigned short)6), ((unsigned short)12)))))))));
                            var_12 &= ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1 + 1])))));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_2 [i_0])))), ((+(((/* implicit */int) (unsigned short)65530))))))) ? (((arr_8 [i_1 + 1] [i_3 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [13U] [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) var_9))))) ? (max((arr_5 [i_1 + 1] [i_1] [i_1]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)19)), (var_3)))))))))));
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */unsigned short) arr_0 [(_Bool)0] [i_0]);
            }
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (short)13186)) : (((/* implicit */int) (unsigned short)5)))), (((((/* implicit */_Bool) (signed char)0)) ? (min((((/* implicit */int) (short)-13192)), (var_5))) : (max((((/* implicit */int) (short)13165)), (var_5)))))));
}
