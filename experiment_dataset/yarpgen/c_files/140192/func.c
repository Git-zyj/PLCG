/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140192
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_9) : (min((var_9), (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_4 [(short)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [2LL])) : (((/* implicit */int) arr_2 [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)48)) ? (arr_6 [10LL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))) || ((_Bool)1)));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_12))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((var_3), (((/* implicit */long long int) max((min((arr_8 [i_0] [i_0] [1ULL] [i_0]), (((/* implicit */short) var_15)))), (((/* implicit */short) arr_1 [(signed char)8]))))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) < (((/* implicit */int) var_7)))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4)) >> (((/* implicit */int) (unsigned char)14))));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_10 [i_4] [i_4]))))));
        var_25 = ((/* implicit */long long int) ((unsigned char) (~(arr_13 [i_4]))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        arr_17 [i_5 + 1] [i_5] = ((/* implicit */unsigned int) (-2147483647 - 1));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_20 [i_6] [(short)6] = ((/* implicit */signed char) 8987294065721510736LL);
            var_26 = ((/* implicit */signed char) 8987294065721510736LL);
        }
        arr_21 [(unsigned short)4] = ((/* implicit */unsigned int) (unsigned char)242);
        /* LoopSeq 3 */
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            arr_24 [i_5] [10] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) (short)-6864))));
            var_27 -= ((/* implicit */unsigned short) 6284403998581944424LL);
        }
        for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            arr_28 [i_5] [i_8] = ((/* implicit */_Bool) arr_25 [i_8] [i_8 + 1] [4U]);
            var_28 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((((long long int) arr_23 [i_5] [i_5 - 2] [(signed char)5])) + (129LL))) - (22LL)))));
        }
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            var_29 -= ((/* implicit */unsigned char) arr_4 [i_5]);
            var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_5 - 2] [i_5 - 2] [i_5 - 2])) || (((/* implicit */_Bool) arr_4 [i_5]))));
        }
    }
    var_31 = max((var_3), (((((/* implicit */long long int) (~(((/* implicit */int) var_15))))) - (min((var_9), (((/* implicit */long long int) 252U)))))));
    var_32 = ((/* implicit */unsigned int) max((var_32), (var_4)));
}
