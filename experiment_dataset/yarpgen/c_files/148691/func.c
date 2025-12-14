/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148691
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
    var_13 = ((/* implicit */signed char) max((((unsigned short) (unsigned char)241)), (((/* implicit */unsigned short) var_9))));
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)241))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((unsigned int) (+((-(var_0))))));
                    var_16 = ((/* implicit */unsigned char) arr_0 [i_1]);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] [i_1] [(unsigned char)4] [i_3] [(short)6] &= ((/* implicit */unsigned short) (short)-18891);
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-9922))))), (((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (var_0) : (((/* implicit */int) (unsigned char)27))))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) (unsigned char)14))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4193881142U))))))))));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        arr_12 [i_4] [i_1] [1] [i_4] = ((/* implicit */short) max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_4] [i_4] [i_1])))), (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1] [i_1] [i_2]))))));
                        arr_13 [i_4] [i_1 + 4] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((!(arr_7 [0U] [10U] [i_2] [i_4] [i_1 + 1]))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 3])) ? (101086158U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_1 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_1 + 1]))) : (var_7)))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [2U])) > (var_8)))), (max((((/* implicit */long long int) arr_6 [4] [i_0])), (arr_2 [i_0]))))), (((/* implicit */long long int) ((unsigned int) ((2905313890U) | (101086147U))))))))));
                        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)32559)), ((unsigned short)41085))))));
                    }
                }
            } 
        } 
    } 
}
