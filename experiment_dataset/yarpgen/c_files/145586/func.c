/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145586
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_10 = ((/* implicit */unsigned short) var_3);
    }
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)122)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-122)) && (((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2 - 3] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [8ULL] [8ULL]);
                    arr_11 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_3 [i_1])))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)11667))));
}
