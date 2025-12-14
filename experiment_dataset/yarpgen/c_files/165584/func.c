/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165584
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((arr_5 [i_1 + 1] [i_1 + 1] [i_0 - 2]) / (3492153670U)))), (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_2])), (475609610U)))) & (((536869888ULL) + (((/* implicit */unsigned long long int) arr_4 [(unsigned short)1] [(unsigned short)1]))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((((~(475609622U))) ^ (((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3])) ? (3819357692U) : (475609610U))))) << (((475609613U) - (475609607U))))))));
                                var_17 = ((/* implicit */short) arr_3 [i_3] [i_2] [(unsigned short)2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) 2143289344U)) : (14977463677123227251ULL)));
                var_19 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)645)) ? (2293398760U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 + 1] [(signed char)5] [i_5] [(short)5] [i_5]))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_5] [i_5 - 1] [i_5] [i_6])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)148)) << (((var_11) - (438531894)))))) ? (((/* implicit */unsigned long long int) ((int) 475609622U))) : (min((36028797018832896ULL), (((/* implicit */unsigned long long int) 3819357661U))))))))));
}
