/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124061
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
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35))) / (arr_2 [i_0]))))) << (((((((/* implicit */_Bool) (unsigned char)30)) ? (((((/* implicit */unsigned long long int) var_10)) & (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))) - (576487151874613253ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) var_10);
                            arr_9 [(short)16] [i_1] [19U] [i_2] [(unsigned char)16] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_1))))), (4294967295U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) * (min((((var_16) + (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))));
    var_21 = ((/* implicit */signed char) var_2);
}
