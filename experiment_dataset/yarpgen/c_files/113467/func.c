/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113467
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
    var_13 = var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 = (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (arr_0 [i_2]) : (-2046179544)))) + (((((/* implicit */_Bool) (signed char)127)) ? (arr_4 [i_0] [i_0] [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 + 3] [i_0])))))));
                    var_15 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_0] [i_0 + 2])) / (((/* implicit */int) arr_3 [i_0] [i_0 + 2])))), (((var_1) ? (((/* implicit */int) (!(arr_3 [i_0] [i_0])))) : (((/* implicit */int) (short)-31949))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1] [i_2])) ? ((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)141)))))) : ((+(((((/* implicit */int) var_3)) % (arr_0 [i_2])))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (unsigned char)48);
                }
            } 
        } 
    } 
}
