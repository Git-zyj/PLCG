/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186596
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) max((((arr_3 [i_0 + 2]) ? (((/* implicit */int) arr_3 [i_0 + 4])) : (((/* implicit */int) arr_3 [i_0 - 1])))), ((~(((/* implicit */int) arr_6 [i_0 + 1]))))));
                    var_20 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((arr_1 [i_0 + 4]) > (arr_1 [i_0 + 4])))), (min((((/* implicit */unsigned short) max((var_19), (var_6)))), (min((((/* implicit */unsigned short) var_2)), (var_18)))))));
                    var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) max((-3664838733014122298LL), (((/* implicit */long long int) 3841793815U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_19))))))) : (max((((var_14) % (((/* implicit */unsigned long long int) arr_1 [i_2])))), (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                    var_22 = ((/* implicit */long long int) ((short) ((unsigned long long int) var_5)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (~(((min((var_10), (((/* implicit */unsigned long long int) var_11)))) / (((/* implicit */unsigned long long int) ((int) var_16)))))));
}
