/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146282
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_11))));
    var_19 = var_6;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (4194303U)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((7107356344505058251LL), (((/* implicit */long long int) arr_7 [i_4] [i_3] [i_2] [i_2] [(unsigned char)0] [(unsigned char)0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2000641395U) : (2000641395U)))) && (((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (2294325893U))))))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (_Bool)0)))))))));
                                var_22 -= ((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 + 2] [i_1] [i_2] [i_2] [i_4]);
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_0 + 1] [i_4])) ? (arr_9 [i_0 - 1] [i_0 + 2] [i_1] [i_1] [i_2] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((unsigned long long int) var_6))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) 2294325901U)) : (17863018646717531526ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2])))))));
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((1086690336303079786ULL), (((/* implicit */unsigned long long int) 847791218U))))) ? (max((var_13), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_1]))))))));
            }
        } 
    } 
}
