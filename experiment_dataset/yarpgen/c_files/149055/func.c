/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149055
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */unsigned int) max((arr_1 [i_0]), (((int) arr_1 [i_0 + 1]))));
        var_16 = (-(((((/* implicit */int) var_9)) - (((/* implicit */int) max(((unsigned char)107), (((/* implicit */unsigned char) (_Bool)1))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 22; i_3 += 4) 
                {
                    {
                        var_17 = 4U;
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((int) var_9)))) / (arr_1 [i_2])));
                    }
                } 
            } 
        } 
    }
    var_19 ^= ((/* implicit */short) ((int) var_3));
}
