/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103134
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)-39))));
                var_16 = ((/* implicit */unsigned int) arr_0 [i_0 + 2]);
            }
        } 
    } 
    var_17 *= ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)105))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) 15085536006984037420ULL);
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (max((max((1167766619U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) (unsigned char)127))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)129)) && ((_Bool)1)))), ((signed char)108)))) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) min(((short)-30055), ((short)-30045))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)4547)) : (((((/* implicit */_Bool) 1032360214501358625ULL)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)144)))) : (((((/* implicit */_Bool) (unsigned char)133)) ? (var_13) : (((/* implicit */int) (unsigned char)129))))))));
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-2327)), (((((/* implicit */int) var_11)) >> (((/* implicit */int) ((_Bool) (signed char)-29)))))));
            }
        } 
    } 
}
