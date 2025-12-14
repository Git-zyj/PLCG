/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161077
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
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((var_6) - (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) ((((long long int) (!(((/* implicit */_Bool) var_10))))) > (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_6 [i_0] [i_1 + 1] [2ULL])), (var_4))) == (((arr_8 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */int) ((unsigned char) var_13))), ((+(((/* implicit */int) (short)22492)))))));
                                arr_14 [i_0] [19ULL] [i_2] [0U] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_13 [i_1 - 1] [i_1 + 1] [i_2]))) + ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                            {
                                arr_17 [i_2] [i_5] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(var_16)));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) (-((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) var_1)))))))));
                            }
                            arr_19 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [3ULL] [i_3])))))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */int) max((((/* implicit */signed char) var_3)), (((signed char) (+(((/* implicit */int) var_2)))))));
                /* LoopSeq 3 */
                for (int i_6 = 3; i_6 < 16; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) max((((max((var_16), (var_16))) << (((((/* implicit */int) max((arr_3 [i_0] [i_1]), (((/* implicit */short) arr_12 [i_0] [i_0] [i_6] [i_1 + 1] [i_1 - 1] [i_6] [i_6 - 2]))))) - (27437))))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_6] [i_6 - 1] [i_1] [14ULL] [i_6 + 1])))), ((~(((/* implicit */int) arr_6 [16LL] [i_1 + 1] [i_6])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_1 [i_8 + 1] [(unsigned char)4]), (((/* implicit */long long int) var_17)))))));
                                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13330028612282908586ULL))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(4294959104ULL))))));
                                arr_28 [i_6] [i_1 + 1] [i_6] [18ULL] = ((/* implicit */unsigned char) ((short) max((((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_8))), (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))));
                                var_26 ^= ((((/* implicit */_Bool) (+((-(arr_1 [i_0] [1U])))))) ? ((+(9223372036854775807LL))) : ((~(((long long int) (unsigned char)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_6 - 1] [i_9] [i_10 - 1] &= ((/* implicit */long long int) var_4);
                                var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) 4294967295U))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_6])) ? (((/* implicit */unsigned long long int) var_1)) : (var_18))) >= (max((((/* implicit */unsigned long long int) 3141162872U)), (16271881743673408685ULL))))))));
                    arr_34 [i_0] [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) var_9))))))) / (arr_30 [i_0] [14U] [i_0] [i_0] [i_0] [2ULL])));
                }
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_37 [i_11] [i_1] [6ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)11077)))))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((arr_26 [i_11]) >= (var_6)))))))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) -2089059405);
                    arr_41 [i_12] [i_12] = ((/* implicit */signed char) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) var_10))))));
                    arr_42 [i_0] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                }
                var_31 ^= ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
}
