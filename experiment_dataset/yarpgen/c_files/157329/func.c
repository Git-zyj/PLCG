/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157329
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
    var_11 = ((/* implicit */unsigned short) var_8);
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-19507)) : (((/* implicit */int) (_Bool)1)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_10)) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 14733320956213927356ULL)) ? (((/* implicit */int) (short)-19507)) : (((/* implicit */int) (short)19507))))) : (var_1)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_3 [19ULL] [i_2] [(unsigned short)19]);
                    var_14 = ((/* implicit */unsigned int) arr_5 [i_0]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2ULL])) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_1 [15U] [15U]) : (((/* implicit */long long int) arr_5 [i_2]))))))) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (-1570490324) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))) : (((((/* implicit */_Bool) arr_1 [2LL] [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [3U])) : (((/* implicit */int) arr_7 [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
}
