/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134838
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
    var_14 ^= ((/* implicit */signed char) (unsigned char)255);
    var_15 -= ((/* implicit */unsigned short) ((var_7) / (((/* implicit */long long int) max(((-(((/* implicit */int) (short)-28640)))), (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [(signed char)2] |= ((/* implicit */short) (!((!(((((/* implicit */int) (signed char)0)) != (((/* implicit */int) var_2))))))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 3157956303U)) ? (((/* implicit */long long int) 4179668883U)) : ((((_Bool)0) ? (((/* implicit */long long int) 4294967275U)) : ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) ^ (4058208879U))))));
                    arr_10 [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [(unsigned short)9] [i_1] [i_1])) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_1))), (((/* implicit */unsigned long long int) 661508996U))));
}
