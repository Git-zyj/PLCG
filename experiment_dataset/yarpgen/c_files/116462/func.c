/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116462
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)44898), (((/* implicit */unsigned short) (unsigned char)177)))))) <= (min((var_8), (((/* implicit */unsigned long long int) (~(var_9)))))))))));
    var_21 = var_8;
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_0)), (var_8)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0])) + (((((/* implicit */long long int) arr_0 [i_0])) + (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) 0ULL);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) ((525026601) > (((/* implicit */int) (unsigned char)189))))))))))));
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) << (((max((((/* implicit */unsigned int) (signed char)103)), (var_9))) - (2258714867U))))))));
            var_26 ^= ((((/* implicit */_Bool) min((-2873914849940703721LL), (arr_1 [i_0])))) ? ((-((+(arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_5 [i_1]) < (arr_1 [i_0])))))));
        }
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_9 [i_2] [(unsigned short)5]), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)102)))))))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (var_17) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])))))))));
        arr_10 [i_2] = ((/* implicit */int) arr_6 [i_2]);
        var_28 += ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) 12435726110327072344ULL)) ? (((/* implicit */int) arr_7 [i_2])) : (arr_8 [i_2] [i_2]))), (((/* implicit */int) arr_7 [i_2]))))), (arr_9 [6U] [(unsigned char)12])));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 12; i_3 += 3) 
    {
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [12LL] [0])) / (((/* implicit */int) arr_6 [i_3 - 2]))));
        var_30 = ((/* implicit */int) arr_12 [i_3] [i_3]);
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-121)))))));
    }
    var_32 = ((/* implicit */unsigned char) ((464709606U) >> ((-(18446744073709551615ULL)))));
}
