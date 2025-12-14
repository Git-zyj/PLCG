/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141548
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
    var_15 = ((/* implicit */long long int) (!((_Bool)1)));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1))))))));
        var_18 &= ((/* implicit */unsigned int) ((max((arr_1 [(_Bool)0]), (((/* implicit */long long int) var_1)))) << (((((((/* implicit */_Bool) arr_0 [0ULL])) ? (862757482789823610ULL) : (((/* implicit */unsigned long long int) arr_1 [14U])))) - (862757482789823585ULL)))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((2064920358U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ? (arr_0 [(_Bool)0]) : (((/* implicit */int) (short)-19666))))))))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), ((~(var_9))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_3 [10]))))))));
                        var_21 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_14)), (arr_0 [i_0])))));
                    }
                } 
            } 
        } 
    }
}
