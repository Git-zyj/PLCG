/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101620
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_15 ^= ((unsigned int) ((unsigned int) arr_3 [i_0] [i_1]));
            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) 11975920649142679810ULL)) || (((/* implicit */_Bool) 6470823424566871806ULL)))))));
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) 6470823424566871806ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)255))))))))));
                var_18 *= ((/* implicit */unsigned int) (+(18446744073709551615ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 6470823424566871800ULL);
                    var_19 = ((/* implicit */long long int) ((int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 2135085006U)))));
                    var_20 ^= ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) -7258703192425218164LL)));
                }
                var_21 ^= ((/* implicit */unsigned int) (-(var_3)));
            }
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_22 += ((/* implicit */long long int) (((_Bool)1) ? (var_1) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1]))));
                var_23 = ((/* implicit */long long int) (unsigned char)167);
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_0] = ((/* implicit */long long int) (+(var_9)));
                arr_17 [i_0] [(unsigned char)10] [i_5] [i_1] &= ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)47)))) && (((/* implicit */_Bool) -9223372036854775783LL))));
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_0] [i_0 + 1]));
                arr_22 [i_0] [i_1] [i_0] = (-9223372036854775807LL - 1LL);
            }
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
        {
            arr_25 [i_0] [i_0] = ((/* implicit */_Bool) 6470823424566871806ULL);
            var_25 &= (-(((/* implicit */int) arr_20 [i_7] [i_0 - 1] [2LL])));
        }
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)8] [i_0 - 1] [i_0]))));
        arr_26 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_27 += ((/* implicit */unsigned short) 3569017325195966693LL);
            arr_33 [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((unsigned char) arr_28 [i_8]));
        }
        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((unsigned char)183), (((/* implicit */unsigned char) (_Bool)0)))))));
        arr_34 [i_8] = ((/* implicit */long long int) ((signed char) ((unsigned char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)104))))));
    }
    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */long long int) (-(11975920649142679810ULL)));
        arr_38 [i_10] [i_10] = ((/* implicit */signed char) 3120499049130901181LL);
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) < (max((2682631299825766761LL), (((/* implicit */long long int) (+(var_9)))))))))));
    }
    var_30 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)47))));
}
