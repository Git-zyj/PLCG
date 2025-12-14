/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17214
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
    var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) ? ((-(((((/* implicit */_Bool) var_15)) ? (var_6) : (196739792044480625LL))))) : (((long long int) var_3))));
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)63))))), (((long long int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
                    arr_9 [i_0] [i_1 - 1] [(short)8] [i_1 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned char)72)) >> (((((/* implicit */int) var_16)) >> (((2305267079U) - (2305267063U))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1989700216U)) ? (1989700193U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63728)))))));
                                var_21 *= ((((/* implicit */_Bool) ((unsigned int) (short)-18891))) ? (min((1377080422U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-94), ((signed char)-48))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
