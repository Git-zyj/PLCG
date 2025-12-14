/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166376
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (617617625U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3])))))) ? (((((long long int) -5556408566402634856LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) max((((unsigned int) (unsigned char)255)), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (-2147483646)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_3] [i_3] = ((((/* implicit */_Bool) 617617625U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : (max((arr_5 [i_3 - 4] [i_1 - 2] [i_1 - 2]), (arr_5 [i_3 - 2] [i_1 - 1] [i_1 + 1]))));
                                var_11 -= ((/* implicit */short) var_8);
                                var_12 = ((/* implicit */short) arr_11 [i_3] [i_2] [i_0]);
                                arr_15 [i_0] [i_3] [i_0] [(unsigned char)11] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [(_Bool)1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)255)))) : (-2745651656462044217LL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) ((signed char) 3919335186U))) ^ (((/* implicit */int) (short)-12))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((8319331588760278270LL), (((/* implicit */long long int) 1569071938U))));
                    arr_17 [i_0] [8ULL] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((8060803504251216785LL) <= (((/* implicit */long long int) 3677349671U))))), (3677349669U)));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (signed char)34)) : ((-2147483647 - 1))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */int) var_9);
}
