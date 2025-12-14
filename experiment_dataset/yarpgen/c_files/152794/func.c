/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152794
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
    var_11 = ((/* implicit */int) max((max(((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-21))))))), (min((((/* implicit */long long int) ((0) | ((-2147483647 - 1))))), (var_3)))));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(var_3))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [9U] [i_0 + 1] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) var_6)), (var_7))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3915255779U)) || (((/* implicit */_Bool) 1806506670U)))))));
                    var_13 = ((/* implicit */unsigned int) ((_Bool) (+(min((var_0), (((/* implicit */long long int) var_8)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_11 [9ULL] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56))))) >> (((432345564227567616ULL) - (432345564227567606ULL))))) > (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)76))))))));
                        arr_12 [i_0] [i_1 + 3] [9ULL] [i_2] [i_3] [i_3] = ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) max((arr_10 [i_0] [i_1 + 4] [i_1 + 4] [i_2] [3U]), (((/* implicit */unsigned short) (_Bool)1)))))))) >= (((((arr_6 [i_0] [i_2] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18223862886447765401ULL))) & (max((18446739675663040512ULL), (((/* implicit */unsigned long long int) var_6)))))));
                    }
                }
            } 
        } 
    } 
}
