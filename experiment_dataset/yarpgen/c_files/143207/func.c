/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143207
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(2147483647))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_0 - 1])) ^ (((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                var_22 = ((/* implicit */int) var_18);
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)122)), (arr_1 [(_Bool)1])))) || (var_11))) ? (min((max((arr_0 [(unsigned short)0]), (arr_0 [i_1]))), ((-(arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5))))) == (((((((/* implicit */int) (signed char)-109)) + (2147483647))) >> (((1693449168U) - (1693449140U)))))))))));
                arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((2147483647) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) 4028745574565697471ULL)) ? (arr_0 [15ULL]) : (((/* implicit */long long int) 1098021093U)))))))));
            }
        } 
    } 
}
