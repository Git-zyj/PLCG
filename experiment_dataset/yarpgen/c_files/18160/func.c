/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18160
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = 7895318218125435645ULL;
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_5 [i_0] [i_0])), (((/* implicit */unsigned long long int) (+(arr_2 [8ULL] [8ULL]))))))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_6))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0 - 3] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */int) max((((((((/* implicit */_Bool) 15529527255776869637ULL)) ? (((/* implicit */unsigned long long int) 1994643865U)) : (var_5))) * (16745494832967464370ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) ^ (var_10))))));
                                arr_16 [1ULL] [1ULL] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0 - 2] [i_0]))) ? (max((((/* implicit */int) (short)-18907)), (var_10))) : (var_10)));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((arr_2 [i_0 - 3] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) >> (((-5504608628709720134LL) + (5504608628709720136LL)))))), (arr_7 [i_2] [i_2] [8U] [8U])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8ULL)) ? (var_1) : (((/* implicit */unsigned long long int) 2300323431U))))) ? (var_3) : (((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))) : (((((/* implicit */_Bool) 2300323431U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30326))) : (11541372542810841481ULL)))));
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((+(252893090U))), (((/* implicit */unsigned int) var_4))))) <= (min((((/* implicit */unsigned long long int) var_8)), (var_6)))));
}
