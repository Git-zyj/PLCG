/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125890
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_1] [(unsigned short)3] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_9))))) : ((~(var_1))))));
                                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6537295018100095909LL))))) : ((+(var_8)))))) ? (((/* implicit */long long int) ((((5LL) > (((/* implicit */long long int) 0U)))) ? (((/* implicit */int) (short)48)) : (((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) var_8)) ? ((~(3953705854050642262LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4])))))));
                            }
                        } 
                    } 
                    arr_12 [(unsigned char)8] [i_1] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)15865)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (max((var_0), (((/* implicit */long long int) var_9)))) : ((~(var_0))))) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
