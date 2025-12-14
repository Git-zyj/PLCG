/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116788
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-18458)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((8793602923918906229ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_6)), (((((((/* implicit */unsigned long long int) var_9)) * (9653141149790645386ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_6))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+(min((((var_4) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0)))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) ? (max((((/* implicit */long long int) 153385262U)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)53))))))));
                                arr_12 [i_4] [(unsigned short)6] [(unsigned short)6] [i_1] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14137)) ? (arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2] [i_2 + 2] [i_2]) : (((/* implicit */long long int) ((unsigned int) var_4))))))));
                                var_15 = max((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)18457)) / (2101343090)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_2] [(short)23])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (var_6)))))), (min(((~(arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]))), (((/* implicit */unsigned long long int) var_9)))));
                                arr_13 [i_0] [i_2 + 1] [i_2 + 1] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2101343095)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18491))) : (105744172U)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 24; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) ((((((min((907839421534225869LL), (((/* implicit */long long int) (short)-1)))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned short)15)) ? (837702848448281480ULL) : (((/* implicit */unsigned long long int) arr_15 [i_1])))) - (837702848448281471ULL))))) | (arr_11 [i_0] [i_0])));
                            arr_21 [i_0] [i_1] [(signed char)18] [i_1] &= ((/* implicit */unsigned long long int) (unsigned char)23);
                            var_16 = ((/* implicit */int) (short)-28749);
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) -5030817638884388267LL);
            }
        } 
    } 
}
