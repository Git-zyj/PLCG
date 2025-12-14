/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14666
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) -3LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) arr_10 [i_2] [i_3 - 2] [i_2] [i_3 - 2] [i_3])) : (((/* implicit */int) var_12))))), ((~(((var_17) ? (2958960872845393393ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61)))))))));
                                arr_17 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_1 + 1] [i_0 + 3] [i_2])) ? ((~(3270903767606369063LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15)))), (arr_13 [i_0] [i_1 + 1] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+((-(var_6))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_2] = ((/* implicit */unsigned int) ((short) var_12));
                                arr_25 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((arr_8 [i_1] [i_2] [i_2] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 4] [i_0 + 4] [(short)10])) ? (((/* implicit */int) ((arr_11 [i_0] [i_1] [i_5] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)200)))))))));
                                arr_26 [i_0] [i_1 + 1] [i_0] [(short)4] [i_2] = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -6562048743115089502LL)))) ? (arr_13 [i_2] [i_0 - 1] [i_6]) : (var_7)))) < (((unsigned long long int) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0 + 2] [i_2] [i_5])));
                                arr_27 [i_0] [i_1 + 1] [i_2] [i_5] [i_2] = ((/* implicit */signed char) arr_23 [i_0] [i_1] [i_2] [i_0] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13))))), (max((max((6075605433420160537ULL), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_4))))));
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) || (((/* implicit */_Bool) var_2)))))) >= (min((((/* implicit */long long int) (+(((/* implicit */int) var_16))))), (var_7))));
}
