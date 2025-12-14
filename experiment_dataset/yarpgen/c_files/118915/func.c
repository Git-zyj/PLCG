/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118915
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
    var_19 = ((/* implicit */_Bool) var_3);
    var_20 = ((/* implicit */unsigned short) ((var_13) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)32)), (var_16)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                arr_5 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)32)), (9223372036854775807LL)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_2] [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned char) var_16);
                                var_23 = ((/* implicit */signed char) ((((var_18) / (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_3 - 1])))) / (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3 - 2])) ? (((/* implicit */unsigned long long int) var_13)) : (var_17)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)12)), (3306898482U)));
}
