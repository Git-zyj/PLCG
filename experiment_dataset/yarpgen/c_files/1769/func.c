/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1769
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
    var_19 &= ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (short)-15973);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775797LL)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (var_18)));
                                var_21 = ((/* implicit */long long int) var_17);
                                var_22 &= ((/* implicit */int) ((((var_8) | ((-9223372036854775807LL - 1LL)))) / (-9223372036854775798LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
