/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129021
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
    var_19 += ((/* implicit */unsigned int) min((520093696), (((/* implicit */int) var_13))));
    var_20 = ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) >= (((/* implicit */int) arr_2 [i_0 - 1]))));
                    arr_9 [i_1] [(unsigned short)11] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1]))));
                    var_22 = ((/* implicit */short) (+(arr_7 [i_1])));
                }
                for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    var_23 = ((/* implicit */long long int) max((((/* implicit */int) max((var_7), (var_15)))), (((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3]))) : (arr_7 [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))))));
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))) ? ((+(var_2))) : (((((/* implicit */int) max((arr_6 [i_1] [(_Bool)1]), (var_11)))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [11U])) : (var_2)))))));
                    var_24 = ((/* implicit */int) min((var_24), (((arr_6 [i_0 - 1] [10]) ? ((+((+(var_14))))) : (min(((-2147483647 - 1)), ((-(((/* implicit */int) var_0))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    arr_19 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (4184781787U)));
                    var_25 = ((/* implicit */unsigned long long int) (~(arr_4 [i_4] [i_4] [i_4 - 1])));
                }
                arr_20 [i_1] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))) : (((/* implicit */int) ((var_4) <= (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_26 &= ((/* implicit */short) arr_2 [i_0]);
                            arr_26 [i_0] [i_5] [i_5 + 1] [i_1] [i_5 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : ((+(((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))))), (max((((/* implicit */long long int) (-(32767U)))), (arr_17 [i_5 + 1] [i_1] [i_1])))));
                            arr_27 [i_1] [(signed char)2] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0 - 2])) ? (arr_22 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */int) arr_24 [i_1 + 1] [i_5 + 1] [i_6 - 3])))) - (((/* implicit */int) arr_24 [i_1 + 1] [i_5 - 2] [i_6 + 1]))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min(((~(1516896508))), (((/* implicit */int) (short)7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */short) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) var_17))));
}
