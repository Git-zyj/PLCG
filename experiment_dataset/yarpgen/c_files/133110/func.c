/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133110
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((var_14) ^ (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_11))))) : (((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [4U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_0))));
        var_19 &= ((/* implicit */unsigned char) ((arr_0 [i_0]) - (arr_0 [i_0])));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_17)) ? (arr_0 [0LL]) : (arr_2 [i_1] [i_1])))));
        var_21 ^= ((/* implicit */unsigned int) ((unsigned char) (unsigned short)62048));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_22 = ((/* implicit */int) ((signed char) arr_10 [i_1]));
            arr_11 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (signed char)-38))) ^ ((-(((/* implicit */int) var_11))))));
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)12))) | ((+(((/* implicit */int) var_8))))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_23 = ((((/* implicit */_Bool) arr_14 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (var_7));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    {
                        arr_22 [i_1] [i_3] [i_1] [i_5 - 1] = ((/* implicit */unsigned int) (signed char)-94);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (var_15))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_6])) : (((/* implicit */int) var_10))))))))));
                            arr_25 [i_1] [i_3 + 1] [i_1] [(signed char)2] [(signed char)2] [(signed char)2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_1]))));
                        }
                        arr_26 [10LL] [i_3] [i_4] [i_5] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) * (((/* implicit */int) (_Bool)0))))) & ((+(1768614056002281906LL)))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_17 [i_1] [i_3] [i_3] [i_1])) ^ (((/* implicit */int) arr_10 [i_1]))))));
            arr_27 [i_1] = ((/* implicit */signed char) (unsigned short)35046);
        }
    }
}
