/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11385
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_15))))) ? (((/* implicit */int) ((unsigned char) (signed char)-61))) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_4 [i_1 - 1] [i_2 - 2]))));
                    arr_8 [i_0] [i_1 + 1] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3840)) ? (((((/* implicit */int) arr_5 [i_1 + 1])) + (((/* implicit */int) arr_5 [i_1 + 1])))) : (((/* implicit */int) arr_5 [i_1 + 1]))));
                    var_20 = ((/* implicit */signed char) (short)15265);
                }
                /* vectorizable */
                for (long long int i_3 = 4; i_3 < 13; i_3 += 4) 
                {
                    var_21 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_1] [i_0])))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)3820))));
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (short)6)) || (((/* implicit */_Bool) var_10))));
                    arr_13 [10] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (-542261867) : (var_0)));
                    /* LoopSeq 1 */
                    for (short i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        arr_16 [i_3] [i_0] [i_3] = ((/* implicit */short) ((signed char) var_18));
                        arr_17 [i_0] [i_0] [11] [i_0] = ((/* implicit */long long int) var_0);
                        arr_18 [0] [0] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_3 + 3] [i_4 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)14))));
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0] [7] [i_3])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))) > (((/* implicit */int) var_16))));
                    }
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    arr_22 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? ((+(((/* implicit */int) (unsigned short)61714)))) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0]))));
                    arr_23 [i_0] = ((/* implicit */short) arr_1 [i_0]);
                    arr_24 [i_0] [i_0] [i_5] [i_5 + 3] = ((/* implicit */unsigned int) -2507826744840963752LL);
                    arr_25 [(short)12] [i_1] [i_5] [(unsigned short)4] &= (+(((/* implicit */int) (unsigned short)65523)));
                    arr_26 [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2006))) | (-5275224868556089831LL)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-14445)))))));
                }
                arr_27 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) -1628138197)) ? (((/* implicit */int) (short)2022)) : (((/* implicit */int) (unsigned char)100))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_5);
}
