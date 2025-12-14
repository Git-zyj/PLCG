/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14305
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned long long int) max((((524287U) * (524282U))), (4294443015U)));
                var_11 = ((/* implicit */unsigned int) max((var_11), (min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (511U)))));
                var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) != (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) 2964849503U)) : (18446744073709551615ULL)))))), (var_6)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) ((_Bool) (short)-9174))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_8 [i_3] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [i_3]))))));
                            arr_11 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((short) 524290U)))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (var_5)))) ? ((+(arr_2 [i_1]))) : (((/* implicit */unsigned long long int) max((var_6), (max((var_7), (((/* implicit */long long int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(511919501U))))));
}
