/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172358
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min(((!((!(((/* implicit */_Bool) var_8)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)8188)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))))))))));
                                var_15 &= ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_13))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8175))) : (min((((/* implicit */long long int) 29360128U)), ((-9223372036854775807LL - 1LL))))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_8))));
}
