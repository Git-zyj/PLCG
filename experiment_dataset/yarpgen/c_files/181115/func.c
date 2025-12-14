/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181115
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-442559371) / (((/* implicit */int) (_Bool)1))))) ? (min((var_0), (((/* implicit */unsigned int) (unsigned short)49655)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3429)))))) ? (((/* implicit */int) (short)14269)) : (((/* implicit */int) (unsigned char)48))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)41)) ? (-2909479619595125496LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), ((unsigned short)3429)));
                                var_12 = ((/* implicit */unsigned int) arr_8 [i_1] [1LL] [6LL] [(signed char)5]);
                                arr_15 [(unsigned char)3] [i_2 - 1] [i_2 - 1] [9LL] [i_3] = ((/* implicit */_Bool) min((-434545974), (((/* implicit */int) (_Bool)0))));
                                arr_16 [i_0] [i_1] = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_13 |= ((/* implicit */unsigned char) 2075559246U);
                    arr_17 [i_0] &= ((/* implicit */short) (unsigned short)3417);
                }
            } 
        } 
    } 
}
