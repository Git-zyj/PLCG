/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176902
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+(var_7))))))) * (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_18)) % (((/* implicit */int) var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19185)))))))));
    var_20 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) (signed char)102);
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0 - 1]);
                                var_23 &= ((/* implicit */unsigned int) max((min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))), (max((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)15809)))), (((/* implicit */int) arr_6 [i_0] [i_0] [(short)1] [i_0 + 2]))))));
                                var_24 |= ((/* implicit */long long int) (unsigned short)64193);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
