/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123417
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_2] [(_Bool)1] [i_3] [i_4] = var_2;
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)89)), (689475203)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) var_3))));
                                arr_16 [(short)13] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) -671291948)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-18236)) : (671291948))))), (((/* implicit */int) var_1))));
                                arr_17 [i_2] [i_1] [i_1] [(unsigned short)13] [(unsigned short)13] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_6)))) ? ((~(var_17))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2] = ((/* implicit */unsigned int) ((min(((+(16760832))), (284465567))) + ((-(var_10)))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((var_3), (((/* implicit */unsigned short) (unsigned char)59)))))));
                                var_20 += ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_17)), (min((var_8), (((/* implicit */long long int) var_9)))))) >= (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-112)))))));
    var_22 = ((/* implicit */int) (signed char)(-127 - 1));
}
