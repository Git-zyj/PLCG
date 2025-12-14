/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161068
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
    var_17 *= ((/* implicit */unsigned char) var_12);
    var_18 = ((/* implicit */signed char) max((var_18), ((signed char)51)));
    var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (((((/* implicit */_Bool) var_6)) ? (640309691U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14)))))))) ? (min((((/* implicit */unsigned long long int) var_13)), (35167192219648ULL))) : (((/* implicit */unsigned long long int) var_15)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)6);
                                var_20 *= (unsigned short)27659;
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-60))))) << (max((0ULL), (((/* implicit */unsigned long long int) (signed char)31))))));
                }
            } 
        } 
    } 
    var_22 = max((var_11), (((/* implicit */unsigned char) (!((_Bool)1)))));
}
