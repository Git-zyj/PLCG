/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173389
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_6))));
    var_14 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (max((((/* implicit */unsigned long long int) var_9)), (var_1))))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) ((signed char) 20ULL))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (((unsigned long long int) arr_2 [i_0])))))));
        var_16 = ((/* implicit */signed char) var_1);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) | (1842246392U)))), (max((max((((/* implicit */unsigned long long int) var_0)), (var_2))), (((/* implicit */unsigned long long int) var_9)))))))));
            var_18 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) | (1405264656U))) >= (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1])), ((-(((/* implicit */int) var_9)))))))));
            var_19 = ((/* implicit */short) arr_4 [i_0] [i_1]);
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_20 = ((/* implicit */signed char) (~(arr_0 [i_2 - 2])));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_3))))))));
            arr_7 [(signed char)5] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_22 ^= ((/* implicit */signed char) arr_14 [8ULL] [6ULL] [i_3]);
            arr_16 [i_3] [i_3] [i_3] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_4] [i_3]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_23 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21231)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))))) != (((((/* implicit */_Bool) arr_10 [i_3] [i_5])) ? (var_8) : (15493713963031814188ULL)))));
            arr_19 [i_3] [i_5] = ((/* implicit */unsigned int) arr_18 [i_3] [i_5] [9ULL]);
            arr_20 [i_3] [i_3] = ((/* implicit */signed char) arr_17 [i_3] [i_3]);
            arr_21 [i_3] [i_3] = ((/* implicit */unsigned int) (signed char)-16);
        }
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_24 |= var_11;
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (arr_17 [i_3] [i_6]) : (arr_17 [i_3] [i_3])));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) == (var_8)))) >> (((((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) var_3)))) + (16))))))));
        }
        arr_25 [i_3] = ((/* implicit */signed char) arr_14 [(short)6] [i_3] [(short)6]);
    }
}
