/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143143
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_1] [i_2 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [2LL]);
                    arr_10 [i_2] [i_1 - 1] [i_0] = ((/* implicit */_Bool) var_1);
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [(signed char)14]), (((/* implicit */unsigned short) (unsigned char)103))))) && (((/* implicit */_Bool) var_6))))) % ((-(((/* implicit */int) (short)-29604))))));
                    arr_11 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_2 [i_0] [7] [i_2])))));
                    var_13 = ((/* implicit */signed char) ((unsigned char) ((arr_0 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)32767)))) : (arr_3 [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (((long long int) ((((/* implicit */int) var_3)) | (1209693611))))));
}
