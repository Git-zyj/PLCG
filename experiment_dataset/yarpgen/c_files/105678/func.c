/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105678
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) max(((short)22024), (var_19)))) ? (((/* implicit */unsigned long long int) -355088609)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (unsigned short)65528))))))))));
                    arr_7 [i_0] [i_1] [i_2 - 3] [i_1] &= ((/* implicit */int) ((unsigned long long int) var_17));
                    var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (5639644715877841265ULL))) ? (((((/* implicit */_Bool) var_15)) ? (1746374854) : (((/* implicit */int) (signed char)-124)))) : (var_6)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (_Bool)1);
    var_23 = min((var_3), (((/* implicit */long long int) var_4)));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned short)55324))))))), (var_8)));
    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(max((0ULL), (((/* implicit */unsigned long long int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1271737069)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((136072637976112517LL) >= (((/* implicit */long long int) 1745935185))))) : ((~(((/* implicit */int) var_11)))))) : (((/* implicit */int) var_15))));
}
