/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113156
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
    var_10 += ((/* implicit */int) ((((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)1633)) : (((/* implicit */int) var_0))))))) / (((long long int) max((var_4), (((/* implicit */unsigned long long int) 851058233U)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 6; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned int) (short)-32756))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32743))) : (max((((/* implicit */unsigned int) (unsigned short)12865)), (3317316390U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) & (var_4)))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) var_5)))))));
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) ((3443909053U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1])))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65521)) : (arr_0 [i_0] [i_0])))))), (min((max((2291352874799443181LL), (((/* implicit */long long int) arr_4 [(short)4] [i_2])))), (((/* implicit */long long int) var_8))))));
                    var_13 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
}
