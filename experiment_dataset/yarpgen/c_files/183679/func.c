/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183679
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (short)5521))))), (((long long int) (short)19474)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_3] [(unsigned short)8] [i_0] = ((/* implicit */unsigned long long int) var_1);
                        arr_12 [i_3] = ((long long int) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        } 
        var_13 -= ((/* implicit */short) ((long long int) -9223372036854775791LL));
        var_14 = ((((/* implicit */_Bool) (-(576460752303423487LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [6ULL] [i_0]) <= (((/* implicit */unsigned long long int) 576460752303423489LL)))))) : (((arr_2 [i_0]) - (((/* implicit */unsigned long long int) -1LL)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_15 += ((/* implicit */unsigned long long int) var_9);
        var_16 = ((((/* implicit */_Bool) ((-576460752303423481LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-15510)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 1LL))))))) : ((+(min((var_3), (((/* implicit */long long int) (unsigned short)65535)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_6))))) ? (((/* implicit */unsigned long long int) 16LL)) : (((min((((/* implicit */unsigned long long int) (short)4092)), (var_4))) / (((((/* implicit */_Bool) var_8)) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) 2LL))))))));
        var_17 = ((/* implicit */unsigned long long int) arr_16 [i_5]);
        var_18 = ((/* implicit */unsigned long long int) ((long long int) (((!(((/* implicit */_Bool) var_3)))) && (((((/* implicit */_Bool) arr_19 [(unsigned short)3])) && (((/* implicit */_Bool) arr_19 [i_5])))))));
    }
}
