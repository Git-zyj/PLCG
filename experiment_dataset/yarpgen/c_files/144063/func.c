/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144063
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_11 -= ((/* implicit */signed char) ((var_6) ? (((/* implicit */long long int) 3432447999U)) : (((long long int) (unsigned short)16733))));
                                var_12 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (arr_6 [i_0] [(signed char)2] [i_4])))) ? (var_3) : (((/* implicit */unsigned long long int) ((2488905227411832857LL) & (((/* implicit */long long int) 2003066927))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)45))))) ^ (1071388174988650901LL))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (1071388174988650901LL))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 + 3] [i_1] [i_1] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min(((+(var_8))), (((/* implicit */unsigned int) var_6))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
    var_13 |= ((/* implicit */signed char) var_6);
}
