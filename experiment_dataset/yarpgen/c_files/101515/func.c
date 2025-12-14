/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101515
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
    var_12 = ((/* implicit */unsigned short) 0U);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_4 [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [12] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (-(arr_4 [i_0] [i_0]))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2032)))))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_4] [i_0])), (arr_4 [i_2 + 3] [0ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 268435455U)) + (68719476735LL)))))) - (7138ULL)))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((arr_4 [(signed char)14] [i_1]) < (((/* implicit */unsigned long long int) -1186033258))))), ((+(((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)11] [i_0]))))))) ? (var_7) : (((/* implicit */unsigned long long int) min(((-(arr_6 [i_4 + 1] [i_3] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3873581743U)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [13LL] [i_0] [i_4] [i_0] [i_0])) : (((/* implicit */int) var_9))))))))));
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [9LL]))))) : (((((/* implicit */_Bool) arr_7 [i_4 + 1] [(signed char)10] [i_2] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) : (arr_11 [i_2] [8] [i_1] [i_2 + 4] [i_2 + 4])))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */unsigned long long int) ((short) var_7));
    var_18 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) 4294967295U))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) (short)-2033))))))));
}
