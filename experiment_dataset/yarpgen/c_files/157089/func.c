/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157089
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
    var_13 = ((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) (unsigned char)101))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967284U) << (((((/* implicit */int) var_1)) + (20332)))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 4]))))));
                var_14 = ((/* implicit */unsigned short) var_1);
                var_15 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_4)), ((+(0U))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [i_0] [(short)4]))))), (var_5)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_14 [(unsigned char)12] [i_2] = max((((/* implicit */unsigned long long int) ((arr_8 [i_3 + 3]) % (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                    arr_15 [i_4] [i_4] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (11U) : (4294967295U)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_2] [6LL] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_2]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1272253653U))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) : (4294967281U)));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (16825837342857384988ULL) : (((/* implicit */unsigned long long int) 12U))))) ? (arr_7 [i_2 + 3]) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (var_11)))))))));
                                var_18 = ((/* implicit */unsigned char) -9030649948690021801LL);
                                arr_22 [i_2] [i_3] [i_2] [i_2] [i_6 - 2] = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) var_4)), (var_11))))))));
    var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-860461329) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) var_3)))))) << (((((/* implicit */int) var_10)) - (29895)))));
}
