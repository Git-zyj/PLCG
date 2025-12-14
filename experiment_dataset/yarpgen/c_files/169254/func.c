/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169254
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 &= ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)12]))) : (arr_0 [6LL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-13)))))))) & (max((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */long long int) arr_0 [16ULL])) : (arr_3 [(short)18]))), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))))));
                var_19 = ((/* implicit */int) max((var_19), (max(((-(((/* implicit */int) arr_2 [2])))), ((-(((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) arr_1 [(unsigned char)16])) : (((/* implicit */int) arr_5 [(_Bool)1]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_0);
    var_21 ^= ((/* implicit */unsigned int) max((((var_14) ? (((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))));
    var_22 = (+(((((/* implicit */int) var_12)) >> (((((/* implicit */int) ((signed char) (signed char)-1))) + (8))))));
}
