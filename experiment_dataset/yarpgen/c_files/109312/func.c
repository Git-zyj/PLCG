/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109312
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
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_2))));
                var_12 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) / (((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 3]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [i_4] [i_2] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (signed char)-115);
                                arr_17 [i_4] [i_6] [i_6] [i_5] [i_6] [i_2] [i_6] = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) arr_13 [i_4] [i_4])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_23 [i_4] [(unsigned char)1] [i_4] = ((/* implicit */signed char) ((long long int) ((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))) << (((((arr_20 [i_2] [(signed char)22] [i_4] [i_2] [i_8 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)115)))) - (113))))));
                                arr_24 [(_Bool)1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_9 [i_2]), (((/* implicit */unsigned char) var_2))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)124))))));
                                var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)113)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_6 [i_2] [i_3]), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */int) arr_14 [i_2] [i_3] [17ULL] [i_9])) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) (signed char)112))))), (((/* implicit */int) var_6))));
                                arr_30 [i_4] [(signed char)13] [9LL] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) arr_6 [i_2] [i_3]))))) ? (max((((/* implicit */unsigned long long int) ((arr_13 [i_4] [23ULL]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_18 [i_2] [i_4] [i_4] [i_4] [i_10] [i_4]))))), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_16 = ((/* implicit */unsigned char) var_4);
                                arr_31 [i_4] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */signed char) var_1);
}
