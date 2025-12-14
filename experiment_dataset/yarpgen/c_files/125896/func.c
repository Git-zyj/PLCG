/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125896
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_5 [i_1 - 1] [i_1] [i_1] [14ULL]) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14166)) ? (arr_3 [(signed char)12] [i_1 + 3]) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [(unsigned short)4]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (arr_5 [i_0] [i_0] [i_1 + 3] [12]))) : (((((/* implicit */int) (unsigned char)3)) / (var_13))))))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((~(arr_7 [i_2 - 1] [i_1 - 1] [i_0]))) == ((~(arr_7 [i_1 + 4] [i_1 - 1] [i_2 - 2]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) != (8804754106657110479ULL)));
}
