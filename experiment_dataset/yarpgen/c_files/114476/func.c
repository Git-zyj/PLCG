/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114476
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_2] [7ULL] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_10 [i_0] [i_4] [i_0] [i_3]))))) ? (((((/* implicit */int) var_1)) | (var_3))) : (((((/* implicit */int) arr_10 [i_1] [4LL] [i_2] [(signed char)5])) ^ (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [11LL])))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_4 - 1] [i_4 - 1]))) : (arr_12 [3] [i_1] [i_1] [i_1] [i_3] [i_3] [i_4]))) <= (((/* implicit */long long int) ((int) var_10)))))))))));
                                var_20 = ((/* implicit */unsigned int) ((var_15) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_4 - 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [i_0] [i_2 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_6] [i_2 + 1]))))));
                                var_21 ^= ((/* implicit */unsigned short) ((max((((var_16) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_20 [i_5] [i_2] [i_0] [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))) - (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_1] [10U]))) : (4294967295U))))));
                                arr_24 [i_0] [i_0] [(unsigned short)10] [i_1] |= ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned char i_9 = 4; i_9 < 16; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((signed char) var_10));
                    var_23 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */int) (short)-14409)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (-1LL)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))));
}
