/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112972
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2 + 1] [i_3 - 2] = ((/* implicit */short) min((14461321438968458163ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned char)92)) - (68)))))) ? (((/* implicit */int) (short)-460)) : (((/* implicit */int) (signed char)-108)))))));
                        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (16210218152426121636ULL)))));
                        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)5)))) ? (((arr_5 [(unsigned char)21] [i_2]) ? ((-(2236525921283429979ULL))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) 1LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_12 ^= ((/* implicit */int) min((16210218152426121636ULL), (((/* implicit */unsigned long long int) (signed char)-22))));
    }
    var_13 = var_5;
    var_14 = ((/* implicit */unsigned long long int) var_0);
}
