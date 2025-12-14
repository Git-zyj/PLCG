/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128233
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) 2147483637);
        var_19 &= ((/* implicit */unsigned char) (~(arr_1 [i_0] [i_0])));
        arr_2 [i_0] &= ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_3)))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_3))));
        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 859417436170109560ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (min((var_12), (var_1))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1]))) : (644248740)));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            var_23 = ((/* implicit */signed char) ((arr_8 [i_3]) ^ (((/* implicit */int) arr_5 [i_3 - 2] [i_3]))));
            var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) arr_5 [(signed char)6] [i_3]))));
        }
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
        {
            arr_13 [(short)6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4 - 2] [i_4]))) : (var_2)));
            arr_14 [i_4] [i_2] = (~(((arr_8 [i_4 + 1]) << (((((((/* implicit */int) arr_9 [(short)0])) + (50))) - (14))))));
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_25 *= ((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5] [i_2])) ^ (((/* implicit */int) arr_16 [i_5] [i_2])))))));
            arr_17 [i_2] = ((/* implicit */int) arr_1 [i_5] [i_2]);
            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) ((unsigned short) var_6))))) : (((/* implicit */int) ((signed char) ((var_17) % (((/* implicit */long long int) 479500740U))))))));
        }
        arr_18 [i_2] = ((/* implicit */signed char) ((unsigned int) min((var_11), (((/* implicit */unsigned int) max((var_9), (((/* implicit */short) (_Bool)0))))))));
        arr_19 [i_2] [i_2] = ((/* implicit */short) ((max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2]))) ? (min((((/* implicit */unsigned long long int) (unsigned char)111)), (17587326637539442055ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_14)) : (var_2))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_23 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_6] [i_6]))));
        arr_24 [i_6] [i_6] = ((/* implicit */long long int) ((var_6) ^ (((/* implicit */int) arr_21 [i_6] [i_6]))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) var_9);
    }
    var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_16) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))) ? (min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) 1597703794U)))))) : (((((5135633949789571829ULL) == (((/* implicit */unsigned long long int) var_10)))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_17))))))));
}
