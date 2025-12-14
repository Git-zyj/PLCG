/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152443
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_0);
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = arr_7 [i_0] [i_3] [i_2] [i_0];
                                var_17 = ((/* implicit */long long int) var_5);
                                var_18 = min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) + (var_4)))) : (((((/* implicit */_Bool) 298559162842377573ULL)) ? (18148184910867174042ULL) : (((/* implicit */unsigned long long int) -2111098884)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(unsigned char)9] [i_3] [i_0] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))))));
                                var_19 = ((/* implicit */unsigned short) ((((arr_12 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0 + 1]) != (((/* implicit */unsigned long long int) var_11)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (9331003743231320786ULL) : (18446744073709551604ULL))))));
                                var_20 = var_6;
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((((8509979073450265629ULL) * (min((((/* implicit */unsigned long long int) var_5)), (var_1))))), (((/* implicit */unsigned long long int) ((signed char) ((var_6) == (var_6)))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 3])) - (95)))))) ? (((/* implicit */unsigned int) ((int) arr_8 [i_0 + 2] [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1]))) : ((-(((arr_10 [i_0] [i_1] [i_1] [i_0]) << (((((/* implicit */int) arr_1 [i_0])) + (93)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_3))));
}
