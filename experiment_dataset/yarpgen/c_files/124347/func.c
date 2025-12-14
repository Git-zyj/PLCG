/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124347
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (1703305875U) : ((+(349042624U)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_0 [i_2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */long long int) max((var_13), (((/* implicit */short) var_4))))), (arr_2 [i_0] [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_1] [i_4])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_2]))))) ? (((/* implicit */int) max((var_2), (arr_9 [i_0 - 3] [12ULL] [9] [i_3] [i_4])))) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((349042624U) >> (((/* implicit */int) (short)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7479))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (short)-7490))))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (short)14694))));
                                var_22 = ((/* implicit */unsigned short) (+((-(arr_2 [i_0 - 1] [i_0] [i_3 + 1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (short)14697);
                    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)112))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [13U] [i_2]))) == (349042624U)))))), (((/* implicit */int) min((arr_9 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_0 + 1]), (((/* implicit */short) max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]), (((/* implicit */unsigned char) var_10))))))))));
                    var_25 &= ((/* implicit */short) (-(var_1)));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) (+((-(arr_4 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) % (((/* implicit */int) var_3)))))));
        arr_16 [0U] [i_5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_5] [i_5 - 1] [(unsigned short)11] [i_5 - 2] [(signed char)1]))));
        arr_17 [(signed char)6] |= ((/* implicit */_Bool) ((signed char) var_0));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5 - 3] [i_5 + 1] [i_5 - 3] [13U])) ? (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5] [i_5 - 2])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) * (13956144054641409703ULL)))));
    }
    for (signed char i_6 = 3; i_6 < 16; i_6 += 4) /* same iter space */
    {
        arr_20 [i_6] = (signed char)57;
        arr_21 [i_6] = ((/* implicit */unsigned long long int) 3945924672U);
        arr_22 [12ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (-5869811894451742573LL) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3327551809U)) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) (unsigned char)160))))) : ((~(min((9223372036854775797LL), (((/* implicit */long long int) var_2))))))));
        var_28 = ((/* implicit */short) var_3);
        arr_23 [i_6] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (3945924672U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [13U] [i_6] [i_6] [i_6] [i_6 - 3])))))), (max(((+(var_9))), (max((((/* implicit */unsigned long long int) var_12)), (16778747266823013251ULL))))));
    }
    var_29 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_13)) & (((/* implicit */int) var_13)))), (((/* implicit */int) var_11))));
    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (short)-1))));
}
