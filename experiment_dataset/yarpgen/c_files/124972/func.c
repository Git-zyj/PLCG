/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124972
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
    var_11 = ((/* implicit */short) (+((-(max((var_2), (((/* implicit */unsigned int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-3974)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)205)))) != (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (min((arr_4 [i_0 - 1] [0ULL]), (((/* implicit */unsigned short) var_8))))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */int) (signed char)95)) > (((/* implicit */int) (short)-26866))));
                                var_14 = ((/* implicit */_Bool) max((var_14), (((16975106018501063624ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1 - 3] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 3] [i_1] [i_1 + 3] [i_1 - 2] [i_1 - 3] [i_1])))))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) var_6)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_2 [i_0] [(unsigned char)15])))) || (((((/* implicit */unsigned long long int) var_4)) != (711312442064703173ULL)))))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0 - 3] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */_Bool) 4503599627370495ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) 4503599627370510ULL)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned char)37)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned char)208)))) + (((/* implicit */int) var_6))))) ? (min((((/* implicit */unsigned long long int) var_2)), (((9441167848412140999ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
