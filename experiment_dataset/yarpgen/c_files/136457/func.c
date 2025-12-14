/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136457
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
    var_17 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551614ULL))))) << (((var_13) - (407597217)))))), (((long long int) min((32767LL), (-5375961598857548508LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */unsigned short) max((((arr_4 [i_0] [i_0]) - (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_4))));
                var_19 = ((/* implicit */signed char) ((max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_12)))))));
                arr_6 [i_1] &= ((/* implicit */unsigned char) min((var_1), (((var_3) & (arr_0 [i_0])))));
                var_20 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) ((var_11) | (((/* implicit */int) (unsigned char)226))))), (arr_2 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (((~(var_8))) / (((((/* implicit */int) (unsigned char)238)) << (((((/* implicit */int) (unsigned char)202)) - (196))))))))));
                            arr_12 [i_2] = ((/* implicit */unsigned short) (unsigned char)54);
                        }
                    } 
                } 
            }
        } 
    } 
}
