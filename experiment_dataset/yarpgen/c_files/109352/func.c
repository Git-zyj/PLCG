/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109352
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
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_0 [i_0])))));
        var_18 = ((/* implicit */long long int) ((arr_1 [i_0]) && (((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) arr_1 [i_0])))));
        var_19 = ((/* implicit */unsigned short) var_1);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_20 &= ((/* implicit */_Bool) var_7);
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_1]);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 21; i_4 += 2) 
            {
                var_21 = (+(((/* implicit */int) var_0)));
                arr_17 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (((((/* implicit */int) (unsigned char)5)) + (((/* implicit */int) var_0)))))))));
            }
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                arr_20 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_3] [i_3]))));
                var_23 |= ((/* implicit */unsigned char) ((arr_5 [i_1]) & (((/* implicit */int) arr_7 [i_5]))));
            }
            for (long long int i_6 = 2; i_6 < 23; i_6 += 3) 
            {
                var_24 = ((((/* implicit */_Bool) ((((var_13) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_10 [i_3])) + (5697))) - (1)))))) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) var_3)));
                arr_23 [i_1] [i_6] = ((/* implicit */unsigned short) arr_15 [i_3] [i_6] [i_6 - 1] [i_6 - 2]);
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_6 + 1]))));
            }
            arr_24 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_11 [i_3])))) ? (var_17) : ((~(((/* implicit */int) arr_7 [i_3]))))));
        }
        arr_25 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_11 [(_Bool)1]) : (arr_13 [i_1]))) > ((((~(var_13))) * (((/* implicit */long long int) ((/* implicit */int) ((var_14) > (var_1)))))))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((arr_12 [i_1]) ? (arr_19 [i_1] [i_1] [i_1]) : ((~(var_11))))) % ((-((+(((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned char)20] [i_1])))))))))));
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_15)), (var_6))) >= (((/* implicit */long long int) ((/* implicit */int) var_16))))))) % (var_13)));
}
