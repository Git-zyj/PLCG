/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161917
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
    var_11 = ((/* implicit */int) var_4);
    var_12 |= ((((/* implicit */int) ((((((/* implicit */_Bool) 210670443)) ? (((/* implicit */long long int) 4294967295U)) : (-5049731867874222172LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) -5049731867874222165LL)) ? (1451458703) : (((/* implicit */int) (unsigned char)88)))))))) % ((-(((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(-5049731867874222172LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)11813)))))))) ? (((/* implicit */long long int) (+(2147483629)))) : (((((/* implicit */_Bool) -2147483629)) ? (5049731867874222176LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13828)))))));
                arr_4 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) 3263504801389309210ULL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((1894883737U) >= (((/* implicit */unsigned int) 776898228)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)65))))) ? (-5049731867874222199LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53723)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [(unsigned short)6] [i_2 - 1] [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                            var_14 = max((((((/* implicit */_Bool) 5049731867874222176LL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) (short)32767)) ? (2147483624) : (((/* implicit */int) (signed char)62)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
