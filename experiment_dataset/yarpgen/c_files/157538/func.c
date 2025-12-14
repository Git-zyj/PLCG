/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157538
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_2 - 2] [2ULL] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_0]))));
                        var_11 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)18))))) + (((arr_0 [i_0 - 1] [11ULL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        } 
        arr_10 [4] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_5))));
    }
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((var_8) % (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) var_10)))) << (((((/* implicit */int) ((short) var_7))) - (36)))))))))));
}
