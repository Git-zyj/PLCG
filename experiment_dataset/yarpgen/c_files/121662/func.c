/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121662
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [i_0] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_3]))) : (min((((/* implicit */unsigned int) arr_3 [i_3] [i_1])), (var_8)))))), (min((14025161838343196307ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12635)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (0LL))))))));
                            var_21 = arr_0 [i_3 + 1];
                            var_22 = ((/* implicit */short) max((4421582235366355323ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) != ((-2147483647 - 1))));
                        }
                    } 
                } 
                var_24 = ((long long int) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))), (((4421582235366355321ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) << (((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((short) ((long long int) (short)0)))) : (var_10)));
}
