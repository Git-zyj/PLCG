/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127132
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 *= (((-(arr_8 [i_0] [i_0] [(_Bool)1] [21U]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (-793810349))) : (((/* implicit */int) var_2))))));
                                arr_11 [(signed char)12] [(signed char)12] [(short)5] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) arr_7 [i_1] [i_4] [(_Bool)1] [7ULL])) && (((/* implicit */_Bool) var_6)))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(var_14))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [18U] &= ((/* implicit */unsigned char) ((int) (unsigned char)39));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) -2106549733))))) <= (((/* implicit */int) var_11)))))) | ((-(2791000517U)))));
    var_19 = ((/* implicit */unsigned short) var_8);
    var_20 = ((/* implicit */long long int) var_1);
}
