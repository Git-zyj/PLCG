/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1573
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                    var_18 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0] [16U]))));
                    var_19 &= ((/* implicit */unsigned int) var_3);
                }
                for (short i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1]))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) min(((unsigned char)48), (((/* implicit */unsigned char) arr_1 [5LL] [11]))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2] [i_1 + 2])) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 4])) + (((/* implicit */int) var_1))))))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)120)) >> (((((/* implicit */int) arr_5 [i_0])) + (132))))) < (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_4])) ? (((/* implicit */int) var_12)) : (((int) arr_0 [i_0] [i_0]))))));
                                arr_15 [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 4] [i_0])) ^ (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 4])))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */long long int) (short)-20006);
                    arr_16 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) arr_10 [i_1] [i_1 + 2]))));
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    var_24 ^= ((/* implicit */int) ((unsigned long long int) arr_14 [i_0] [i_0]));
                    arr_19 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_14 [i_0 + 3] [i_0 - 3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_6] [i_6])))))));
                }
                arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_0 + 3] [i_1]), (((/* implicit */unsigned short) (signed char)120))))) / (((/* implicit */int) (unsigned char)127))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((long long int) arr_27 [i_7 - 2] [i_8 + 3])), (((/* implicit */long long int) var_16)))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        for (signed char i_11 = 3; i_11 < 20; i_11 += 4) 
                        {
                            {
                                arr_32 [i_7] [(signed char)11] [i_8] [i_7 + 1] = (i_8 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) >> (((arr_28 [i_7] [i_7] [17LL] [i_8] [i_11 + 1]) - (574852564))))) == (((/* implicit */int) arr_23 [i_7 - 1]))))) : (((/* implicit */int) arr_26 [17LL] [i_8]))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) >> (((((arr_28 [i_7] [i_7] [17LL] [i_8] [i_11 + 1]) - (574852564))) - (694776219))))) == (((/* implicit */int) arr_23 [i_7 - 1]))))) : (((/* implicit */int) arr_26 [17LL] [i_8])))));
                                arr_33 [i_8] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_27 [i_8 - 1] [i_8 + 3])), (arr_29 [i_8 + 2] [i_8 + 3] [i_8] [(short)2] [i_8] [i_8])));
                                arr_34 [i_7] [i_8 - 1] [i_8] = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned long long int) (~(arr_28 [i_7] [i_7 - 1] [(signed char)17] [i_8] [i_8])));
                    var_27 = ((/* implicit */short) ((((((/* implicit */int) var_15)) == (((/* implicit */int) arr_23 [i_9 + 3])))) ? ((-(arr_22 [i_9 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7 + 1] [i_9 - 2])))));
                }
            } 
        } 
        var_28 = ((/* implicit */short) min((var_28), (min((arr_25 [(short)18]), (((/* implicit */short) min(((unsigned char)135), (arr_29 [i_7 + 1] [i_7] [16] [i_7 - 2] [i_7] [i_7]))))))));
    }
    var_29 = ((/* implicit */short) var_2);
    var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((14152804093806337365ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ^ (((/* implicit */unsigned long long int) 5563763313324370880LL)))))));
}
