/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189256
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((0U) << (((1446025495U) - (1446025471U)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_0 + 2] [i_0 + 1])))) : (((/* implicit */int) ((unsigned char) (unsigned char)248)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)150)))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_7 [i_2 - 1] [i_0 + 1] [i_1] [i_0 + 1]))));
                var_17 = ((/* implicit */unsigned char) (unsigned short)17);
                var_18 = ((/* implicit */unsigned char) 0ULL);
            }
            /* vectorizable */
            for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) (~(arr_11 [i_3 - 1] [i_1 + 1] [i_0 - 1] [i_3])));
                var_20 = ((/* implicit */signed char) var_10);
            }
            var_21 = (unsigned char)227;
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-37))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13)) ? (9611198582318875036ULL) : (((/* implicit */unsigned long long int) 7558945049391301533LL))));
        }
    }
    for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_4 + 2])))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4 + 3] [i_4 + 2])) == (((/* implicit */int) arr_8 [5ULL] [5ULL] [5ULL]))))), (((((/* implicit */_Bool) 7446878382763919782ULL)) ? (((/* implicit */int) (short)15359)) : (((/* implicit */int) (unsigned char)168)))))) : (((((/* implicit */_Bool) min((arr_13 [i_4 + 3]), (((/* implicit */short) var_7))))) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) arr_8 [i_4 + 3] [i_4 + 3] [i_4 + 2]))))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7558945049391301540LL)) ? (((/* implicit */int) ((arr_11 [i_4 + 4] [i_4 + 1] [i_4 + 2] [i_4 + 3]) < (((/* implicit */int) var_9))))) : (((/* implicit */int) arr_13 [i_4]))));
        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (signed char)127)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 1) 
    {
        var_28 &= ((/* implicit */long long int) arr_13 [i_5]);
        var_29 = ((/* implicit */signed char) arr_13 [i_5]);
    }
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_17 [i_6] [i_6])))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 1] [i_6])) - (118)))))) ? (((/* implicit */long long int) arr_11 [6U] [i_6] [6U] [i_6])) : (((((var_4) + (9223372036854775807LL))) << (((arr_14 [i_6]) - (2062075347U))))))))));
        var_31 = ((/* implicit */unsigned long long int) (+((-(arr_12 [(short)16] [i_6 + 1])))));
    }
    for (short i_7 = 1; i_7 < 15; i_7 += 2) 
    {
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-30421))))) ? (((/* implicit */int) ((unsigned char) 3091232205U))) : ((~(((/* implicit */int) (_Bool)0))))))) ? (((16586030215468517150ULL) << (((15129266631146791656ULL) - (15129266631146791597ULL))))) : (((/* implicit */unsigned long long int) arr_12 [i_7] [i_7]))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)-77)) >= (((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((unsigned short) arr_20 [i_7] [i_7]))) : (((/* implicit */int) ((signed char) arr_3 [i_7 - 1])))));
    }
}
