/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121145
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
    var_15 = ((((/* implicit */_Bool) (short)512)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned short)23))))) ? (((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-512)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        arr_13 [8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ^ (arr_6 [i_1 + 1] [i_1 - 4] [i_1 - 1])))) ? (arr_6 [i_1 - 4] [i_1 - 3] [i_1 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)524)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-518)))))));
                        arr_14 [i_0] [(signed char)7] [i_1] [(signed char)7] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [(short)0] [i_3] [i_3]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_12 [i_1 + 1] [(short)6])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1])))) % (max(((-(((/* implicit */int) (short)-512)))), (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                                var_17 = (-((-(((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */int) (short)-485)) + (2147483647))) << (((((/* implicit */int) (short)488)) - (488)))));
    var_19 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
}
