/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12610
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */signed char) min((((((unsigned int) (signed char)87)) + (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (117469150U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((50850531) + (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((((/* implicit */int) (unsigned char)242)) / (((/* implicit */int) (signed char)-72)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_2 [i_1]))))))))));
                    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_0 [i_1] [11LL]), (arr_0 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((6467629943322126451LL), (((/* implicit */long long int) (signed char)110))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) + ((-2147483647 - 1))))) ? (min((((/* implicit */unsigned int) var_4)), (arr_2 [i_3 + 2]))) : (((((/* implicit */_Bool) min(((signed char)-37), (arr_11 [i_0] [i_1] [i_2] [i_3] [(short)8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15))))) : (max((((/* implicit */unsigned int) var_3)), (979685930U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(8978127219755753302LL)));
    var_21 ^= var_3;
    var_22 += ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((unsigned char)207), (((/* implicit */unsigned char) (signed char)-1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (var_6))))) + (min((((/* implicit */unsigned long long int) var_9)), (13738633467460881100ULL)))))));
    var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((7459842354397945510LL), (((/* implicit */long long int) (signed char)49))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))));
}
