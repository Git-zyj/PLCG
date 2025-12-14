/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109492
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
    var_15 ^= ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */long long int) var_7)) / (var_6))), (((/* implicit */long long int) min((var_8), (((/* implicit */short) (unsigned char)255))))))));
    var_16 = ((/* implicit */unsigned short) (-(((unsigned int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0])));
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3]))) : (arr_1 [i_0 + 1])));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_0] [i_1 - 1])))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 9291286944821917269ULL))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        var_19 = ((/* implicit */int) ((signed char) arr_13 [i_4 - 2] [i_4 - 2]));
        var_20 = ((/* implicit */unsigned long long int) (+(261632U)));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((short) ((unsigned long long int) (unsigned char)150))))));
        arr_17 [i_5] |= ((/* implicit */unsigned short) max((min((arr_16 [i_5 + 1]), (arr_16 [i_5]))), (((arr_16 [i_5 + 1]) - (var_2)))));
        var_22 = ((/* implicit */_Bool) arr_16 [i_5 + 1]);
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
}
