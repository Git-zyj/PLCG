/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134387
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))));
        var_12 ^= ((/* implicit */_Bool) ((unsigned int) 18446744073709551615ULL));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) var_0);
        var_14 = ((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (18446744073709551599ULL));
    }
    var_15 = var_4;
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */short) arr_1 [i_2]);
        arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) 1561790965)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2])))));
    }
    var_16 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */_Bool) 1ULL);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (18446744073709551610ULL)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_9)));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (arr_9 [i_5 - 3])));
            var_19 ^= ((/* implicit */unsigned int) 14288924714517914354ULL);
            var_20 ^= ((/* implicit */short) ((long long int) arr_3 [i_4]));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 3])))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_26 [i_6] [i_5] [i_8 + 1] [i_7] [i_8 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6])))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)63583)))))));
                            arr_27 [i_4] [i_5] [i_6] [i_5] [i_8 + 1] = ((unsigned int) var_4);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1ULL) : (5ULL)));
                            var_23 = ((/* implicit */long long int) arr_10 [i_6]);
                        }
                    } 
                } 
            } 
        }
        arr_28 [i_4] [i_4] &= ((/* implicit */unsigned char) var_2);
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4] [i_4] [(_Bool)1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_4] [0LL] [0LL] [i_4]))))) ? (((((/* implicit */_Bool) 3002419166278668366ULL)) ? (18446744073709551602ULL) : (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
        arr_29 [i_4] [i_4] = ((/* implicit */_Bool) 1ULL);
    }
}
