/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162929
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) 2442555851232538373LL))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_0] [i_1] [9]))) ? (2442555851232538373LL) : (((/* implicit */long long int) 18))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (7089453363897548933ULL)))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (3830820251102669268LL)))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_7 [i_0] [(short)0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((int) (unsigned short)51889))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) (short)-22552)))) : (((/* implicit */int) (_Bool)0)))))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((var_4) | (((/* implicit */long long int) ((arr_1 [12]) - (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)22552)) : (((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) arr_8 [i_5] [i_2] [i_1] [i_1] [i_1] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) / (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_13 [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_9 [i_1]);
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) ((unsigned short) 3231262869U))))));
                        arr_14 [i_0] [2ULL] [i_0] [i_2] [12LL] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_0] [(short)8]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_19 [i_0] = ((/* implicit */unsigned short) (unsigned char)198);
                        arr_20 [i_2] [i_2] [i_0] [i_6] [i_2] = ((/* implicit */signed char) (~(arr_16 [i_2] [i_6])));
                        arr_21 [i_0] [i_0] = ((/* implicit */signed char) (short)-8080);
                    }
                }
            } 
        } 
    } 
}
