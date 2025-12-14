/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134899
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
    var_17 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0] [i_2 + 4] [i_0 + 1]))))) ? ((-(((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 &= ((/* implicit */signed char) min((var_14), (((((/* implicit */_Bool) ((var_2) >> (((/* implicit */int) arr_3 [2LL] [i_3] [i_4]))))) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4 - 4])) : ((-(((/* implicit */int) var_16))))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) (unsigned char)141)))));
                    arr_14 [i_0] [(unsigned short)6] [i_2 + 1] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (max((var_2), (((/* implicit */unsigned long long int) var_3))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1171936750)) ? (((/* implicit */int) var_9)) : (172918602)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        arr_17 [i_0] [i_2 - 1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0] [i_2 + 1] [i_5 - 2]))));
                        var_22 += ((/* implicit */int) var_6);
                    }
                    /* vectorizable */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (arr_8 [i_2 + 4])));
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                }
            } 
        } 
    } 
}
