/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122705
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_10)))) ? (min((((/* implicit */unsigned int) (unsigned char)255)), (3815835527U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned char)51)))))))) : (var_7)));
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_6)), (var_1))), (var_1)))), (min((var_10), (((((/* implicit */_Bool) var_3)) ? (var_10) : (var_10)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)55819)), (5ULL)));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (9223372036821221376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3 + 2] [i_4 - 2]))))), (((/* implicit */unsigned long long int) min((arr_6 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_4 + 1]), (arr_6 [i_2] [i_2] [i_3 + 2] [i_3 - 1])))))))));
                                arr_12 [i_0] [i_1 + 2] [i_2] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) (short)-74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10ULL))), (((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_2] [i_3 - 2] [i_2] [i_4] [i_4 - 1])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (9223372036854775807ULL)))));
                            }
                        } 
                    } 
                    var_15 *= min((((/* implicit */unsigned long long int) 1661157493U)), (0ULL));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (short)4368))));
}
