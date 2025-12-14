/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10345
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -195829040))));
    var_18 = ((/* implicit */_Bool) (unsigned short)8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (unsigned short)65527);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) (unsigned short)8);
                        arr_10 [i_1] = ((/* implicit */signed char) (unsigned char)158);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_20 &= arr_13 [7] [i_0] [i_1] [i_2] [i_0];
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_4])) ? ((~(((/* implicit */int) (signed char)-1)))) : (298503337)));
                        var_22 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((((/* implicit */_Bool) (unsigned short)65527)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned int) 1469135771))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))));
                                arr_21 [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)23765)) ? (((/* implicit */int) (unsigned char)95)) : ((-(((/* implicit */int) ((unsigned char) (short)-30812)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
