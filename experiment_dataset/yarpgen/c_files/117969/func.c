/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117969
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) var_1)))), ((!(((/* implicit */_Bool) (short)-6833))))))) <= ((~(((var_6) - (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0] [(short)5]) : (arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((903044720) < (((/* implicit */int) arr_2 [i_1])))))) : (13685532092191424530ULL)));
                arr_6 [14ULL] [(_Bool)1] = ((/* implicit */short) ((int) var_16));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) arr_5 [i_0] [i_0])))) : ((+((+(((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) | (((((/* implicit */int) arr_2 [11])) >> ((((+(11487936906599535108ULL))) - (11487936906599535106ULL)))))));
                                arr_18 [i_4] = ((/* implicit */short) -739930649);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_8 [i_1] [i_1]))));
                                arr_19 [(unsigned short)6] [(signed char)7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~((~(((/* implicit */int) arr_13 [(unsigned short)17]))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 8915012608047010411LL)), (7056733870860278543ULL)))) ? (((arr_10 [i_4] [i_1] [3LL] [i_3]) & (690796094316474191LL))) : (var_14)))));
                                arr_20 [i_0] [0ULL] [i_1] [5] [16U] [(unsigned short)2] = ((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_0] [11ULL] [i_4]), (((((((/* implicit */_Bool) var_15)) ? (-8581426111359136061LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned short)6] [i_0]))))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((/* implicit */long long int) arr_1 [(short)3])) : (arr_10 [i_0] [(short)9] [i_3 - 1] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) 16082546);
}
