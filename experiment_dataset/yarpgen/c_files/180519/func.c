/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180519
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
    var_13 = ((/* implicit */int) ((min((((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31157))) : (-4232002050201608228LL))), (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4294967295U))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31157)) ? (((/* implicit */int) (short)-31157)) : (((/* implicit */int) (short)-31156))));
                var_15 = ((/* implicit */signed char) (short)31157);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) arr_9 [i_0] [i_3]);
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1])))) * (((((/* implicit */_Bool) (short)-31144)) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (short)-31135)))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)31157)) ? (((/* implicit */int) (unsigned short)22516)) : (((/* implicit */int) (short)31144))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31152))) : (2170738334281287839ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))) : (((/* implicit */unsigned long long int) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1])) % (((/* implicit */int) max(((short)-31144), ((short)-23802))))))) ? (((/* implicit */int) arr_1 [i_1] [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_2)))))))))));
            }
        } 
    } 
}
