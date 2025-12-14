/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103781
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-50)) - (((/* implicit */int) (unsigned short)65514))))));
    }
    var_11 = ((/* implicit */signed char) (+(3875490913U)));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_12 = var_7;
        var_13 = var_1;
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) ((416184675) - (((/* implicit */int) arr_6 [i_2] [i_2]))))) + ((-(0ULL))))));
        arr_7 [i_2] = ((/* implicit */unsigned short) min((-416184675), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37054)))))))));
    }
}
