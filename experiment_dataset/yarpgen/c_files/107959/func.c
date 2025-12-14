/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107959
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
    var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)1086)) | (((/* implicit */int) (unsigned short)1098)))) % (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)64449)))))) % (((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_2))))) - (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [(signed char)10] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0]))) : (arr_8 [i_0] [i_1] [i_2 - 1] [i_3])))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1098)) ? (((/* implicit */long long int) ((3855019487U) >> (((max((arr_5 [i_0]), (((/* implicit */unsigned int) var_3)))) - (2300732851U)))))) : (((((/* implicit */_Bool) var_6)) ? ((~(3600577695902451368LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3855019487U))))))));
                            var_17 &= ((/* implicit */unsigned int) ((((arr_8 [(unsigned short)1] [i_1] [i_1] [(short)9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) <= (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [5U] [5U])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_8 [i_0] [i_1] [i_0] [6U])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 934181594U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])))) - (((((/* implicit */_Bool) arr_7 [22LL] [22LL] [i_0] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(short)13] [(short)18])) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_4 [i_0]) : (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57798)) / (((/* implicit */int) (short)-32759))))) : (((arr_8 [i_0] [i_0] [11U] [(unsigned short)20]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((((3647893559U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-7825))))) << (((/* implicit */int) ((arr_5 [(short)18]) == (arr_4 [12U])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_13);
}
