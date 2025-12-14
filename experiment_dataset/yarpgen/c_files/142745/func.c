/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142745
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) (-(((int) (+(((/* implicit */int) var_11)))))));
                    arr_9 [i_0] [i_0] [i_2] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_2 - 3] [i_2 - 3] [(_Bool)1] [(_Bool)1]))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) : (((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))) : (1125899906842624LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(short)1] [i_2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -874288981))));
                                var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) * (1125899906842645LL)));
                                var_16 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1])))));
                                var_17 -= ((unsigned long long int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (~(1125899906842608LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (var_5))));
}
