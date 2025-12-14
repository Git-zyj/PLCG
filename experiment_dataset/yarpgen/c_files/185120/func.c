/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185120
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)153)), (((((/* implicit */_Bool) (short)1720)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (1958400571U)))))) ? (((((((/* implicit */_Bool) 1958400571U)) ? (2336566726U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned int) (+(var_2)))))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (unsigned short)65525)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_0 [0ULL])) ? (1958400573U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [18] [18] [(signed char)17] [18]))))));
                    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
                    arr_8 [i_1] |= ((/* implicit */_Bool) (-(((/* implicit */int) (short)32739))));
                }
            } 
        } 
        var_15 = ((unsigned int) arr_4 [i_0]);
    }
    var_16 = ((/* implicit */int) min((5514896053749648952ULL), (((/* implicit */unsigned long long int) (unsigned short)65527))));
}
