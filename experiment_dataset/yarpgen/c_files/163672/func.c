/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163672
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = (~((+(((/* implicit */int) arr_0 [11U])))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned long long int) -931303085)))));
                    var_21 ^= ((int) min((((var_4) >> (((-931303085) + (931303093))))), ((~(((/* implicit */int) arr_2 [18ULL]))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 536870911)) || (((/* implicit */_Bool) min((((/* implicit */int) var_18)), (-931303085))))));
                }
            } 
        } 
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_17))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
        arr_12 [3U] = ((/* implicit */int) var_17);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))) + (arr_10 [i_3])));
    }
    var_25 = ((/* implicit */unsigned long long int) (~(((var_9) | (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) var_17)) - (157))))))))));
    var_26 += ((/* implicit */int) var_9);
    var_27 ^= (+(max((0ULL), (((/* implicit */unsigned long long int) (signed char)5)))));
}
