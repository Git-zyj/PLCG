/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128756
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [1LL] [i_0] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((-69507913), (((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 69507908)) || ((!(((/* implicit */_Bool) (unsigned char)195))))))) : (((int) (!(((/* implicit */_Bool) var_0)))))));
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(275246403)))), (max((var_3), (var_2))))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_18)))))), ((-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4233247324U) : (2310511737U)))))));
                    var_22 = ((/* implicit */short) (((((~(((/* implicit */int) (unsigned char)12)))) <= ((-(1525208711))))) ? (((unsigned int) (~(-2542155162168560053LL)))) : (((unsigned int) (signed char)-106))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_5] [i_5] = ((((/* implicit */_Bool) (((+(var_16))) | (min((((/* implicit */long long int) 461108105U)), (-2542155162168560048LL)))))) ? (((/* implicit */long long int) (-(((int) 2542155162168560056LL))))) : (3666654720841532587LL));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-8314199675603893311LL), (((/* implicit */long long int) (unsigned short)46657))))) && ((!(((((/* implicit */_Bool) (short)-23493)) && (((/* implicit */_Bool) var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) var_17);
}
