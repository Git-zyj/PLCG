/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13553
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
    var_18 &= ((/* implicit */short) ((long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)27))))) % (var_17))));
    var_19 ^= ((/* implicit */int) var_14);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_4))));
    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)31)))))))) ? (max(((~(5590166248799686881ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) || (((/* implicit */_Bool) var_3))))))) : (min((((/* implicit */unsigned long long int) var_9)), (max((12553253529665667784ULL), (((/* implicit */unsigned long long int) var_5))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [8] [8U] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (max((((18446744073709551598ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))), (((/* implicit */unsigned long long int) var_16))))));
                arr_6 [(unsigned char)8] [i_0] [i_1 - 2] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [18ULL])), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [(unsigned short)6])), (var_6))))) : (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-18470)))))));
                var_22 -= ((/* implicit */_Bool) min((max((arr_2 [i_1 - 1]), (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [i_1 - 1])))))));
                var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))))));
            }
        } 
    } 
}
