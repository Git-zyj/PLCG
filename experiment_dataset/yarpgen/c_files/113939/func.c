/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113939
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
    var_13 ^= ((/* implicit */long long int) max(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) == (var_7)))))), (((((/* implicit */int) var_0)) >> (((var_6) + (8264818691018484658LL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_8 [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) arr_0 [i_1 - 4])), (3415410559U))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 1])))))));
                var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [(unsigned char)8] [(unsigned char)8])) + (((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3]))))));
            }
        } 
    } 
}
