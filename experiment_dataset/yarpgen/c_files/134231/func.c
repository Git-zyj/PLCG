/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134231
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
    var_14 = ((/* implicit */unsigned char) var_11);
    var_15 = ((/* implicit */long long int) ((6531969120176812826ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((_Bool) arr_2 [i_0] [i_1 - 4] [i_1])) ? (((6531969120176812826ULL) << (((11914774953532738799ULL) - (11914774953532738750ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_2 [i_0] [i_0 + 1] [i_1 + 1])))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((arr_3 [i_1] [i_1] [i_0 - 4]) / (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 6746032786078113754ULL)) ? (6531969120176812826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)203)) + (((((/* implicit */_Bool) -1003965190)) ? (((/* implicit */int) ((unsigned short) 1097901356))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
