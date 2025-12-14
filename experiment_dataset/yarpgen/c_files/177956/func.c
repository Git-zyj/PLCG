/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177956
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) arr_0 [i_0]);
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (7850460264751139455LL)))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_4 [i_1] |= arr_1 [i_0] [i_0];
            var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
            var_18 = var_9;
            var_19 = ((((unsigned long long int) 18446744073709551615ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_1])))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */int) ((unsigned char) var_2));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((((/* implicit */_Bool) 7850460264751139455LL)) ? (var_14) : (arr_0 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8))))));
            var_21 ^= ((/* implicit */unsigned int) arr_0 [i_0]);
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 4; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [(short)10])) ? (-7850460264751139456LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */signed char) -7850460264751139455LL);
        var_24 += ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) ((long long int) var_11))), (max((0ULL), (((/* implicit */unsigned long long int) 0U)))))));
        arr_17 [i_5] [i_5 - 1] |= (~((((!(((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])))) ? (arr_7 [20ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5 + 1] [i_5]))))));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((var_9), (((/* implicit */unsigned long long int) var_5)))))));
    var_26 = ((/* implicit */long long int) min((((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((short) var_9)))));
    var_27 = ((/* implicit */unsigned long long int) var_8);
    var_28 = ((/* implicit */short) ((((unsigned long long int) ((unsigned long long int) -7850460264751139456LL))) != (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9)))))));
}
