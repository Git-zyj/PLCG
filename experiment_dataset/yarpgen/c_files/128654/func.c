/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128654
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 += ((/* implicit */unsigned long long int) (unsigned short)0);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-7)) ? (max((((((/* implicit */_Bool) 2147483647)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))), (((/* implicit */unsigned long long int) (unsigned short)8191)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10)))));
                var_21 += ((/* implicit */unsigned int) (((!(((((/* implicit */int) (unsigned short)56043)) <= (((/* implicit */int) (short)32351)))))) ? ((+(min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_14)))))) : (((/* implicit */long long int) (~(min((773341405), (var_6))))))));
            }
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)230)), (arr_8 [i_0] [i_0] [i_1])))) || (((/* implicit */_Bool) 1789860538876071612ULL)))))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    arr_18 [i_0] [i_3] [i_4] [i_5 - 2] [i_5 + 1] = (short)8176;
                    arr_19 [i_0] [i_0] [i_4] [i_5 - 1] = ((/* implicit */unsigned short) arr_16 [i_4 - 1] [i_4 - 1] [i_0] [i_5] [i_5 - 1] [i_5 - 1]);
                    arr_20 [i_5 - 2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) arr_0 [i_4 + 1]))));
                    arr_21 [i_3] [i_3] [i_4] [i_5] [i_4] [i_4] |= ((/* implicit */unsigned long long int) 4U);
                }
                var_22 = ((/* implicit */unsigned short) var_18);
                var_23 += ((/* implicit */unsigned long long int) 178294373U);
            }
            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_4 [i_6] [i_3] [i_0])) : (((/* implicit */int) var_13)))))));
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0] [i_6]);
            }
            var_25 |= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)65535));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_2))))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_17))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_27 [i_0] [i_7] &= ((/* implicit */unsigned char) 18446744073709551615ULL);
            arr_28 [i_7] [i_0] |= (unsigned char)159;
            var_28 = ((/* implicit */short) max((var_28), (var_8)));
        }
        var_29 = ((/* implicit */unsigned short) ((26U) / (((/* implicit */unsigned int) arr_2 [i_0]))));
        var_30 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)235))));
    }
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned short) var_16);
        arr_33 [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((var_18), (((/* implicit */int) arr_30 [i_8] [i_8]))))), (max((((/* implicit */unsigned long long int) ((var_18) / (((/* implicit */int) arr_29 [i_8]))))), (max((var_10), (((/* implicit */unsigned long long int) var_8))))))));
    }
    var_31 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) var_13)) << (((var_15) - (12404594616139427173ULL))))) | (((((/* implicit */_Bool) 10935778668358714138ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-54)))))));
    var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) (short)13618)) : (max((((/* implicit */int) (short)32767)), (1918367673)))));
}
