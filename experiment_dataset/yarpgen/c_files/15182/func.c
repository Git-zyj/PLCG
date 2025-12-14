/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15182
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
    var_10 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = (((!((!(((/* implicit */_Bool) arr_2 [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483633) == (var_9))))) % (arr_0 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 0U)))))));
        var_11 = ((/* implicit */unsigned short) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) == (((/* implicit */int) var_8))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_6 [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)0])))));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_1 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)0))));
            arr_11 [i_1] [i_2] = (!(((/* implicit */_Bool) ((arr_0 [i_1]) / (((/* implicit */unsigned long long int) var_3))))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_15 [i_3] [i_2] [1] [(unsigned short)8] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [(unsigned short)6] [i_3] [(signed char)4])) >= (((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                arr_16 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_1 [i_1 + 1] [2LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_13 += ((/* implicit */long long int) 15ULL);
                var_14 *= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                arr_21 [i_4] [i_2] [(signed char)8] [i_2] = ((/* implicit */unsigned short) (+(17732923532771328ULL)));
            }
            var_15 += ((/* implicit */unsigned short) ((18446744073709551612ULL) | (((/* implicit */unsigned long long int) 1125350151028736LL))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 += (!(((/* implicit */_Bool) arr_7 [i_1 + 1])));
            arr_24 [i_1] [i_5] [8U] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_9 [(_Bool)0])))));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            arr_29 [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_2))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            arr_32 [i_1] [i_7] = ((/* implicit */int) ((arr_7 [i_1 + 1]) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)9)))))));
            var_18 += ((/* implicit */unsigned short) (+(var_2)));
            var_19 *= ((/* implicit */long long int) (_Bool)1);
            var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_1 + 1]))));
            var_21 -= ((/* implicit */unsigned char) (_Bool)1);
        }
    }
}
