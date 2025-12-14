/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144695
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((max((arr_0 [i_0]), (arr_0 [i_0]))), (((int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) arr_0 [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((int) (short)15725));
        var_20 = max((min((((/* implicit */unsigned int) ((int) arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        arr_16 [i_1 + 2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((int) arr_13 [20] [i_2] [i_3]));
                        var_21 &= ((/* implicit */int) ((short) ((short) min((((/* implicit */int) arr_6 [(signed char)10] [i_2])), (arr_12 [i_1] [i_1] [i_1])))));
                        var_22 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) ((unsigned long long int) arr_7 [i_1])))), (max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_1])), (min((((/* implicit */unsigned long long int) arr_15 [i_2])), (arr_9 [i_1 + 2] [i_2])))))));
                        var_23 = ((/* implicit */int) arr_5 [i_1 + 2]);
                    }
                } 
            } 
        } 
        arr_17 [i_1 + 1] = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]);
        arr_18 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_10 [(short)5] [(short)5] [i_1]))))));
    }
    var_24 |= ((/* implicit */short) var_14);
    var_25 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) max((var_7), (((/* implicit */unsigned long long int) 9))))));
}
