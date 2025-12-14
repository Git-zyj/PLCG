/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180453
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (((var_3) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (((~(var_7))) != (((var_1) ^ (var_0))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (min((((/* implicit */long long int) var_10)), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) var_5))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((max((var_0), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_2))))))), (((/* implicit */long long int) (_Bool)1))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_1))));
            arr_8 [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [(unsigned char)0])) ? (((/* implicit */int) arr_4 [i_1])) : (var_11))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_1])))))))));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (arr_1 [i_1]))))));
        }
        var_16 *= ((/* implicit */unsigned short) arr_1 [9ULL]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [(unsigned char)6] = ((/* implicit */_Bool) arr_9 [i_3] [i_3]);
        arr_12 [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (-(arr_9 [i_3] [(short)21])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : ((~(arr_9 [i_3] [i_3])))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (arr_9 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_10 [i_3]))))));
    }
}
