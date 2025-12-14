/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112219
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) var_2))), (var_18)))) ? (((((/* implicit */int) var_9)) ^ (var_3))) : (((/* implicit */int) (signed char)1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) -2105494922)) ? (((/* implicit */unsigned int) -2105494925)) : (3882209596U)))));
                                var_22 &= ((/* implicit */int) ((signed char) 1529460804));
                                var_23 += ((/* implicit */unsigned long long int) ((max((1529460803), (((/* implicit */int) (signed char)3)))) & (((/* implicit */int) arr_7 [i_1]))));
                            }
                        } 
                    } 
                    arr_10 [i_1] &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_7)) ? (1529460804) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_2] [5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_16 [18LL] [i_2] [i_1] [i_5] [(signed char)14])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [(signed char)10] [i_2] [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_4))))) <= (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_0 [i_5] [i_6]))))) ? (((((/* implicit */_Bool) arr_15 [(signed char)13] [3U] [i_2] [i_2] [3U])) ? (var_18) : (arr_1 [i_6] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-52)))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_5 - 1] [i_1] = ((/* implicit */_Bool) 549218942976LL);
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_5 + 1] [i_5 + 1] [i_6] = ((/* implicit */unsigned long long int) arr_9 [i_5 - 1] [i_5 + 1] [i_5] [i_2] [6]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)3))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (190885725U))))))));
}
