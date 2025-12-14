/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165484
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
    var_17 = ((/* implicit */unsigned char) (unsigned short)42996);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [(unsigned char)15] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 1])) / (var_11)))) ? (((arr_3 [i_0] [i_2]) * (arr_3 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1])) ? (((/* implicit */int) (unsigned short)22539)) : (((/* implicit */int) var_10))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22539))))) ? (((/* implicit */int) min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 2])))) : (((/* implicit */int) max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2]))))));
                }
            } 
        } 
    } 
}
