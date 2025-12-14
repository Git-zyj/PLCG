/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138775
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_4), (var_14)))) : (((/* implicit */int) (short)-10997)))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) (unsigned short)19060)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(unsigned short)13])))))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))));
                    arr_8 [i_0] = (-(((((/* implicit */long long int) var_16)) - (arr_3 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_3 [i_0 + 1] [i_1] [i_3]);
                                var_20 += ((/* implicit */unsigned short) ((signed char) arr_11 [i_0] [i_1] [(unsigned char)7] [i_3] [i_1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) (short)-11008)), (var_3)))) / (max((arr_3 [i_5] [i_2] [i_0]), (((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_5])))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_5])) & ((+(((((/* implicit */int) (unsigned short)7)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                                arr_19 [i_1] [i_0] [i_2] [i_5] [i_0] = ((unsigned long long int) var_16);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                arr_24 [i_7] = arr_21 [i_7];
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 22; i_9 += 2) 
                {
                    for (short i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_24 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_25 [i_9] [i_8] [i_9 - 2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_9] [i_8] [i_9 - 1]))))) == (((unsigned long long int) arr_26 [i_7] [i_7] [i_9] [i_10 + 1]))));
                            var_25 = ((/* implicit */unsigned short) ((unsigned int) ((arr_22 [i_7] [i_7 + 1]) ^ (((/* implicit */long long int) ((unsigned int) arr_29 [i_7] [i_8] [i_7] [i_9]))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_7] [i_8] [i_9])))) == (((((/* implicit */long long int) ((int) (short)-11009))) & (((var_0) | (((/* implicit */long long int) ((/* implicit */int) arr_27 [7])))))))));
                            var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_0)))));
                            arr_31 [i_7] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_7] [i_10] [i_10 - 1]))))) ? ((-(((/* implicit */int) arr_27 [i_7 + 2])))) : (((/* implicit */int) arr_21 [i_7 - 1]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_7]))) - (((((/* implicit */_Bool) max((arr_27 [i_8]), (((/* implicit */short) (signed char)7))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_22 [i_7] [i_7]))) : (((arr_29 [i_7] [i_8] [i_8] [i_8]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7])))))))));
            }
        } 
    } 
    var_29 = max((((/* implicit */int) var_14)), (max((var_16), (var_5))));
}
