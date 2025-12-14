/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106468
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_10 = (((+(max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (var_7))))) / (((/* implicit */unsigned long long int) 2147483136U)));
        arr_3 [i_0] [i_0] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0]), (((/* implicit */unsigned int) var_2))))) ? (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5U]))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 2147483136U))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2147484148U))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */_Bool) var_9)) ? (arr_9 [10U] [i_1] [i_3 - 2]) : (((/* implicit */int) arr_6 [i_0])))))))));
                        var_11 = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_11 [i_3 - 1] [i_1] [i_4 - 2] [i_3 - 1] [i_3 - 1])), (var_5)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (arr_13 [i_0] [i_1] [i_2] [i_1])))) ? (arr_16 [i_0] [i_3] [i_2] [(unsigned short)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_3] [i_4]), (((/* implicit */short) arr_11 [i_4] [i_2] [i_2] [i_1] [i_0 + 2])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            arr_18 [i_0] [i_1] [i_2] [6U] [i_4 - 1] = min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)3840))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) var_5)) ? (16777215ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (max((((((/* implicit */_Bool) (unsigned short)6666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (arr_13 [i_4] [i_2] [i_1] [i_0 - 1]))), (((/* implicit */unsigned long long int) (_Bool)1)))));
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) max(((signed char)48), ((signed char)-123)))))) - (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_0 [i_0])))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_9))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_15 ^= ((/* implicit */unsigned char) var_8);
                            var_16 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (arr_9 [i_0] [i_2 - 2] [i_6 - 1])));
                            arr_23 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1] [i_6 - 1] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_0 + 1] [i_2 + 1] [i_3 - 2]) <= (arr_9 [i_0 - 1] [i_2 - 4] [i_3 - 2])));
                            arr_24 [i_0] [8ULL] [8LL] [i_3] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_1 [i_0 + 1] [i_2]))) < (((/* implicit */int) ((signed char) var_7)))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_27 [i_7] [i_7] [i_2 - 1] [i_7] [i_0] = ((/* implicit */unsigned short) arr_25 [i_0 + 1] [i_7] [i_3] [i_3] [i_7 + 1] [i_7]);
                            arr_28 [i_7] [i_3] [i_7] [i_2] [i_7] [i_1] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (_Bool)1)))) < (arr_9 [i_7 + 1] [i_3] [i_1]))) ? (((/* implicit */int) ((short) arr_12 [i_7] [i_7 + 1] [i_2] [i_3 - 1]))) : ((+(((/* implicit */int) ((arr_21 [i_0 - 2] [i_1] [(_Bool)1] [i_3 - 1] [i_7] [i_1]) > (((/* implicit */int) arr_0 [i_0])))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) var_3);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (unsigned char)255))));
                        }
                    }
                } 
            } 
        } 
    }
    var_19 = max((max((min((1023U), (var_5))), (2147484160U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4503599358935040ULL)) ? (((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))))));
}
