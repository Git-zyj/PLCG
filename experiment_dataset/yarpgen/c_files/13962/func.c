/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13962
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((short) min((var_5), (((/* implicit */unsigned int) var_8))))))));
                var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_14)) + (((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) 0U)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */unsigned short) ((signed char) 4310115175490502557ULL));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (short)-1)) ? (((unsigned long long int) (-2147483647 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [(short)1] [i_1] [i_2] [i_3 - 2])))))));
                        }
                    } 
                } 
                var_18 -= (~(((/* implicit */int) (short)(-32767 - 1))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) ((((((var_9) + (9223372036854775807LL))) << (((3143982226U) - (3143982226U))))) / (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1150985070U)) ? (3143982250U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
}
