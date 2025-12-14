/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187591
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -21LL)) ? (((((((/* implicit */_Bool) 8412597005950676562ULL)) && (var_11))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) : (var_1)));
    var_19 ^= ((/* implicit */unsigned int) var_16);
    var_20 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((signed char)84), (((/* implicit */signed char) var_11)))), (((/* implicit */signed char) max((var_15), ((_Bool)1)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3939231056U)) ? (((/* implicit */unsigned int) var_17)) : (var_3)))) & (max((((/* implicit */unsigned long long int) var_13)), (var_2)))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_5 [i_1]);
                arr_11 [i_2] [11U] = ((/* implicit */short) arr_6 [i_1] [12ULL]);
                arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */unsigned int) arr_9 [0LL])), (524256U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [3ULL] [i_1])) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) arr_4 [i_1])))))))) > (((/* implicit */int) max((arr_8 [i_1] [i_1] [(_Bool)0]), (arr_8 [i_1] [i_2] [i_2]))))));
                arr_13 [6] [i_2] = ((/* implicit */unsigned int) arr_8 [(short)14] [i_2] [(short)14]);
            }
        } 
    } 
}
