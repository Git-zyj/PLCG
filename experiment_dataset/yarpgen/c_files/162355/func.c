/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162355
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = max((((/* implicit */long long int) min((((unsigned int) 15000228457362405839ULL)), (((/* implicit */unsigned int) -460858431))))), (((long long int) (signed char)-69)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) min((min((var_5), (((/* implicit */long long int) var_13)))), (((long long int) 3446515616347145777ULL))))) ? (min((((unsigned int) arr_10 [i_4] [i_4] [4U] [i_4] [i_1] [i_4] [i_4])), (((/* implicit */unsigned int) ((short) (signed char)122))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                                var_21 = ((/* implicit */unsigned int) ((signed char) (signed char)122));
                                var_22 |= ((/* implicit */signed char) 4294967295LL);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((min((min((var_15), (34359738367ULL))), (3784441636451046333ULL))), (((((/* implicit */_Bool) min((18446744039349813249ULL), (18446744039349813249ULL)))) ? (8440312684235059627ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 4503599627370495ULL)))))));
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
    var_25 = ((/* implicit */unsigned int) (+(max((min((((/* implicit */unsigned long long int) 8037451142220123175LL)), (15057646103862140014ULL))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) var_6)))))))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) ((short) 460858418))))) : (((/* implicit */int) var_14))));
}
