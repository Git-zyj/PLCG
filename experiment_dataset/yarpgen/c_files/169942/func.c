/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169942
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
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) max((((var_11) << (((arr_0 [i_1 - 1] [i_1 - 2]) - (411938631))))), (((int) max((((/* implicit */unsigned long long int) arr_4 [(unsigned short)4] [i_1])), (var_0))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (signed char)126)) : (205948602)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-114)) + (161))) - (47)))))))) || (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1]))));
                            var_14 = ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (unsigned short)32615)) : (((/* implicit */int) (unsigned short)65535)));
                            arr_12 [i_0] [i_1] [2ULL] [i_0] = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((((unsigned long long int) var_0)), (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) var_6)) : (var_4)))) ? (((((/* implicit */unsigned long long int) var_4)) * (7ULL))) : (((/* implicit */unsigned long long int) -8599016437976232300LL))))));
}
