/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169204
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((_Bool) (unsigned char)87)))));
                            var_18 = ((/* implicit */unsigned int) (short)6144);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 2] [i_0] [i_1 + 1]))) & (arr_12 [i_3 + 2] [i_1 - 3] [i_1 + 1] [(unsigned short)6]));
                            var_19 ^= ((/* implicit */long long int) 0U);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-6144))));
                        }
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3 + 2] [i_2 - 1] [i_2 - 2] [i_1 + 1]))));
                    }
                    for (short i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                    {
                        arr_25 [i_2] [i_1 - 3] |= ((/* implicit */signed char) ((short) arr_14 [i_7 + 1] [i_2 + 2] [i_2] [i_1 - 3] [i_1 + 1] [i_1]));
                        arr_26 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-67))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_23 = ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_7] [10] [i_1] [10U]))) >= (arr_2 [11LL]));
                            var_24 = ((/* implicit */signed char) arr_29 [i_0] [i_8] [i_7 + 1] [i_1] [i_1] [i_1] [i_0]);
                            arr_30 [i_0] [i_1] [(signed char)3] [i_1] [6U] [i_7 + 2] [i_8] = ((/* implicit */short) ((_Bool) (+(var_2))));
                        }
                    }
                    for (short i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((long long int) 6982938307039962458ULL))))) ? (((((/* implicit */_Bool) arr_29 [(short)9] [i_0] [i_1 - 2] [i_2 + 2] [i_2] [i_9] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1853730419852748793LL) > (((/* implicit */long long int) arr_16 [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8])))))) : (((((/* implicit */_Bool) arr_11 [i_9 - 1] [i_1] [i_1])) ? (var_4) : (var_9))))) : (max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])), (arr_15 [i_0] [i_1] [i_2 - 2] [i_0] [i_1] [i_1] [i_2 - 1]))))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((short)-30619), (((/* implicit */short) (signed char)7))))) ? (((((/* implicit */_Bool) (short)16383)) ? (10778044711156226301ULL) : (((/* implicit */unsigned long long int) 5473762019607252505LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (short)-30619))))))), (((/* implicit */unsigned long long int) arr_20 [i_1] [i_2] [3U])))))));
                        arr_35 [i_0] [i_0] [i_2] [i_9] [i_1 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_14 [i_0] [i_1 - 2] [(signed char)2] [i_2] [i_0] [i_0])))));
                        arr_36 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_15 [i_0] [i_9] [i_9 + 2] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    arr_37 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30619)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (signed char)7))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) var_7);
}
