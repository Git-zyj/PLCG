/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166913
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
    var_18 = ((/* implicit */short) (signed char)-91);
    var_19 -= min((min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)480)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) -6394322871068413206LL)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1500081292)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_4))))) : (8LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)481), ((short)-480))))) : (((((/* implicit */_Bool) -9LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-502))) : (8569701290558319669LL)))));
                var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) ? (min((((/* implicit */long long int) var_14)), (arr_2 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)34070)) : (1500081300))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -2)) ? (min((var_0), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])))) : (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (unsigned char)255)), (arr_2 [i_2])))))))))));
                            var_23 &= ((/* implicit */signed char) (+(((/* implicit */int) (short)477))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((arr_2 [i_0 + 1]) & (((/* implicit */long long int) arr_7 [i_0] [i_1] [(signed char)12])))) : (((/* implicit */long long int) max((arr_4 [i_1 + 1]), (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)87)), (-1500081285))))));
            }
        } 
    } 
}
