/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142383
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
    var_10 = ((/* implicit */short) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) -3031682145324518659LL)) ? (((/* implicit */long long int) -30684026)) : (-3031682145324518659LL))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) : (arr_3 [i_0 + 3]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 0ULL);
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((9223372036854775807LL) << (((((arr_0 [i_0]) + (1646734525732161550LL))) - (58LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62480)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 4] [(signed char)2])) ? (((/* implicit */long long int) -2090363743)) : (arr_6 [i_0 + 2] [i_1 + 1])));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_1]))));
                var_14 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 3554333784726089203LL)) * (18446744073709551615ULL))) > (((/* implicit */unsigned long long int) ((long long int) 2891440739U)))));
                arr_14 [i_0 + 2] [i_1] [i_1] [i_0 + 2] = (unsigned char)241;
            }
        }
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 4; i_5 < 18; i_5 += 3) 
            {
                var_15 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) % (((/* implicit */int) arr_22 [i_3]))));
                var_16 -= ((unsigned char) arr_21 [i_3] [i_4 + 1] [i_5 - 3] [i_5 + 1]);
                var_17 = ((/* implicit */long long int) ((unsigned int) arr_16 [i_3]));
                arr_24 [i_3] [i_3] [i_3] [i_5] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)47974))));
            }
            var_18 = var_0;
            arr_25 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_3]))));
            arr_26 [(_Bool)1] = (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_17 [(unsigned char)18])) : (arr_20 [(signed char)1] [i_4 + 1]))));
        }
        var_19 = ((/* implicit */unsigned short) (((((_Bool)1) ? (-519676823) : (((/* implicit */int) arr_16 [i_3])))) <= (((/* implicit */int) var_3))));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3])) ? (7827335660442940531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))));
        var_21 = ((/* implicit */_Bool) (unsigned short)3042);
        arr_27 [11] = ((/* implicit */unsigned int) (-(arr_23 [i_3] [i_3])));
    }
    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_22 = ((/* implicit */long long int) arr_28 [i_6] [i_6]);
        var_23 = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (short)0)))));
        var_24 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned short)33446)), (18446744073709551585ULL))), (((/* implicit */unsigned long long int) arr_29 [i_6]))));
        arr_30 [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_6)))) >= ((+(((/* implicit */int) arr_28 [i_6] [i_6]))))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        var_25 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(_Bool)0])) - (((/* implicit */int) arr_9 [8LL]))))), (((((/* implicit */_Bool) (unsigned short)3042)) ? (456303431U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28381)))))));
        var_26 += ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) arr_1 [i_7] [i_7])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7]))))));
        var_27 += ((max((((long long int) arr_6 [i_7] [i_7])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_7] [0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) - (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)3)) >= (((/* implicit */int) arr_28 [i_7] [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7]))) - (var_4)))))))));
    }
    var_28 = ((/* implicit */unsigned int) max((((long long int) min((((/* implicit */short) var_7)), ((short)2)))), (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (((/* implicit */signed char) (_Bool)0))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)87))))))))));
}
