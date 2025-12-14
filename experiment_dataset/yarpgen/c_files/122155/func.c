/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122155
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_7 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 2])) : (((/* implicit */int) (unsigned short)42316)))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) : (max((((/* implicit */unsigned long long int) (unsigned short)23220)), (var_14))))) : ((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) var_2))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) (-(5202995261948644047ULL)));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2445764220233414728LL)) ? (12160475324883274121ULL) : (((/* implicit */unsigned long long int) -3913669808379980982LL))));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4 - 1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 1])) ? (((/* implicit */int) arr_4 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_4 [i_3 - 2] [i_3 + 2]))))), (((((/* implicit */_Bool) -396224365)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (var_7)));
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_5)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23213))) : (((((/* implicit */unsigned long long int) var_5)) + (min((((/* implicit */unsigned long long int) var_0)), (var_14))))));
}
