/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188531
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_0)))))))))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 + 2] [i_1 + 1])))) ? (arr_0 [i_1 + 2] [i_1 + 1]) : (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) var_8)) : (arr_0 [i_1 + 2] [i_1 + 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1501300549)) ? (1076325383) : (-52329677)));
                                var_23 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) var_9)) >= (var_16))) ? (((/* implicit */int) ((signed char) var_2))) : (min((arr_0 [i_0] [6]), (((/* implicit */int) var_8)))))), (((int) ((((/* implicit */_Bool) arr_10 [i_1] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))));
                                arr_14 [i_0] [i_4] [i_0] [i_3 + 1] [i_4] [(unsigned char)21] [i_3] = min((((/* implicit */int) var_10)), ((-(((/* implicit */int) arr_11 [i_1 - 1] [i_3 - 2])))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((signed char) var_9))), (arr_0 [i_1] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) arr_13 [i_0] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) var_19)) ? (var_12) : (((/* implicit */unsigned long long int) var_11)))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) arr_5 [i_2])))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_6] [i_6])) ? (((unsigned long long int) arr_13 [(short)20] [i_6] [i_6])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_9))))))) ? (((long long int) ((int) arr_0 [i_5 - 1] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                var_26 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551590ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */long long int) arr_17 [i_5] [i_5 - 1])) : (((var_1) ? (arr_10 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_5] [i_5])) ? (arr_0 [i_5 - 1] [i_6]) : (arr_3 [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_9 [i_5 - 1] [i_5] [i_5 - 1])) : (arr_8 [8LL] [i_5] [i_6] [i_6] [i_6] [i_6])))) : (max((var_16), (((/* implicit */unsigned long long int) var_4))))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [(unsigned short)8] [i_5 - 1]))))), ((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) min((arr_3 [10LL]), (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_16 [i_6])))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [1U])) ? (arr_6 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_6]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (arr_16 [i_5])))) ? (((((/* implicit */_Bool) arr_11 [i_5 - 1] [(short)6])) ? (((/* implicit */long long int) arr_0 [i_5] [i_6])) : (arr_8 [i_5] [i_5 - 1] [i_6] [i_5 - 1] [(short)22] [(unsigned short)10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))))))))));
                var_28 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(unsigned short)0])) ? (((/* implicit */unsigned long long int) arr_15 [i_6])) : (var_16)))) ? (min((((/* implicit */int) (_Bool)1)), (1501300549))) : (min((var_11), (((/* implicit */int) var_8))))))));
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_10 [i_5] [i_5 - 1])))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_5 - 1]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_2);
}
