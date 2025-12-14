/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131994
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(short)5] [(short)8] |= ((/* implicit */short) (~(((unsigned long long int) arr_0 [i_0 + 3]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(short)12] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
                    arr_10 [i_0] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_1 [i_0 - 1])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 2])))))));
                }
            } 
        } 
    }
    for (short i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_12 [i_3])), (var_10))), (((/* implicit */unsigned long long int) (-(arr_12 [i_3]))))))) ? (((((/* implicit */_Bool) arr_12 [i_3 - 4])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_3])), (arr_12 [(signed char)18])))) : (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_12 [20ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_12 [i_3]))) > (((((/* implicit */_Bool) arr_12 [(unsigned char)16])) ? (var_1) : (arr_12 [(short)4])))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+((+((-(((/* implicit */int) arr_11 [(short)12])))))))))));
    }
    var_15 = ((/* implicit */long long int) var_11);
}
