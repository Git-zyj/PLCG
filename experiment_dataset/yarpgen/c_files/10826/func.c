/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10826
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
    var_13 = var_2;
    var_14 = min((((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (unsigned short)192)))))), (var_3));
    var_15 = ((/* implicit */long long int) ((unsigned int) ((signed char) var_9)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [2U] [2U] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0])) >> (((-6005459650300370626LL) + (6005459650300370642LL)))))));
        arr_3 [(short)3] = ((/* implicit */unsigned short) min((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) min(((unsigned short)190), ((unsigned short)194)));
        var_16 ^= ((/* implicit */unsigned int) 1819471152350654733LL);
    }
    for (long long int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((short) ((arr_11 [i_2 + 1] [i_3] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_2 - 1])))))))));
                        var_18 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_10 [i_2 - 1])));
                        arr_18 [i_4] [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned short) arr_13 [i_2 + 1] [i_4])), ((unsigned short)182))), (((/* implicit */unsigned short) var_12))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned int) ((36847975U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2 - 1])))))))));
    }
}
