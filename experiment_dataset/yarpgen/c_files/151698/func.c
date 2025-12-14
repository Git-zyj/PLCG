/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151698
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_9 [(signed char)6] [i_2] [i_1 + 2] [i_1] [i_1 + 2] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1 + 1])) ? (arr_1 [i_0] [i_1 - 2]) : (((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1 - 2]))))) ? (((((unsigned long long int) arr_6 [i_0] [8LL] [i_0] [i_0])) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (arr_7 [i_0] [i_1 + 1] [(signed char)9] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4] [i_1])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                            var_12 ^= var_0;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_13 [i_0] [i_4] [i_1] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */short) var_9)), (var_4))))))));
                    var_13 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_0) % (((/* implicit */unsigned long long int) arr_7 [(short)11] [i_0] [i_4] [i_1 + 1])))))));
                }
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)93))))))) && (((max((((/* implicit */int) (signed char)-98)), (arr_1 [i_0] [(signed char)14]))) != (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)128))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_8)))))));
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    arr_22 [i_5] [i_6] [i_5] [9U] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_21 [i_6] [i_5])))))) != (max((((/* implicit */unsigned long long int) (unsigned short)25315)), (arr_5 [i_5] [(unsigned short)13] [i_5] [(unsigned char)9]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((arr_8 [(_Bool)1] [i_6] [i_7] [i_7 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_21 [i_5] [i_5]), (((/* implicit */unsigned char) var_10)))))))) ? (((((/* implicit */_Bool) arr_10 [i_7 - 2] [i_5] [i_7 - 3])) ? (((((/* implicit */int) arr_10 [i_5] [i_5] [3ULL])) + (((/* implicit */int) (signed char)75)))) : (((((/* implicit */_Bool) 908751621U)) ? (arr_1 [15ULL] [i_5]) : (((/* implicit */int) var_1)))))) : (((var_8) ^ (arr_14 [i_7 - 1])))));
                        var_18 -= ((/* implicit */int) (((-(((/* implicit */int) max((arr_2 [i_6] [i_6]), (arr_12 [i_8] [i_7] [(unsigned char)5] [i_5])))))) >= (max((((((/* implicit */_Bool) arr_6 [5] [12ULL] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) (short)22908)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (unsigned short)3))))))));
                        var_19 = ((/* implicit */int) arr_20 [(signed char)10] [i_5]);
                    }
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_20 *= ((/* implicit */short) (-(((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-76))))) + (((((/* implicit */_Bool) var_1)) ? (3386215686U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((arr_7 [i_9] [i_9] [i_9] [0ULL]), (((/* implicit */unsigned int) (short)1837))));
                    arr_29 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (arr_1 [i_5] [i_5]) : (arr_1 [i_5] [i_5]))), (((/* implicit */int) ((((/* implicit */unsigned int) ((var_8) | (arr_14 [i_5])))) == (arr_7 [i_5] [(unsigned char)12] [i_9] [i_5]))))));
                    var_22 -= ((/* implicit */_Bool) min((-2703779208294289816LL), ((-(arr_28 [i_6] [i_9])))));
                    var_23 ^= ((/* implicit */signed char) ((((arr_7 [i_9] [i_9] [i_9] [i_9]) < (((unsigned int) var_2)))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)3)))) ? (((4118673332804575288ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1908884583)), (var_2)))))))));
                }
                arr_30 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)768)) ? (((/* implicit */unsigned long long int) arr_1 [i_5] [i_6])) : (arr_23 [i_5] [i_5] [i_6] [i_5])))) ? (arr_7 [i_6] [(short)9] [i_5] [(short)9]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_5] [i_6]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
}
