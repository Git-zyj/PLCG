/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103653
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)38724)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-31735)))) ? (((/* implicit */int) (short)-22)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-32765)) && (((/* implicit */_Bool) (short)27135))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32751))));
                                var_17 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_4 [i_0])));
                                var_18 += ((/* implicit */short) ((((/* implicit */int) max((arr_9 [i_4] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]), (arr_9 [i_1] [i_0 + 1] [i_1] [i_0 - 1] [i_0 + 1])))) <= (((/* implicit */int) arr_2 [i_3] [(short)3]))));
                                arr_12 [i_0 - 1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (((-(arr_5 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [1U]))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        for (short i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [14] [i_5])) && (((/* implicit */_Bool) arr_13 [(short)8] [i_5]))));
                /* LoopNest 3 */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            {
                                arr_29 [i_5] [i_6] [i_5] [13] [i_9] = ((/* implicit */short) min(((((!(((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_7])))) ? (((((/* implicit */unsigned long long int) -1256093325620757905LL)) - (var_7))) : (((/* implicit */unsigned long long int) arr_25 [i_5])))), (((/* implicit */unsigned long long int) arr_20 [i_7] [i_5] [i_5]))));
                                arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_6] = (((!(((/* implicit */_Bool) ((signed char) (short)-32751))))) ? (((/* implicit */int) arr_22 [i_5] [i_5] [i_6] [i_8])) : (((/* implicit */int) var_12)));
                                arr_31 [i_5] [i_5] [i_9] = ((/* implicit */unsigned int) arr_17 [(signed char)14] [i_6]);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) arr_28 [i_5 + 1] [i_5 + 1] [i_5] [i_6] [i_6 + 1]);
                arr_32 [i_5 - 1] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))) | (((long long int) min(((_Bool)0), ((_Bool)0))))));
            }
        } 
    } 
    var_23 = max((var_1), (((/* implicit */unsigned short) (_Bool)0)));
}
