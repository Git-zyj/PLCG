/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155531
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
    var_11 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min((var_8), (var_7))))))));
    var_12 = ((/* implicit */unsigned long long int) min((var_2), ((-(var_2)))));
    var_13 = ((/* implicit */long long int) (-(var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2]);
                    arr_8 [0ULL] [i_0] [0ULL] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)31)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)13] [i_2] [3])) : (arr_1 [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_8);
}
