/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186159
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
    var_20 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)222))))) : ((+(-6065962973648243101LL)))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23459))) : (var_0)))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)41948)) || (((/* implicit */_Bool) (signed char)-62))))), ((signed char)-123))))) * (min((20ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-80)) || (((/* implicit */_Bool) (short)-5403))))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_12 [i_1] = ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_3] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_12)), ((signed char)-126)))) ? (((/* implicit */unsigned int) (+(8386560)))) : (((((/* implicit */_Bool) (unsigned char)238)) ? (30U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))))));
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (unsigned short)43184))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
