/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117961
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned short)63))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_1 [i_0])) - (25711)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((((((/* implicit */int) arr_1 [i_0])) - (25711))) + (56246))) - (1))))));
                    var_19 = ((/* implicit */unsigned long long int) var_15);
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_8 [i_2] [i_2])));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) var_16);
                }
            } 
        } 
        arr_12 [(short)0] &= ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 + 3]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) var_9);
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3 + 3]))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) << (((arr_17 [i_3 + 1]) - (2268104494U))))))));
            var_24 = ((/* implicit */unsigned char) var_1);
            var_25 += ((/* implicit */unsigned int) (((~(var_1))) >= (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 + 2] [i_3 + 2])))));
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
        {
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) arr_16 [i_3 + 1] [i_3 + 1]));
            arr_24 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_17);
        }
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned short) 268435455LL)))));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_27 = ((/* implicit */_Bool) arr_25 [i_6] [(_Bool)1]);
        var_28 *= max((((/* implicit */unsigned long long int) ((arr_25 [i_6] [i_6]) <= (18446744073709551615ULL)))), (arr_25 [i_6] [i_6]));
    }
    var_29 = var_12;
    var_30 = ((/* implicit */unsigned char) var_15);
    var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_5))))) : (var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_2)));
}
