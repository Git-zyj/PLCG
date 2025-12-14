/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114256
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
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (625585860U)));
                arr_5 [i_0 + 1] [i_1 - 1] = ((/* implicit */unsigned int) ((short) ((unsigned long long int) arr_2 [i_1 - 1])));
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
            }
        } 
    } 
    var_21 = ((unsigned char) (-((~(var_6)))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_14 [i_3])), (((unsigned long long int) arr_13 [i_2] [i_2] [i_2] [i_2])))))));
                        arr_18 [i_2] [i_2] [i_2] [2U] = ((unsigned char) 0U);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((9243085183044489546ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32651)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_2 [13LL]))))) ? ((-(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) arr_4 [i_2] [(_Bool)1] [(unsigned char)17])))))) + (64419))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            arr_21 [(unsigned char)9] [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_3 [i_2]);
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_5 + 1] [i_2] = ((/* implicit */unsigned int) arr_12 [i_2]);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 514004813U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (3780962480U))))) + (2147483647))) >> (((((((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))))) >> (((((/* implicit */int) ((signed char) var_0))) + (122))))) - (1048562U))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) 2058940448326795536ULL));
                        }
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_26 = var_10;
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((2147483647) % (2147483647))) <= (((((/* implicit */_Bool) 3780962482U)) ? (((/* implicit */int) arr_26 [i_2] [(short)7] [i_4] [i_5 + 1] [i_7] [i_2] [i_5 + 1])) : (((/* implicit */int) (unsigned short)1109)))))))));
                            var_28 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)26823)) > (((/* implicit */int) (short)26823)))))) == (((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97))))));
                        }
                        for (short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_11))))) > ((+(9223372036854775807LL))))));
                            var_30 = var_14;
                        }
                        arr_29 [7ULL] [i_2] = ((/* implicit */unsigned int) var_16);
                    }
                    for (unsigned char i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_27 [i_2] [i_2] [i_3] [i_2] [i_9 + 1])))) >= (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-12)), ((unsigned char)70))))));
                        arr_32 [(short)8] [i_9] [i_3] |= ((/* implicit */short) (+(var_14)));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_36 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_24 [10ULL] [i_3] [i_4] [i_3] [i_10] [i_3] [10U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) : ((-(var_14)))))));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)7)))))));
                        var_33 += ((/* implicit */unsigned char) (((-(var_14))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 514004813U)), (0LL))))));
                        var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) < (2058940448326795536ULL))))));
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (signed char)43)) <= (((/* implicit */int) var_15))))), (((short) var_17)))))));
}
