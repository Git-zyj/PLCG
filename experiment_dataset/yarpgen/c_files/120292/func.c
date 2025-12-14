/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120292
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36733)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) 2258458488U)))) : (min((((/* implicit */long long int) var_4)), (var_1)))));
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)53)) ? (var_3) : (((/* implicit */int) (signed char)30))))), (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))) ? (var_3) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65279))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = arr_4 [i_0 + 1];
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)7])) ? (arr_3 [2ULL] [i_1]) : (arr_6 [i_0] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0] [i_0])));
                arr_7 [i_0 + 1] [(_Bool)1] [i_0 + 2] = ((/* implicit */_Bool) arr_5 [i_0 + 1]);
                var_15 = ((/* implicit */_Bool) (unsigned char)0);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (((((/* implicit */_Bool) 3861695671U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) : (0LL)))));
    var_17 ^= min((((/* implicit */long long int) (unsigned short)14585)), (((((((/* implicit */long long int) 723114966)) >= (var_2))) ? (min((((/* implicit */long long int) (unsigned char)203)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -130366254738282110LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)33))))))));
}
