/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16023
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
    var_14 = ((long long int) (!(((/* implicit */_Bool) (~(9223372036854775807LL))))));
    var_15 = ((/* implicit */unsigned char) ((_Bool) var_11));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) max((9223372036854775807LL), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)1023))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1152921504606846976LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1116892707587883008ULL))))))))));
                                var_17 *= ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-80))))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4 - 1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) -9223372036854775802LL)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)112))) : (9223372036854775781LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))))), (((/* implicit */long long int) ((9223372036854775795LL) != (-9223372036854775789LL))))));
                                arr_14 [3ULL] [i_2] [i_1] [0ULL] = ((/* implicit */unsigned char) (~(max((9223372036854775806LL), (9223372036854775807LL)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)13238))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)65531))))), (9223372036854775800LL))) : ((+(-9223372036854775804LL))))))));
                            }
                        } 
                    } 
                } 
                var_19 *= ((/* implicit */unsigned int) -9223372036854775797LL);
                arr_15 [i_1] [i_1] = (+(max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL)))));
                var_20 -= ((/* implicit */unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) (short)-29857))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((-9223372036854775805LL) + (9223372036854775807LL))) << (13))) * (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4402)) == (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_3);
}
