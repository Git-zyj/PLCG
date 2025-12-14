/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113915
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_4] [i_3 - 1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((unsigned short) arr_4 [i_0] [i_3] [i_2] [i_2])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)6)))))))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_5 [i_1] [i_1] [i_2 + 1] [i_3])))))));
                                arr_13 [i_0] [i_2] [i_2 - 3] [18ULL] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_4] [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36703))))) : (((/* implicit */int) ((short) (unsigned short)36703)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned int) arr_3 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            arr_21 [i_6] [i_5] [i_1] [(short)8] = ((/* implicit */unsigned long long int) (short)-1849);
                            arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) ^ (var_6));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max(((unsigned char)186), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_1]))) != (0U)))))))));
            }
        } 
    } 
    var_14 = ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)76)) != (((/* implicit */int) (unsigned short)65535)))))));
    var_15 &= ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (signed char i_7 = 4; i_7 < 10; i_7 += 4) 
    {
        for (int i_8 = 1; i_8 < 10; i_8 += 1) 
        {
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) 
            {
                {
                    arr_32 [i_7 + 3] [i_8] [i_9] [(signed char)12] &= max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7 - 2] [7U])) ? (var_12) : (arr_29 [i_7] [i_7] [i_7] [i_7 - 3]))), (((/* implicit */unsigned int) max((arr_26 [(unsigned short)7] [i_8]), (((/* implicit */unsigned short) arr_24 [i_9] [i_8 - 1])))))))), ((~(((((/* implicit */_Bool) arr_31 [i_7] [i_8] [i_8] [i_9 + 1])) ? (((/* implicit */unsigned long long int) -100620914518805239LL)) : (arr_28 [i_9 + 1] [i_8] [i_7 - 3] [i_7 - 3]))))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_8 [i_7] [i_7 + 2] [i_7] [i_8 - 1] [i_8] [i_9 - 1]))));
                    var_17 = ((/* implicit */short) max((min((var_0), (((/* implicit */long long int) arr_9 [i_7 + 2])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_7 + 1])))))));
                }
            } 
        } 
    } 
}
