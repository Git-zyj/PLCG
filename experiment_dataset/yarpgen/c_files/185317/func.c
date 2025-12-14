/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185317
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
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */short) max((((_Bool) (short)13037)), (max(((_Bool)0), (max(((_Bool)1), ((_Bool)1)))))));
    var_20 = ((/* implicit */unsigned char) (short)-18111);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) (signed char)105);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 5380730882233030427ULL)) ? (((/* implicit */int) (unsigned short)61706)) : (0))), ((((!(arr_0 [(_Bool)1]))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (short)4751)) : (((/* implicit */int) (unsigned short)61711)))) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) (~(arr_1 [i_1])))) ? (arr_5 [(_Bool)1]) : (((/* implicit */int) var_12))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_8 [i_1 + 4] [8LL] &= ((/* implicit */signed char) ((arr_0 [i_1 + 4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_1 + 4]))));
            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))) : (arr_1 [i_1 + 1])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)7] [i_3]))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (arr_3 [i_1 + 4]) : (arr_3 [i_1 + 3])));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (short)13194))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13176)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2147483638))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) var_6);
                    var_30 = ((/* implicit */unsigned int) var_1);
                    var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_10 [(unsigned char)9])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_6 [(_Bool)0]))))));
                    arr_18 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) ((short) ((short) (short)26852)));
                }
                var_32 = ((/* implicit */signed char) (short)-26853);
            }
            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1 + 3])))) ? (((((/* implicit */_Bool) (signed char)-113)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
            {
                var_34 |= ((/* implicit */unsigned short) var_7);
                var_35 = ((/* implicit */signed char) (unsigned char)29);
            }
        }
        var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((signed char) arr_21 [i_1 + 2]))), (((((/* implicit */_Bool) arr_11 [i_1 + 4] [i_1 + 3])) ? (((/* implicit */unsigned long long int) arr_21 [i_1 - 1])) : (arr_11 [i_1 + 2] [i_1 + 2])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_37 &= ((/* implicit */unsigned short) ((int) arr_6 [i_7]));
        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)24))));
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) arr_5 [i_7]))));
    }
    var_40 = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) (unsigned char)231))), (((((/* implicit */_Bool) ((var_16) ? (var_8) : (((/* implicit */int) var_2))))) ? (var_7) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
}
