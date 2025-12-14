/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14119
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */int) arr_2 [i_3])), ((-(((/* implicit */int) arr_2 [i_0])))))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_3]), (arr_3 [i_0] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60107)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (arr_5 [i_3] [i_2] [i_1] [i_0])))));
                        var_19 |= ((/* implicit */unsigned char) arr_0 [i_0]);
                        var_20 = ((/* implicit */long long int) ((int) (unsigned short)60107));
                    }
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(arr_5 [i_0] [i_1] [i_2] [i_2]))) >> (((((((/* implicit */_Bool) 23U)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (unsigned short)60134)))) - (145)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)5393))))) : (11429919158389938351ULL)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_13 [i_1] |= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (signed char)-126)) : (1320083985)))));
                                var_21 = arr_12 [(unsigned char)8] [2ULL] [i_1] [i_0];
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5429))) : (-1120961680064417957LL))))));
                                var_23 = ((/* implicit */unsigned long long int) (((!(var_16))) ? (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1] [i_1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4] [i_5])) ? (arr_5 [i_0] [i_1] [i_2] [i_0]) : (arr_5 [i_0] [i_1] [i_2] [16U])))));
                                arr_14 [i_2] [i_2] [i_2] [i_4] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)9))))) * (2183611287U)))) ? (((((/* implicit */int) arr_7 [i_0] [(unsigned short)10] [i_2] [i_4] [i_5])) << (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (min((-1), (var_14))) : (((/* implicit */int) (short)-23506))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [(unsigned char)5] [(unsigned char)5] [i_2] = min((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2] [i_2])) != (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27419)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2111356025U)));
    var_25 = ((/* implicit */int) var_5);
    var_26 = ((/* implicit */_Bool) (~(1320083985)));
}
