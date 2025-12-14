/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155800
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
    var_15 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), ((~(((unsigned long long int) var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)1)), ((+(min((((/* implicit */long long int) var_4)), (arr_6 [7LL] [i_1] [(signed char)4] [i_3])))))));
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((2092956541409394173LL), (((/* implicit */long long int) arr_3 [i_2 + 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_1))))));
                                var_19 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)24)) >= (arr_8 [i_0] [i_5] [i_5] [i_7]))))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */long long int) arr_8 [i_0 + 2] [i_1] [i_5] [i_7])) : (var_11))))) & (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)13), (((/* implicit */unsigned char) ((signed char) var_6))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_6 [(signed char)3] [i_6 - 2] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8277285750403935809ULL)) ? (arr_11 [i_5] [i_7 - 1] [(unsigned char)7] [i_7] [i_6 + 2] [i_5] [i_5]) : (arr_11 [i_5] [i_7 - 1] [i_7] [i_6] [i_6 + 1] [(signed char)13] [i_5])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_12 [i_6] [i_6 - 2] [(unsigned char)16] [i_1 - 2]) : (((/* implicit */unsigned int) arr_17 [i_7] [i_7 + 1] [i_7] [i_7] [i_6 - 2] [i_5] [i_1 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_21 = (~(min(((~(var_2))), (((/* implicit */long long int) arr_17 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2] [i_1 - 2])))));
                var_22 = min((((/* implicit */unsigned char) arr_10 [i_0] [i_1 - 1])), (((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_12 [i_0] [i_0] [i_1 + 1] [(unsigned char)4])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_4)), (max((((/* implicit */unsigned int) ((var_8) < (((/* implicit */unsigned int) var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) % (var_8))))))))));
}
