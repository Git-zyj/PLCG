/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185541
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */int) var_5)), (-1902729280)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 &= ((/* implicit */_Bool) (~(((/* implicit */int) (short)7518))));
        var_12 = ((/* implicit */long long int) ((unsigned short) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)4639)))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_6), (((/* implicit */long long int) (short)-14484)))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-14479)) + (2147483647))) >> (((var_0) - (5820362722408906200LL))))))))) ? (((arr_0 [i_0]) / (4550142573085551514ULL))) : (((((/* implicit */_Bool) min((2ULL), (((/* implicit */unsigned long long int) (signed char)-125))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) ((unsigned short) ((short) var_0)));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_0) & (((/* implicit */long long int) ((/* implicit */int) (short)-14474))))), (var_6)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14465)))));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 15; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_9 [i_3] [i_3]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (1400672962622698979LL)))) : (min((((/* implicit */unsigned long long int) (unsigned char)224)), (2ULL)))))) ? ((((~(3669921589143066630ULL))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_3 - 1] [(unsigned char)16] [(unsigned char)16] [i_3])), (1400672962622698984LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_1), (((/* implicit */signed char) (_Bool)1)))), (min((((/* implicit */signed char) (_Bool)1)), (var_9)))))))));
        arr_10 [i_3] = ((/* implicit */unsigned char) ((((min((-1400672962622698967LL), (((/* implicit */long long int) (unsigned char)252)))) + (9223372036854775807LL))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_11 [i_3] = var_3;
    }
}
