/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160308
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
    var_18 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 = (+(((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */long long int) var_5)) : (855599759936430636LL))));
        var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_1] [i_1])) % (arr_1 [i_1]))))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))));
        var_23 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_12)))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
    {
        var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [(unsigned char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)8])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [8]))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_15)))) + (((/* implicit */int) ((unsigned short) 4294967295U))))))));
        var_25 = ((/* implicit */unsigned char) 14U);
        var_26 = ((/* implicit */short) (~(((((4294967295U) != (((/* implicit */unsigned int) arr_1 [i_2 + 1])))) ? (((/* implicit */int) ((short) var_13))) : ((~(arr_1 [i_2])))))));
    }
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_27 = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((arr_12 [i_3 - 1] [i_3]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_9 [i_3] [i_3 + 2])) - (13503))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_3] [i_3 + 1])))))))) : (((/* implicit */unsigned long long int) ((((((((arr_12 [i_3 - 1] [i_3]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_9 [i_3] [i_3 + 2])) - (13503))) + (7237))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_3] [i_3 + 1]))))))));
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_3]))));
                }
            } 
        } 
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 25U)) ? (2466947166U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))))));
        var_29 = ((/* implicit */long long int) 4294967279U);
        var_30 = ((/* implicit */signed char) ((arr_10 [i_3] [i_3]) & ((~(arr_10 [i_3] [i_3])))));
    }
    var_31 &= (~((~(((/* implicit */int) var_16)))));
    var_32 -= ((/* implicit */unsigned int) var_8);
}
