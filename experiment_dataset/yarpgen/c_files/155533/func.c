/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155533
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */unsigned long long int) 0U)) : (6902044976189513240ULL)))) ? (-1644186416) : (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((0U) < (4294967295U));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) (+(var_15)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_21 += ((((/* implicit */_Bool) (short)-18538)) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_14)) : (var_18)))) : (((((/* implicit */_Bool) var_3)) ? (17285717150700936124ULL) : (((/* implicit */unsigned long long int) var_5)))));
                arr_21 [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) (~(0U)))) : (var_0)))) ? (((/* implicit */long long int) var_17)) : (((var_10) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : ((~(1960006616756519959LL)))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 1915391290877413584LL)) || (((/* implicit */_Bool) var_8)))))));
            }
        } 
    } 
    var_23 = var_5;
}
