/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105579
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
    var_10 &= ((/* implicit */unsigned long long int) min((((max((var_4), (((/* implicit */int) var_8)))) << (((var_1) - (511709679))))), (((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_2] [i_1] [i_0]))))) - (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [2] [i_1] [(unsigned short)13]) == (((/* implicit */int) (unsigned char)34))))))))));
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) (signed char)-27)) : ((-(var_1)))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) min((9221677279910343571ULL), (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
}
