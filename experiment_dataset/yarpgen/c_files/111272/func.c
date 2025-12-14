/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111272
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */long long int) -99307656)) & (arr_2 [(short)3]))) & (((/* implicit */long long int) min(((-(16744448))), ((~(((/* implicit */int) (_Bool)1))))))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) (_Bool)1);
                    var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1379834566)) ? (((/* implicit */int) arr_1 [i_0])) : (-1379834548)))))) ? (1379834566) : (((/* implicit */int) ((short) 4)))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) ((_Bool) arr_10 [i_0] [i_0 - 1] [i_1 + 1] [i_1])))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((short) (short)26176))) & ((-(((/* implicit */int) (short)18352)))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [20ULL])), (18446744073709551615ULL)))) ? ((-((~(((/* implicit */int) arr_12 [(short)6] [i_1] [i_3] [i_1])))))) : (((/* implicit */int) min((((unsigned char) (unsigned char)4)), (((/* implicit */unsigned char) ((2833113176675335612ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18369))))))))))))));
                }
                for (int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                {
                    var_20 = min((((/* implicit */int) max((arr_13 [i_0 + 1] [i_1]), (((/* implicit */short) arr_12 [i_0 + 1] [i_0] [i_1] [i_1 + 1]))))), (((((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_1] [i_1 + 1])) | (((/* implicit */int) arr_1 [i_0 + 1])))));
                    var_21 += ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_0] [i_0] [i_4] [i_0]));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)101)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5])) && (((/* implicit */_Bool) 1379834561)))))) | (((3233701566U) ^ (((/* implicit */unsigned int) 972808812)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_5])))));
                        var_23 = ((/* implicit */int) (unsigned short)63757);
                        var_24 = ((/* implicit */_Bool) (-(((arr_12 [i_0 - 1] [i_1] [i_1] [i_5]) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_1] [i_5])))))));
                    }
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-18360)) ? (((/* implicit */int) (short)30542)) : (((/* implicit */int) (short)1991)))), (((arr_10 [i_0] [i_0] [i_1] [i_4]) | (((/* implicit */int) (unsigned char)41))))))) ? (((/* implicit */long long int) ((972808812) % (((((/* implicit */_Bool) 9948443546934077044ULL)) ? (972808812) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) (unsigned short)15450)) : (((/* implicit */int) (unsigned char)224))))), (min((-9223372036854775800LL), (((/* implicit */long long int) 578281925))))))));
                }
                var_26 |= -354974664;
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18371))) : (18446744073709551610ULL))), (((/* implicit */unsigned long long int) ((578281935) >= (((/* implicit */int) (unsigned short)0))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)248)))));
    var_28 = min((1721178712), (((/* implicit */int) (short)-26176)));
}
