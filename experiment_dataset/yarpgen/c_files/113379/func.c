/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113379
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
    var_13 = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) var_7)), (var_8))), (var_8))) ^ (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) ((((/* implicit */unsigned int) -1326789588)) - (var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (var_4))))) : ((+(var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((arr_2 [i_0] [i_1 - 1]) < (((/* implicit */unsigned long long int) arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (max((var_8), (arr_2 [i_0] [i_1]))))) < (((((/* implicit */_Bool) ((arr_0 [i_0] [i_1 + 2]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (~(var_11)))) : (((((/* implicit */_Bool) var_9)) ? (var_12) : (var_1)))))));
                arr_6 [i_0] = ((/* implicit */int) var_6);
            }
        } 
    } 
}
