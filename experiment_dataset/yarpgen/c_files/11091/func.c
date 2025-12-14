/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11091
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) min((min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_7)), (arr_7 [i_0])))), (min((((/* implicit */long long int) arr_5 [i_1])), (arr_6 [i_2] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_9)))) ? (0U) : (((((/* implicit */_Bool) 9)) ? (2013265920U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7698))))))))));
                    arr_9 [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-576460752303423488LL), (3237394384782995960LL)))) ? (((((1329315244082706496LL) ^ (8355960598602637095LL))) << (((min((((/* implicit */int) var_6)), (2087551797))) - (60178))))) : (min((((/* implicit */long long int) (unsigned short)27876)), (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)2570))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)8103), ((short)4080)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_10)))) || (((/* implicit */_Bool) min((10500453618573680781ULL), (((/* implicit */unsigned long long int) (unsigned char)122))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) ? (var_3) : (min((var_10), (((/* implicit */long long int) var_9))))))));
}
