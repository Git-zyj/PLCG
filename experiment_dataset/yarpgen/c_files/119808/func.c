/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119808
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
    var_19 = ((/* implicit */unsigned char) var_7);
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 + 2])))) != (((/* implicit */int) var_18)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [(unsigned short)1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)27821))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [(unsigned char)11] [(unsigned char)11]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)27818)), (var_0)))))))) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_2]))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1)))))));
                            var_22 ^= ((/* implicit */_Bool) ((unsigned short) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)27821)) ? (((/* implicit */int) (short)-27821)) : (((/* implicit */int) (unsigned char)87))))))));
                            var_23 |= ((/* implicit */unsigned short) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2)))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_11))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [1] [i_5] [i_0] [i_1] [i_0])) ? (((arr_14 [i_5 + 2] [i_6] [i_6]) ? (((/* implicit */int) arr_14 [i_5 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [i_5])))) : ((~(((/* implicit */int) var_6))))));
                                arr_20 [i_1] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_7 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) == (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
