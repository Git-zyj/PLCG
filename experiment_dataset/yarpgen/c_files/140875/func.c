/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140875
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
    for (unsigned char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((var_0), (var_10)));
                    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3557067302U)), (18446744073709551615ULL)))) ? (18446744073709551603ULL) : (((((/* implicit */_Bool) (unsigned char)252)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))))));
                    var_19 ^= min((((unsigned short) (unsigned short)22852)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) || (((/* implicit */_Bool) 0ULL))))));
                    var_20 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 15615735566420241374ULL)) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 3])))), ((~(((/* implicit */int) (unsigned short)65526))))));
                    var_21 = ((/* implicit */_Bool) (unsigned short)42687);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) var_2)) > (((/* implicit */int) var_3))))))) + ((-(((/* implicit */int) var_5))))));
}
