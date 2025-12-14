/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151195
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
    var_15 = ((/* implicit */int) var_14);
    var_16 += ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) != (4294967274U)))) : (((/* implicit */int) (unsigned char)190))))) : (min((4294967271U), (4037195751U)))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4037195748U))))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) * (((/* implicit */int) (unsigned char)39))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) var_13)))))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 4194304)) % (4294967251U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) >= (arr_0 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((((arr_11 [i_0]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))))), (((/* implicit */long long int) min((arr_11 [i_0]), (arr_11 [i_0]))))));
                                var_21 *= ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_4 + 1] [i_4])) * (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_3]))))));
                                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((4037195747U), (((/* implicit */unsigned int) (unsigned char)14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0])), (4294967271U))))) <= (257771547U)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
