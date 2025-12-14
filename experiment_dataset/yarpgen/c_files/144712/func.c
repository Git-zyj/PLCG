/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144712
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
    var_18 = ((/* implicit */unsigned int) (-(min((((var_16) & (var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), ((short)-18658))))))));
    var_19 = ((/* implicit */int) (-((+(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = var_10;
                    arr_8 [(short)7] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [(short)9] [i_1 + 2] [i_1])), ((-(((/* implicit */int) (_Bool)0))))))) ? (((int) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_4 [i_0] [i_0])))) : (((((2147483632) + (((/* implicit */int) var_0)))) - (((((/* implicit */int) arr_6 [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [13] [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) ((unsigned short) max((arr_5 [i_0] [10ULL]), (arr_10 [i_0] [i_0] [i_0] [i_0 - 1]))))) ? (((((/* implicit */unsigned long long int) ((var_13) | (var_13)))) & (arr_10 [i_0] [i_0] [i_3 - 1] [i_2]))) : (((((((/* implicit */_Bool) arr_11 [i_1])) ? (432328256711929745ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */unsigned long long int) ((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))))))));
                                var_22 = ((/* implicit */unsigned short) (unsigned char)208);
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-16)), (var_13)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_0)))));
                }
            } 
        } 
    } 
}
