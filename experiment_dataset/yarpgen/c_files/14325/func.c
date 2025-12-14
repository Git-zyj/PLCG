/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14325
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) arr_8 [i_0] [i_4])) : (arr_7 [i_4])))))), ((-(((((/* implicit */_Bool) arr_11 [i_0] [15ULL])) ? (-9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3 - 2] [i_4])))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) var_3)) : ((-(11286244357552864909ULL)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */int) 11009676257893699732ULL);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_17 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [21ULL]));
                                var_18 = ((/* implicit */unsigned long long int) (signed char)-44);
                                var_19 &= ((/* implicit */int) (+(var_13)));
                                var_20 = ((/* implicit */signed char) (+((-((-(((/* implicit */int) (signed char)123))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_1 [i_2]), (((/* implicit */int) (unsigned char)227))))), (var_5)))) : ((~(arr_0 [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 |= min((var_11), (var_11));
}
