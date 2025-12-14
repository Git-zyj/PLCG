/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159506
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min(((~(var_9))), (((((/* implicit */_Bool) (unsigned short)57664)) ? (((/* implicit */int) (unsigned short)7871)) : (((/* implicit */int) (unsigned short)57654))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) var_18))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))))))), (((unsigned long long int) ((short) var_13))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned int) ((signed char) max((((unsigned int) var_16)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_1))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)57673)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)7839)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((var_5), (((/* implicit */unsigned int) var_6))))));
}
