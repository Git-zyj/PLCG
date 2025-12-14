/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129215
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]);
                                arr_14 [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_2 [i_0]))))) | (((/* implicit */int) arr_10 [i_4] [i_2] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_0] [14U] [i_0]) : (arr_6 [i_0] [i_0] [i_0])))));
                    var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) (unsigned short)46988)) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((~(-1649286239)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_15 &= ((/* implicit */unsigned short) arr_15 [i_5 - 1]);
                    arr_22 [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4000101628U)) ? (((/* implicit */int) (short)64)) : (((/* implicit */int) arr_18 [i_6]))))) ? (arr_17 [i_5 + 1]) : (((/* implicit */unsigned long long int) min((-57817606), (((/* implicit */int) arr_16 [i_7] [i_6]))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_15 [i_7]) : (((/* implicit */unsigned long long int) -2391340498181268300LL))))) ? ((-2147483647 - 1)) : (max((((/* implicit */int) (unsigned char)255)), (1649286238)))))) / (((((/* implicit */_Bool) arr_20 [i_5 - 1] [8LL] [i_5 + 2])) ? (((((/* implicit */_Bool) (signed char)34)) ? (arr_21 [i_5] [i_6] [i_6] [i_8]) : (((/* implicit */unsigned int) -2147483630)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)47))))))));
                                var_17 = ((/* implicit */unsigned char) min((3407121356U), (((/* implicit */unsigned int) (short)24673))));
                            }
                        } 
                    } 
                    arr_29 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [i_6] [i_7] [i_6] [i_6] [i_5])) ? (3709192397U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-65))))) >> (((max((((/* implicit */unsigned int) arr_16 [i_5] [i_5])), (arr_28 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [i_5] [i_5]))) - (3703357368U)))))) ? (((((/* implicit */_Bool) arr_15 [i_5 + 2])) ? (arr_15 [i_5 + 3]) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18891))))))));
                }
            } 
        } 
    } 
}
