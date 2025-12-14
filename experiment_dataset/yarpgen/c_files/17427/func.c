/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17427
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
    var_12 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
    var_13 &= ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_14 = ((/* implicit */int) arr_1 [i_0] [i_1]);
            arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((arr_0 [2LL]) + (2147483647))) >> (((((/* implicit */int) ((short) 271383317U))) + (1274)))))), (arr_4 [7ULL] [i_1] [(short)5])));
            var_15 &= ((/* implicit */unsigned char) (+(((arr_7 [i_1 + 2] [i_0]) ? ((~(((/* implicit */int) var_8)))) : (arr_0 [i_0])))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) var_3);
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (((~(arr_13 [i_4]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_16 [i_5] [i_5] [i_2])))))))));
                        arr_20 [12LL] [i_3] [i_5] [i_4] [i_4] = ((/* implicit */unsigned char) ((short) arr_19 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5]));
                    }
                } 
            } 
            arr_21 [i_3] &= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : (arr_11 [i_2]))));
            arr_22 [i_2] = ((/* implicit */unsigned int) (unsigned char)255);
        }
        var_17 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
    }
    /* vectorizable */
    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2682410282408861730ULL) ^ (var_2)))) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 1])) : (arr_2 [i_6 + 1])));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 9223372036854775807LL))) + (-615397244)));
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_6] [i_6])) ? (arr_5 [i_6 - 2] [i_6] [16U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
    {
        var_21 = (!(((/* implicit */_Bool) (((+(0ULL))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_9 [i_7 + 1])), (9223372036854775797LL))))))));
        var_22 -= ((/* implicit */unsigned char) ((int) ((arr_25 [i_7]) | (arr_23 [i_7 - 1]))));
        var_23 = ((/* implicit */unsigned char) ((arr_16 [i_7] [i_7] [i_7 + 1]) & (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_16 [i_7] [i_7] [i_7 + 2])))));
        arr_27 [i_7] = ((/* implicit */long long int) (~(arr_25 [i_7 - 2])));
    }
}
