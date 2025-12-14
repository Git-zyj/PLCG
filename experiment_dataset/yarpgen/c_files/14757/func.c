/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14757
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [i_3] [i_4] [(unsigned char)14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_3)) : ((+(var_4))))))));
                                arr_15 [i_0] [i_2 - 1] [i_2 + 1] [i_3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~((+(((var_2) ? (var_11) : (((/* implicit */unsigned long long int) var_1))))))));
                                var_18 = ((/* implicit */int) min((min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_4)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5))))));
                            }
                        } 
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_14)) ? (var_5) : (var_5))) : (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_13)) : (var_4))))))));
                var_20 = ((/* implicit */unsigned int) var_5);
                var_21 = ((/* implicit */unsigned char) max((max((((/* implicit */int) var_16)), ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) var_13)), (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
    var_23 -= max((max(((+(var_15))), (((/* implicit */unsigned long long int) min((var_4), (var_4)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (var_4)))));
}
