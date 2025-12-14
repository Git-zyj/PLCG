/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11831
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_14 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_2)), (max((((((/* implicit */_Bool) arr_1 [(unsigned char)7])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1])))), (((/* implicit */unsigned long long int) 3237158560U))))));
                var_15 = ((/* implicit */signed char) max(((-(((arr_1 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) || (((/* implicit */_Bool) ((signed char) arr_0 [i_0]))))))));
                var_16 = ((((arr_1 [i_0 + 1]) | (arr_1 [i_0 + 2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned short) arr_5 [i_2] [i_3]);
                var_18 = ((/* implicit */unsigned char) arr_7 [i_3] [i_3]);
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_2 - 1]) / (arr_4 [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (arr_4 [i_2 + 1]) : (((/* implicit */long long int) arr_9 [i_2 - 1])))) : (arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1])));
                                arr_15 [i_2] [i_5] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) (signed char)-125))))) ? (arr_13 [(unsigned short)4] [i_3] [(unsigned short)11] [i_5] [i_6]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1460954443)) ? (((((/* implicit */_Bool) arr_4 [10U])) ? (2878052462U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (arr_10 [i_2] [i_2] [12U] [i_5] [i_6] [i_4]))))));
                                var_19 += ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_11 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (1460954444)))) : (((((/* implicit */_Bool) arr_12 [i_2] [(_Bool)1] [(unsigned char)12] [i_4] [i_5] [i_6])) ? (15539792154649291512ULL) : (((/* implicit */unsigned long long int) arr_4 [i_2])))))), (((/* implicit */unsigned long long int) arr_4 [i_6]))));
                                var_20 = (-(((/* implicit */int) var_0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)153)))) : (((/* implicit */int) var_7))))));
}
