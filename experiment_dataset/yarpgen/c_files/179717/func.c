/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179717
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
    var_20 = ((/* implicit */unsigned char) (((_Bool)0) ? (-1165553008) : (((/* implicit */int) (_Bool)1))));
    var_21 -= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_2] [i_2] [(_Bool)1] [(unsigned char)9] = ((/* implicit */_Bool) (+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                            arr_12 [i_2] [i_1] = ((/* implicit */unsigned long long int) var_19);
                        }
                    } 
                } 
                arr_13 [10] [i_1] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (var_15)))), (var_10)))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
            {
                {
                    arr_20 [i_4 + 1] [i_5] [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_6 + 1] [i_6 - 1] [i_6] [i_6] [i_5] [i_4])) ? (498463396) : (var_5))) == (((((/* implicit */int) (unsigned char)12)) >> (((((int) arr_1 [i_4])) - (50445)))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_16)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_27 [i_4] = ((/* implicit */long long int) max((var_5), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((arr_6 [i_4] [i_4] [(unsigned char)11]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33980))))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) -1056538265))));
                                arr_28 [i_4] [i_5] [i_6] [i_4] = (-((~(((/* implicit */int) ((signed char) var_14))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 2; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
                        {
                            {
                                arr_33 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) var_18)) ? (min((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) min((arr_22 [i_4 - 1] [i_6] [(unsigned short)4] [i_9 + 2]), (((/* implicit */int) arr_5 [i_10] [i_5] [i_6 + 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
                                arr_34 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_0);
                                var_25 = ((/* implicit */int) var_18);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
