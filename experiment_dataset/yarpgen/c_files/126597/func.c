/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126597
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
    var_10 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(short)9] [8U] [i_2] [(unsigned short)13] [i_0] = ((/* implicit */signed char) (-(max((14590942289786841943ULL), (((/* implicit */unsigned long long int) (short)32757))))));
                                var_11 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 2360530160U)) ? (((/* implicit */unsigned long long int) ((unsigned int) (signed char)-39))) : (((unsigned long long int) 1262460600669628748LL)))), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) -1437214693))))))));
                                var_12 = ((/* implicit */long long int) 17ULL);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (unsigned char)15))))), (((unsigned long long int) -1437214693))));
                var_14 -= ((/* implicit */unsigned long long int) (_Bool)1);
                var_15 |= ((/* implicit */short) ((max((17556043106109541255ULL), (((/* implicit */unsigned long long int) 211122814)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (unsigned char)41))))))));
            }
        } 
    } 
}
