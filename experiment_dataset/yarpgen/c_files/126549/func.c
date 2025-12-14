/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126549
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
    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-1) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)0))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        var_14 = ((/* implicit */short) (unsigned char)31);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((arr_7 [i_1]), ((-((+(((/* implicit */int) (_Bool)1))))))));
            var_16 = ((int) max((((/* implicit */long long int) arr_6 [i_1])), (max((arr_9 [i_1] [i_2] [i_2]), (((/* implicit */long long int) var_12))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_17 *= ((/* implicit */short) max((((unsigned long long int) (((_Bool)1) && ((_Bool)1)))), (((unsigned long long int) arr_5 [i_1]))));
            var_18 = ((/* implicit */unsigned char) max((((arr_9 [i_3] [i_3] [7]) - (arr_9 [i_1] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) arr_6 [i_1])) : (arr_0 [i_1])))));
        }
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_1])) / (4377264009606327271ULL)))));
    }
    var_19 = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_10)))))));
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (268435455LL)))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (4377264009606327280ULL) : (4377264009606327271ULL)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_8)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4)))))))));
}
