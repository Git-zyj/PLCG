/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162812
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) (unsigned char)74);
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)-32028)) == (((/* implicit */int) (unsigned short)42849)))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [0] [i_1]))))) : (((/* implicit */int) (short)-32021))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))), (max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [1] [i_1] [i_2])))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_1 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((/* implicit */int) ((_Bool) (short)-10963))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32016)) : (((/* implicit */int) (unsigned short)42849))))))) / (var_10)));
}
